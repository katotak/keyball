/*
 * Copyright 2022 @Yowkees
 * Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)
 * Copyright 2023 kamidai (@d_kamiichi)
 * Copyright 2023 katotak
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * -------------------------------------------------------------------
 *
 * 参考文献：
 * - リポジトリ：
 *   https://github.com/katotak/keyball/tree/main/qmk_firmware/keyboards/keyball/keyball39/keymaps/katotak
 *
 * - keyballの販売ページ
 *   https://shirogane-lab.com/collections/all
 *
 * コード表：
 * - 公式ファームウェアのキーコード：
 *   KBC_RST(0x5DA5): Keyball 設定のリセット
 *   KBC_SAVE(0x5DA6): 現在の Keyball 設定を EEPROM に保存します
 *   CPI_I100(0x5DA7): CPI を 100 増加させます(最大:12000)
 *   CPI_D100(0x5DA8): CPI を 100 減少させます(最小:100)
 *   CPI_I1K(0x5DA9): CPI を 1000 増加させます(最大:12000)
 *   CPI_D1K(0x5DAA): CPI を 1000 減少させます(最小:100)
 *   SCRL_TO(0x5DAB): タップごとにスクロールモードの ON/OFF を切り替えます
 *   SCRL_MO(0x5DAC): キーを押している間、スクロールモードになります
 *   SCRL_DVI(0x5DAD): スクロール除数を１つ上げます(max D7 = 1/128)← 最もスクロール遅い
 *   SCRL_DVD(0x5DAE): スクロール除数を１つ下げます(min D0 = 1/1)← 最もスクロール速い
 *
 * - オリジナルのキーコード：
 *   KC_BACK_TO_LAYER0_BTN1(0x5DAF): レイヤー0に遷移できるBTN1
 *   KC_DOUBLE_CLICK_BTN1(0x5DB0): 1タップでダブルクリックできるBTN1
 *   KC_TRIPLE_CLICK_BTN1(0x5DB1): 1タップでトリプルクリックできるBTN1
 */

#include QMK_KEYBOARD_H
#include "quantum.h"

#include "utils/functions.h"
#include "features/swipe_gesture.h"
#include "features/auto_click_layer.h"
// #include "features/back_to_layer0_btn1.h"
// #include "features/one_tap_multi_click.h"
#include "features/macro_keys.h"

// 容量オーバーのため不使用（VIAをOFFにすれば、使用可能）
// #include "features/overrides.h"
// #include "features/combo.h"

layer_state_t layer_state_set_user(layer_state_t state) {
    
  uint8_t layer = get_highest_layer(state);
  
  // レイヤーが5の場合、スクロールモードが有効になる
  keyball_set_scroll_mode(layer == 5);

  // レイヤーとLEDを連動させる
  if (layer == click_layer) {
    rgblight_sethsv(132, 102, 50);
  } else {
    rgblight_sethsv(HSV_OFF);
  }

  return state;
}

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
  // デバッグ用に変数を表示する
  // oled_write_P(PSTR("Debug:"), false);
  // oled_write(get_u8_str(xxx, ' '), false);

  keyball_oled_render_keyinfo();   // キー情報を表示
  keyball_oled_render_ballinfo();  // トラックボール情報を表示

  // <Layer>を表示する
  oled_write_P(PSTR("Layer:"), false);
  oled_write(get_u8_str(get_highest_layer(layer_state), ' '), false);

  // <マウス移動量 / クリックレイヤーしきい値>を表示
  // oled_write_P(PSTR(" MV:"), false);
  // oled_write(get_u8_str(mouse_movement, ' '), false);
  // oled_write_P(PSTR("/"), false);
  // oled_write(get_u8_str(to_clickable_movement, ' '), false);

  // <state>を表示
  switch (state) {
    case WAITING:
      oled_write_ln_P(PSTR("  WAITING"), false);
      break;
    case CLICKABLE:
      oled_write_ln_P(PSTR("  CLICKABLE"), false);
      break;
    case CLICKING:
      oled_write_ln_P(PSTR("  CLICKING"), false);
      break;
    case CLICKED:
      oled_write_ln_P(PSTR("  CLICKED"), false);
      break;
    case SWIPE:
      oled_write_ln_P(PSTR("  SWIPE"), false);
      break;
    case SWIPING:
      oled_write_ln_P(PSTR("  SWIPING"), false);
      break;
    case NONE:
      oled_write_ln_P(PSTR("  NONE"), false);
      break;
  }
}
#endif

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                              KC_H      , KC_J      , KC_K      , KC_L      , LT(5,KC_MINS)   ,
    KC_Z , SFT_T(KC_X) , CTL_T(KC_C) , ALT_T(KC_V), KC_B      ,                              KC_N, ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH ,
    LALT_T(KC_ESC), KC_LCTL, KC_LGUI, KC_TAB    , LT(1,KC_SPC), KC_LSFT,            KC_BSPC, LT(2,KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX   , A(KC_GRV)
  ),

  LAYOUT_universal(
    S(KC_1)   , S(KC_2)   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                              S(KC_6)   , S(KC_7)   , S(KC_8)   , KC_GRV    , S(KC_GRV) ,
    S(KC_SLSH), S(KC_LBRC), KC_LBRC   , S(KC_9)   , S(KC_COMM),                              KC_LNG1   , KC_EQL    , S(KC_SCLN), KC_QUOT   , S(KC_MINS),
    S(KC_BSLS), S(KC_RBRC), KC_RBRC   , S(KC_0)   , S(KC_DOT) ,                              KC_LNG2   , S(KC_EQL) , KC_SCLN   , S(KC_QUOT), KC_BSLS   ,
    _______  , _______  , _______  , _______  , LT(3,_______) , _______   ,      _______   , LT(3,_______), _______  , _______  , _______  , _______
  ),

  LAYOUT_universal(
    KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                              KC_6      , KC_7      , KC_8      , KC_9      , KC_0      ,
    KC_HOME   , KC_PGUP   , KC_UP     , KC_PGDN   , KC_DEL    ,                              KC_BTN4   , KC_BTN1   , KC_BTN3   , KC_BTN2   , LT(5,KC_BTN5)   ,
    KC_END    , KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_INS    ,                              XXXXXXX  ,ALT_T(XXXXXXX),CTL_T(XXXXXXX),SFT_T(XXXXXXX),XXXXXXX,
    _______  , _______  , _______  , _______  , LT(3,_______) , _______   ,      _______   , LT(3,_______), _______  , _______  , _______  , _______
  ),

  LAYOUT_universal(
    KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     ,                              KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    ,
    KC_F11    , KC_F12    , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              KBC_SAVE  , CPI_I100  , CPI_I1K   , SCRL_DVI  , XXXXXXX   , 
    XXXXXXX,ALT_T(XXXXXXX),CTL_T(XXXXXXX),SFT_T(XXXXXXX),XXXXXXX,                            KBC_RST   , CPI_D100  , CPI_D1K   , SCRL_DVD  ,XXXXXXX,
    _______   , _______   , _______   , _______   , _______   , _______   ,      _______   , _______   , _______   , _______   , _______   , _______
  ),

  LAYOUT_universal(
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    _______   , _______   , _______   , _______   , _______   , _______   ,      _______   , _______   , _______   , _______   , _______   , _______
  ),

  LAYOUT_universal(
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    _______   , _______   , _______   , _______   , _______   , _______   ,      _______   , _______   , _______   , _______   , _______   , _______
  ),

  LAYOUT_universal(
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, LT(5,XXXXXXX)   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    _______   , _______   , _______   , _______   , _______   , _______   ,      _______   , _______   , _______   , _______   , _______   , _______
  )
};