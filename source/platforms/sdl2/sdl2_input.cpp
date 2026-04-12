//
// Created by cpasjuste on 11/01/17.
//

#include "cross2d/c2d.h"

using namespace c2d;

SDL2Input::SDL2Input() : Input() {
    if (SDL_WasInit(SDL_INIT_GAMECONTROLLER) == 0) {
        SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER);
    }

    int joystick_count = SDL_NumJoysticks();
    if (joystick_count > PLAYER_MAX) {
        joystick_count = PLAYER_MAX;
    }

    printf("SDL2Input: %i Joystick(s) Found\n", joystick_count);

    if (joystick_count > 0) {
        for (int i = 0; i < joystick_count; i++) {
            if (!SDL_IsGameController(i)) {
                printf("SDL2Input: joystick %i is not a game controller, skipping!", i);
                continue;
            }

            SDL_GameController *pad = SDL_GameControllerOpen(i);
            char *mapping = SDL_GameControllerMapping(pad);
            printf("SDL2Input: GameController detected: %s, mapping: %s\n",
                   SDL_GameControllerName(pad), mapping);
            SDL_free(mapping);

            m_players[i].data = pad;
            m_players[i].id = i;
            m_players[i].enabled = true;
        }
    } else {
        // allow keyboard mapping to player1
        m_players[0].enabled = true;
    }
}

Input::Player *SDL2Input::update() {
    bool quit = false;

    // be sure sdl events are "pumped/cleared" before calling Input::update
    SDL_Event event = {};
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            quit = true;
            break;
        }
    }

    Player *players = Input::update();
    if (quit) {
        players[0].buttons |= Input::Button::Quit;
    }

    return players;
}

Vector2f SDL2Input::getAxisState(const Player &player, int xAxis, int yAxis) {
    auto pad = (SDL_GameController *) player.data;

    return {
            (float) SDL_GameControllerGetAxis(pad, (SDL_GameControllerAxis) xAxis),
            (float) SDL_GameControllerGetAxis(pad, (SDL_GameControllerAxis) yAxis)
    };
}

int SDL2Input::getButtonState(const Player &player, int button) {
    auto pad = (SDL_GameController *) player.data;

    if (button == ((int) SDL_CONTROLLER_AXIS_TRIGGERLEFT + 100)
        || button == ((int) SDL_CONTROLLER_AXIS_TRIGGERRIGHT + 100)) {
        return SDL_GameControllerGetAxis(pad, (SDL_GameControllerAxis) (button - 100)) > player.dz;
    }

    return SDL_GameControllerGetButton(pad, (SDL_GameControllerButton) button) > 0;
}

int SDL2Input::getKeyState(int key) {
#ifndef NO_KEYBOARD
    return SDL_GetKeyboardState(nullptr)[key] > 0;
#else
    return 0;
#endif
}

Input::Pointer SDL2Input::getPointer(int player) {
    Pointer pointer{};
    int x = 0;
    int y = 0;
    int dx = 0;
    int dy = 0;
    Uint32 state = SDL_GetMouseState(&x, &y);

    (void) player;

    pointer.position = {(float) x, (float) y};
    SDL_GetRelativeMouseState(&dx, &dy);
    pointer.delta = {(float) dx, (float) dy};
    pointer.active = SDL_GetMouseFocus() != nullptr || state != 0;
    pointer.type = Pointer::Mouse;
    if (state & SDL_BUTTON(SDL_BUTTON_LEFT)) {
        pointer.buttons |= Pointer::Primary;
    }
    if (state & SDL_BUTTON(SDL_BUTTON_RIGHT)) {
        pointer.buttons |= Pointer::Secondary;
    }
    if (state & SDL_BUTTON(SDL_BUTTON_MIDDLE)) {
        pointer.buttons |= Pointer::Middle;
    }

#if SDL_VERSION_ATLEAST(2, 0, 0)
    SDL_Window *window = SDL_GetMouseFocus();
    if (window == nullptr) {
        window = SDL_GetKeyboardFocus();
    }
    int windowWidth = 0;
    int windowHeight = 0;
    if (window != nullptr) {
        SDL_GetWindowSize(window, &windowWidth, &windowHeight);
    }

    if (windowWidth > 0 && windowHeight > 0) {
        int devices = SDL_GetNumTouchDevices();
        for (int device = 0; device < devices; device++) {
            SDL_TouchID touchId = SDL_GetTouchDevice(device);
            int fingers = SDL_GetNumTouchFingers(touchId);
            for (int fingerIndex = 0; fingerIndex < fingers; fingerIndex++) {
                SDL_Finger *finger = SDL_GetTouchFinger(touchId, fingerIndex);
                if (finger == nullptr) {
                    continue;
                }

                pointer.position = {
                        finger->x * (float) windowWidth,
                        finger->y * (float) windowHeight
                };
                pointer.delta = Vector2f(0, 0);
                pointer.buttons |= Pointer::Primary;
                pointer.type = Pointer::Touch;
                pointer.active = true;
                return pointer;
            }
        }
    }
#endif

    return pointer;
}

Vector2f SDL2Input::getTouch() {
    int x = 0;
    int y = 0;

    if (SDL_GetMouseState(&x, &y) & SDL_BUTTON(SDL_BUTTON_LEFT)) {
        return {(float) x, (float) y};
    }

    return {};
}

int SDL2Input::waitButton(int player) {
    SDL_Event event = {};

    while (SDL_PollEvent(&event) != 0) {
        if (event.type == SDL_CONTROLLERBUTTONDOWN) {
            return event.cbutton.button;
        } else if (event.type == SDL_CONTROLLERAXISMOTION) {
            if ((event.caxis.axis == SDL_CONTROLLER_AXIS_TRIGGERLEFT ||
                 event.caxis.axis == SDL_CONTROLLER_AXIS_TRIGGERRIGHT)
                && (event.caxis.value < -16000 || event.caxis.value > 16000)) {
                return event.caxis.axis + 100;
            }
        } else if (event.type == SDL_KEYDOWN) {
            return event.key.keysym.scancode;
        }
    }

    return -1;
}

SDL2Input::~SDL2Input() {
    if (SDL_WasInit(SDL_INIT_GAMECONTROLLER)) {
        SDL_QuitSubSystem(SDL_INIT_GAMECONTROLLER);
    }
}
