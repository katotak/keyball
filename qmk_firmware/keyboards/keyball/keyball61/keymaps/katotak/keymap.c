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

#include "features/combo.h"

enum layer {
  _US_DEF,
  _JP_DEF,
  _JP_SFT,
  _FUNC
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_US_DEF] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSLS   ,
    KC_GRV   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_EQL  ,
    KC_LBRC  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , LT(_FUNC,KC_MINS), KC_QUOT  ,
    KC_RBRC  , KC_Z     , SFT_T(KC_X), CTL_T(KC_C), ALT_T(KC_V), KC_B, KC_LNG1,               KC_LNG2 , KC_N     , ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH, KC_SCLN  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_LGUI  , KC_LSFT, LT(_FUNC,KC_SPC),  LT(_FUNC,KC_BSPC), SFT_T(KC_ENT) , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
  ),

  [_JP_DEF] = LAYOUT_universal(
    _______  , JP_1     , JP_2     , JP_3     , JP_4     , JP_5     ,                                  JP_6     , JP_7     , JP_8     , JP_9     , JP_0     , JP_BSLS  ,
    JP_GRV   , JP_Q     , JP_W     , JP_E     , JP_R     , JP_T     ,                                  JP_Y     , JP_U     , JP_I     , JP_O     , JP_P     , JP_EQL   ,
    JP_LBRC  , JP_A     , JP_S     , JP_D     , JP_F     , JP_G     ,                                  JP_H     , JP_J     , JP_K     , JP_L     , LT(_FUNC,JP_MINS), JP_QUOT  ,
    JP_RBRC  , JP_Z     , SFT_T(JP_X), CTL_T(JP_C), ALT_T(JP_V), JP_B, _______,              _______ , JP_N     , ALT_T(JP_M), CTL_T(JP_COMM), SFT_T(JP_DOT), JP_SLSH, JP_SCLN  ,
    _______  , _______  , _______  , _______  , _______  , LT(_JP_SFT,KC_SPC), _______,      _______, LT(_JP_SFT,KC_ENT), XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [_JP_SFT] = LAYOUT_universal(
    _______  , JP_EXLM  , JP_AT    , JP_HASH  , JP_DLR   , JP_PERC  ,                                  JP_CIRC  , JP_AMPR  , JP_ASTR  , JP_LPRN  , JP_RPRN  , JP_PIPE  ,
    JP_TILD  , S(JP_Q)  , S(JP_W)  , S(JP_E)  , S(JP_R)  , S(JP_T)  ,                                  S(JP_Y)  , S(JP_U)  , S(JP_I)  , S(JP_O)  , S(JP_P)  , JP_PLUS  ,
    JP_LCBR  , S(JP_A)  , S(JP_S)  , S(JP_D)  , S(JP_F)  , S(JP_G)  ,                                  S(JP_H)  , S(JP_J)  , S(JP_K)  , S(JP_L)  , JP_UNDS  , S(JP_2)  ,
    JP_RCBR  , S(JP_Z)  , S(JP_X)  , S(JP_C)  , S(JP_V)  , S(JP_B)  , _______  ,            _______  , S(JP_N)  , S(JP_M)  , JP_LABK  , JP_RABK  , JP_QUES  , JP_COLN  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [_FUNC] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , XXXXXXX  ,
    XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_F11   , XXXXXXX  ,
    XXXXXXX  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_HOME  , KC_PGUP  , KC_UP    , KC_PGDN  , KC_F12   , XXXXXXX  ,
    XXXXXXX  , KC_6    , SFT_T(KC_7), CTL_T(KC_8), ALT_T(KC_9), KC_0, DF(_JP_DEF),          DF(_US_DEF), KC_END , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_INS   , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , KC_TAB   ,            KC_DEL  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  )

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    
  uint8_t layer = get_highest_layer(state);
  
  // レイヤーが5の場合、スクロールモードが有効になる
  keyball_set_scroll_mode(layer == SCROLL_LAYER);

  // // レイヤーとLEDを連動させる
  switch(layer){
    default:
      rgblight_sethsv(HSV_OFF);
      break;
  }

  return state;
}

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {

  keyball_oled_render_keyinfo();   // キー情報を表示
  keyball_oled_render_ballinfo();  // トラックボール情報を表示

  // <Layer>を表示する
  const char *n;
  switch (get_highest_layer(layer_state | default_layer_state)) {
      case _US_DEF:
          n = PSTR("US_DEF");
          break;
      case _JP_DEF:
          n = PSTR("JP_DEF");
          break;
      case _JP_SFT:
          n = PSTR("JP_SFT");
          break;
      case _FUNC:
          n = PSTR("FUNC");
          break;
      default:
          n = PSTR("Undefined");
          break;
    }
    oled_write_P(PSTR("Layer: "), false);
    oled_write_ln_P(n, false);

}

void  oledkit_render_logo_user(void) {
    static const char PROGMEM logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(logo, false);
    oled_write_P(PSTR(OLED_VERSION), false);
    
}
#endif