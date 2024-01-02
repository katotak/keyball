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
#include "keymap_japanese.h"
#include "features/layer.h"
#include "features/oled.h"
#include "features/combo.h"
#include "features/override.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_US_DEF] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSLS   ,
    KC_GRV   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_EQL    ,
    KC_LBRC  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , LT(_SCRL,KC_L), KC_MINS  , KC_QUOT  ,
    KC_RBRC  , KC_Z  , SFT_T(KC_X), CTL_T(KC_C), ALT_T(KC_V), KC_B  , KC_LNG1  ,             KC_LNG2 , KC_N , ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH, KC_SCLN  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_LGUI  , KC_LSFT, LT(_FUNC,KC_BSPC),  LT(_FUNC,KC_ENT), SFT_T(KC_SPC) , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
  ),

  [_JP_DEF] = LAYOUT_universal(
    _______  , JP_1     , JP_2     , JP_3     , JP_4     , JP_5     ,                                  JP_6     , JP_7     , JP_8     , JP_9     , JP_0     , JP_BSLS  ,
    JP_GRV   , JP_Q     , JP_W     , JP_E     , JP_R     , JP_T     ,                                  JP_Y     , JP_U     , JP_I     , JP_O     , JP_P     , JP_EQL   ,
    JP_LBRC  , JP_A     , JP_S     , JP_D     , JP_F     , JP_G     ,                                  JP_H     , JP_J     , JP_K     , LT(_SCRL,KC_L), JP_MINS  , JP_QUOT  ,
    JP_RBRC  , JP_Z  , SFT_T(JP_X), CTL_T(JP_C), ALT_T(JP_V), JP_B  , _______  ,             _______ , JP_N , ALT_T(JP_M), CTL_T(JP_COMM), SFT_T(JP_DOT), JP_SLSH, JP_SCLN  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,             _______ , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [_FUNC] = LAYOUT_universal(
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , 
    XXXXXXX  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    XXXXXXX  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_HOME  , KC_PGUP  , KC_UP    , KC_PGDN  , KC_DEL   , KC_F12   ,
    XXXXXXX  , KC_6    , SFT_T(KC_7), CTL_T(KC_8), ALT_T(KC_9), KC_0, DF(_JP_DEF),          DF(_US_DEF), KC_END , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_INS   , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , KC_TAB     ,          KC_TAB   , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [_SCRL] = LAYOUT_universal(
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  )

};
// clang-format on
