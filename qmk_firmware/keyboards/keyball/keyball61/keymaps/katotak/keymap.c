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
#include "features/combo.h"

enum layer {
  US_DEF,
  JP_DEF,
  JP_SFT,
  FUNC
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [US_DEF] = LAYOUT_universal(
    KC_GRV   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_EQL   ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_QUOT  ,
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , LT(FUNC,KC_MINS), KC_SCLN  ,
    KC_LSFT  , KC_Z     , SFT_T(KC_X), CTL_T(KC_C), ALT_T(KC_V), KC_B, KC_RBRC,              KC_LBRC , KC_N     , ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH, KC_BSLS  ,
    KC_ESC   , A(KC_GRV), KC_LGUI  , KC_LALT  , KC_TAB   , SFT_T(KC_SPC), LT(FUNC,KC_DEL),   LT(FUNC,KC_BSPC), SFT_T(KC_ENT) , XXXXXXX , XXXXXXX , XXXXXXX , KC_LNG1 , KC_LNG2
  ),

  [JP_DEF] = LAYOUT_universal(
    S(KC_LBRC)  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , S(KC_MINS)  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , S(KC_7)  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , KC_BSLS  ,            KC_RBRC  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , LT(JP_SFT,KC_SPC), _______,      _______, LT(JP_SFT,KC_ENT), XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [JP_SFT] = LAYOUT_universal(
    S(KC_EQL)  , S(KC_1)  , KC_LBRC  , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                                  KC_EQL  , S(KC_6)  , S(KC_QUOT)  , S(KC_8)  , S(KC_9)  , S(KC_SCLN),
    _______  , S(KC_Q)  , S(KC_W)  , S(KC_E)  , S(KC_R)  , S(KC_T)  ,                                  S(KC_Y)  , S(KC_U)  , S(KC_I)  , S(KC_O)  , S(KC_P)  , S(KC_2),
    _______  , S(KC_A)  , S(KC_S)  , S(KC_D)  , S(KC_F)  , S(KC_G)  ,                                  S(KC_H)  , S(KC_J)  , S(KC_K)  , S(KC_L)  , S(KC_INT1), KC_QUOT,
    _______  , S(KC_Z)  , S(KC_X)  , S(KC_C)  , S(KC_V)  , S(KC_B)  , S(KC_BSLS),             S(KC_RBRC), S(KC_N)  , S(KC_M)  , S(KC_COMM), S(KC_DOT), S(KC_SLSH), S(KC_INT3),
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [FUNC] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_F12   ,
    _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                                  KC_HOME  , KC_PGUP  , KC_UP    , KC_PGDN  , XXXXXXX  , XXXXXXX  ,
    _______  , XXXXXXX  , SFT_T(XXXXXXX)  , CTL_T(XXXXXXX)  , ALT_T(XXXXXXX)  , XXXXXXX  , XXXXXXX  ,            XXXXXXX ,  KC_END   , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_INS   , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , DF(JP_DEF), DF(US_DEF)
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
      case US_DEF:
          n = PSTR("US_DEF");
          break;
      case JP_DEF:
          n = PSTR("JP_DEF");
          break;
      case JP_SFT:
          n = PSTR("JP_SFT");
          break;
      case FUNC:
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
