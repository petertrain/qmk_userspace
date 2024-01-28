// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "petertrain_miryoku.h"

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                oled_write_raw(layer_colemak, sizeof(layer_colemak));
                break;
            case 1:
                oled_write_raw(layer_nav, sizeof(layer_nav));
                break;
            case 2:
                oled_write_raw(layer_mouse, sizeof(layer_mouse));
                break;
            case 3:
                oled_write_raw(layer_media, sizeof(layer_media));
                break;
            case 4:
                oled_write_raw(layer_num, sizeof(layer_num));
                break;
            case 5:
                oled_write_raw(layer_sym, sizeof(layer_sym));
                break;
            case 6:
                oled_write_raw(layer_functions, sizeof(layer_functions));
                break;
            case 7:
                oled_write_raw(layer_qwerty, sizeof(layer_qwerty));
                break;
        }
    } else {
        oled_write_raw(logo, sizeof(logo));
    }
    return false;
}
#endif
