//
// Created by cpasjuste on 21/11/16.
//

#if 0
#include <citro3d.h>
#include "cross2d/platforms/3ds/ctr_texture.h"
#include "cross2d/platforms/3ds/ctr_renderer.h"

using namespace c2d;

#define CLEAR_COLOR 0x000000FF
#define DISPLAY_TRANSFER_FLAGS \
    (GX_TRANSFER_FLIP_VERT(0) | GX_TRANSFER_OUT_TILED(0) | GX_TRANSFER_RAW_COPY(0) | \
    GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8) | GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGB8) | \
    GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO))
extern const u8 vshader_shbin[];
extern const u32 vshader_shbin_size;

CTRRenderer::CTRRenderer(const Vector2f &size) : Renderer(size) {

    osSetSpeedupEnable(true);

    gfxInitDefault();
    gfxSet3D(false);
    consoleInit(GFX_BOTTOM, nullptr);
    //consoleDebugInit(debugDevice_SVC);

    printf("CTRRenderer\n");

    C3D_Init(C3D_DEFAULT_CMDBUF_SIZE);
    // Initialize the render target
    target = C3D_RenderTargetCreate((int) getSize().y, (int) getSize().x, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    //C3D_RenderTargetSetClear(target, C3D_CLEAR_ALL, CLEAR_COLOR, 0);
    C3D_RenderTargetSetOutput(target, GFX_TOP, GFX_LEFT, DISPLAY_TRANSFER_FLAGS);

    // Load the vertex shader, create a shader program and bind it
    vshader_dvlb = DVLB_ParseFile((u32 *) vshader_shbin, vshader_shbin_size);
    shaderProgramInit(&program);
    shaderProgramSetVsh(&program, &vshader_dvlb->DVLE[0]);
    C3D_BindProgram(&program);

    // Get the location of the uniforms
    uloc_projection = shaderInstanceGetUniformLocation(program.vertexShader, "projection");

    // Compute the projection matrix
    // Note: we're setting top to height here so origin is at top left.
    Mtx_OrthoTilt(&mtx_projection, 0.0, getSize().x, getSize().y, 0.0, 0.0, 1.0, true);
    C3D_FVUnifMtx4x4(GPU_VERTEX_SHADER, uloc_projection, &mtx_projection);

    // Configure depth test to overwrite pixels with the same depth (needed to draw overlapping sprites)
    C3D_DepthTest(true, GPU_GEQUAL, GPU_WRITE_ALL);

    available = true;
}

void CTRRenderer::draw(VertexArray *vertexArray,
                       const Transform &transform,
                       const Texture *texture) {

    if (!vertexArray || vertexArray->getVertexCount() < 1) {
        printf("ctr_renderer::draw: no vertices\n");
        return;
    }

    Vertex *vertices = vertexArray->getVertices().data();
    size_t vertexCount = vertexArray->getVertexCount();

    GPU_Primitive_t type;
    switch (vertexArray->getPrimitiveType()) {

        case PrimitiveType::Triangles:
            type = GPU_TRIANGLES;
            break;

        case PrimitiveType::TriangleStrip:
            type = GPU_TRIANGLE_STRIP;
            break;

        case PrimitiveType::TriangleFan:
            type = GPU_TRIANGLE_FAN;
            break;

        default:
            printf("CTRRenderer::draw: unsupported primitive type\n");
            return;
    }

    C3D_TexEnv *env = C3D_GetTexEnv(0);
    C3D_TexEnvInit(env);
    C3D_TexEnvSrc(env, C3D_Both, texture ? GPU_TEXTURE0 : GPU_PRIMARY_COLOR, 0, 0);
    C3D_TexEnvOp(env, C3D_Both, 0, 0, 0);
    C3D_TexEnvFunc(env, C3D_Both, GPU_REPLACE);

    C3D_AttrInfo *attrInfo = C3D_GetAttrInfo();
    AttrInfo_Init(attrInfo);
    AttrInfo_AddLoader(attrInfo, 0, GPU_FLOAT, 3);                  // v0=position
    AttrInfo_AddLoader(attrInfo, 1, GPU_FLOAT, texture ? 2 : 4);    // v1=texcoord or color

    if (texture) {
        C3D_TexBind(0, &((CTRTexture *) texture)->tex);
    }

    C3D_ImmDrawBegin(type);

    for (unsigned int i = 0; i < vertexCount; i++) {

        Vector2f v = transform.transformPoint(vertices[i].position);

        C3D_ImmSendAttrib(v.x, v.y, 0.5f, 0.0f);
        if (texture) {
            C3D_ImmSendAttrib(
                    vertices[i].texCoords.x / texture->getSize().x,
                    vertices[i].texCoords.y / texture->getSize().y, 0.0f, 0.0f);
        } else {
            float r = (float) vertices[i].color.r / 255.0f;
            float g = (float) vertices[i].color.g / 255.0f;
            float b = (float) vertices[i].color.b / 255.0f;
            float a = (float) vertices[i].color.a / 255.0f;
            C3D_ImmSendAttrib(r, g, b, a);
        }
    }

    C3D_ImmDrawEnd();
}

void CTRRenderer::clear() {

    C3D_RenderTargetClear(target, C3D_CLEAR_ALL,
                          m_clearColor.toRGBA(), 0);
}

void CTRRenderer::flip(bool draw) {

    if (draw) {
        clear();
        C3D_FrameBegin(0);
        C3D_FrameDrawOn(target);
    }

    // call base class (draw childs)
    Renderer::flip(draw);

    if (draw) {
        C3D_FrameEnd(0);
    }
}

void CTRRenderer::delay(unsigned int ms) {

    s64 nano = ms * 1000000;
    svcSleepThread(nano);
}

CTRRenderer::~CTRRenderer() {

    shaderProgramFree(&program);
    DVLB_Free(vshader_dvlb);
    C3D_RenderTargetDelete(target);
    C3D_Fini();
    gfxExit();
}
#endif