//
// Created by cpasjuste on 21/11/16.
//

#ifdef __GL1__

// GLdc doesn't like mixing blend and non blend textures
//#define BLEND_TEST 1

#include "cross2d/c2d.h"

using namespace c2d;

GLRenderer::GLRenderer(const Vector2f &size) : Renderer(size) {
    printf("GL1Renderer\n");
}

void GLRenderer::initGL() {

    printf("GL vendor   : %s\n", glGetString(GL_VENDOR));
    printf("GL renderer : %s\n", glGetString(GL_RENDERER));
    printf("GL version  : %s\n", glGetString(GL_VERSION));

    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDepthMask(GL_FALSE);

#ifndef BLEND_TEST
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
#endif

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, getSize().x, getSize().y, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void GLRenderer::draw(VertexArray *vertexArray, const Transform &transform, Texture *texture, Sprite *sprite) {

    Vertex *vertices;
    size_t vertexCount;
    GLint texId = 0;

    if (vertexArray == nullptr || vertexArray->getVertexCount() < 1) {
        //printf("GL1Renderer::draw: no vertices\n");
        return;
    }

    vertices = vertexArray->getVertices()->data();
    vertexCount = vertexArray->getVertexCount();

    if (transform == Transform::Identity) {
        glLoadIdentity();
    } else {
        glLoadMatrixf(transform.getMatrix());
    }

    GLTexture *tex = sprite != nullptr ? (GLTexture *) sprite->getTexture() : (GLTexture *) texture;
    if (tex && tex->available) {
        glEnable(GL_TEXTURE_2D);
        glGetIntegerv(GL_TEXTURE_BINDING_2D, &texId);
        if (texId != (GLint) tex->texID) {
            glBindTexture(GL_TEXTURE_2D, tex->texID);
        } else {
            //printf("glBindTexture: skipping: %i\n", texId);
            draw_calls_batched++;
        }
#if BLEND_TEST
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
#endif
    }
#if BLEND_TEST
    else if (vertices[0].color.a < 255) {
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    }
#endif

    const GLenum modes[] = {GL_POINTS, GL_LINES, GL_LINE_STRIP, GL_TRIANGLES,
                            GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_QUADS};
    GLenum mode = modes[vertexArray->getPrimitiveType()];

    glBegin(mode);

    for (unsigned int i = 0; i < vertexCount; i++) {
        if (tex && tex->available) {
            glTexCoord2f(vertices[i].texCoords.x, vertices[i].texCoords.y);
        }
        glColor4f((float) vertices[i].color.r / 255.0f,
                  (float) vertices[i].color.g / 255.0f,
                  (float) vertices[i].color.b / 255.0f,
                  (float) vertices[i].color.a / 255.0f);
        glVertex2f(vertices[i].position.x, vertices[i].position.y);
    }

    glEnd();

    if (tex != nullptr && tex->available) {
        glDisable(GL_TEXTURE_2D);
#if BLEND_TEST
        glDisable(GL_BLEND);
#endif
    }
#if BLEND_TEST
    else if (vertices[0].color.a < 255) {
        glDisable(GL_BLEND);
    }
#endif
    draw_calls++;
}

void GLRenderer::clear() {

    glClearColor((float) m_clearColor.r / 255.0f,
                 (float) m_clearColor.g / 255.0f,
                 (float) m_clearColor.b / 255.0f,
                 (float) m_clearColor.a / 255.0f);
    glClearDepth(0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void GLRenderer::flip(bool draw, bool inputs) {

    // call base class (draw childs)
    Renderer::flip(draw, inputs);
}

GLRenderer::~GLRenderer() {
    printf("~GL1Renderer\n");
}

#endif // __GL1__
