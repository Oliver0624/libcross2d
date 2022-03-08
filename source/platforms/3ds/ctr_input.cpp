//
// Created by cpasjuste on 11/01/17.
//

#include <3ds.h>
#include "cross2d/platforms/3ds/ctr_input.h"

using namespace c2d;

static int key_id[KEY_COUNT]{
        Input::Key::Up,
        Input::Key::Down,
        Input::Key::Left,
        Input::Key::Right,
        Input::Key::Select,
        Input::Key::Start,
        Input::Key::Fire1,
        Input::Key::Fire2,
        Input::Key::Fire3,
        Input::Key::Fire4,
        Input::Key::Fire5,
        Input::Key::Fire6,
        Input::Key::Fire7,
        Input::Key::Fire8,
        Input::Key::Menu1,
        Input::Key::Menu2
};

CTRInput::CTRInput() : Input() {
    players[0].enabled = true;
}

CTRInput::~CTRInput() {
    for (auto &player: players) {
        player.enabled = false;
    }
}

bool CTRInput::waitKey(unsigned int *key, int player) {
    // TODO
    return true;
}

Input::Player *CTRInput::update(int rotate) {
    for (auto &player: players) {
        player.keys = 0;
    }

    if (!aptMainLoop()) {
        players[0].keys |= EV_QUIT;
        return players;
    }

    process_buttons(players[0], rotate);

    // mandatory to handle repeat delay if needed
    return Input::update(rotate);
}

void CTRInput::process_buttons(Input::Player &player, int rotate) {
    if (!player.enabled) {
        return;
    }

    hidScanInput();
    u32 held = hidKeysHeld();

    for (int i = 0; i < KEY_COUNT; i++) {
        u32 mapping = player.mapping[i];
        if (mapping < 0) {
            mapping = 0;
        }

        if (held & mapping) {
            if (rotate && key_id[i] == Input::Key::Up) {
                if (rotate == 1) {
                    player.keys |= Input::Key::Right;
                } else if (rotate == 3) {
                    player.keys |= Input::Key::Left;
                }
            } else if (rotate && key_id[i] == Input::Key::Down) {
                if (rotate == 1) {
                    player.keys |= Input::Key::Left;
                } else if (rotate == 3) {
                    player.keys |= Input::Key::Right;
                }
            } else if (rotate && key_id[i] == Input::Key::Left) {
                if (rotate == 1) {
                    player.keys |= Input::Key::Up;
                } else if (rotate == 3) {
                    player.keys |= Input::Key::Down;
                }
            } else if (rotate && key_id[i] == Input::Key::Right) {
                if (rotate == 1) {
                    player.keys |= Input::Key::Down;
                } else if (rotate == 3) {
                    player.keys |= Input::Key::Up;
                }
            } else {
                player.keys |= key_id[i];
            }
        }
    }
}
