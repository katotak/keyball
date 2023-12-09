/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default
  [0] = LAYOUT_universal(
    KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                            KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     ,
    KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                            KC_H     , KC_J     , KC_K     , KC_L     , LT(3,KC_MINS)  ,
    KC_Z     , LSFT_T(KC_X) , LCTL_T(KC_C) , LALT_T(KC_V) , KC_B     ,                KC_N     , RALT_T(KC_M) , RCTL_T(KC_COMM) , RSFT_T(KC_DOT) , KC_SLSH  ,
    LALT_T(KC_ESC) , KC_LGUI , KC_LCTL , LT(3,KC_TAB) , LT(2,KC_SPC) , KC_LSFT , LT(3,KC_BSPC) , LT(1,KC_ENT) , XXXXXXX , XXXXXXX , XXXXXXX , A(KC_GRV)
  ),

  [1] = LAYOUT_universal(
    S(KC_1)   , S(KC_2) , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                            S(KC_6)  , S(KC_7)  , S(KC_8)  , KC_GRV  , S(KC_GRV)  ,
    S(KC_SLSH) , S(KC_LBRC) , KC_LBRC  , S(KC_9)  , S(KC_COMM)  ,                     KC_LNG1  , KC_EQL  , S(KC_SCLN)  , KC_QUOT  , S(KC_MINS)  ,
    S(KC_BSLS)   , S(KC_RBRC) , KC_RBRC  , S(KC_0)  , S(KC_DOT)  ,                    KC_LNG2  , S(KC_EQL)  , KC_SCLN , S(KC_QUOT) , KC_BSLS ,
    _______ , _______ , _______  , _______  , LT(3,_______)  , _______  ,  _______  , LT(3,_______) , XXXXXXX , XXXXXXX , XXXXXXX , _______
  ),

  [2] = LAYOUT_universal(
    KC_1   , KC_2    , KC_3     , KC_4     , KC_5  ,                                  KC_6  , KC_7  , KC_8    , KC_9  , KC_0  ,
    KC_HOME , KC_PGUP    , KC_UP     , KC_PGDN     , KC_INS ,                         KC_BTN4  , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_BTN5  ,
    KC_END   , KC_LEFT    , KC_DOWN     , KC_RGHT     , KC_DEL ,                      XXXXXXX  , RALT_T(XXXXXXX) , RCTL_T(XXXXXXX) , RSFT_T(XXXXXXX) , XXXXXXX  ,
    _______ , _______ , _______  , _______  , LT(3,_______)  , _______  ,  _______  , LT(3,_______) , XXXXXXX , XXXXXXX , XXXXXXX , _______
  ),

  [3] = LAYOUT_universal(
    KC_F1      , KC_F2   , KC_F3    , KC_F4     , KC_F5     ,                   KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10     ,
    KC_F11     , KC_F12  , XXXXXXX  , XXXXXXX  ,  XXXXXXX ,                     XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX ,
    XXXXXXX , LSFT_T(XXXXXXX) , LCTL_T(XXXXXXX) , LALT_T(XXXXXXX) ,  XXXXXXX ,  XXXXXXX  , RALT_T(XXXXXXX) , RCTL_T(XXXXXXX) , RSFT_T(XXXXXXX)  , XXXXXXX ,
    _______ , _______ , _______  , _______  , _______  , _______  ,  _______  , _______ , XXXXXXX , XXXXXXX , XXXXXXX , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
