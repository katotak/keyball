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
#include "keymap_japanese.h"
#include "features/layer.h"
#include "features/oled.h"
#include "features/combo.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_US_DEF] = LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                              KC_H      , KC_J      , KC_K      , LT(_SCRL,KC_L)      , ,KC_MINS   ,
    KC_Z   , SFT_T(KC_X), CTL_T(KC_C), ALT_T(KC_V), KC_B      ,                              KC_N, ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH ,
    KC_ESC    , XXXXXXX, XXXXXXX, KC_LGUI, KC_LSFT, LT(_US_SYM,KC_SPC),    LT(_US_SYM,KC_BSPC), LT(_NUMFNC,KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX   , A(KC_GRV)
  ),

  [_JP_DEF] = LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                              KC_H      , KC_J      , KC_K      , LT(_SCRL,KC_L)      , ,KC_MINS   ,
    KC_Z , SFT_T(KC_X) , CTL_T(KC_C) , ALT_T(KC_V), KC_B      ,                              KC_N, ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH ,
    _______    , XXXXXXX, XXXXXXX, _______, _______, LT(_JP_SYM,KC_SPC),    LT(_JP_SYM,KC_BSPC), _______ , XXXXXXX , XXXXXXX   , XXXXXXX    , KC_GRV
  ),

  [_US_SYM] = LAYOUT_universal(
    S(KC_1)   , S(KC_2)   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                              S(KC_6)   , S(KC_7)   , S(KC_8)   , KC_GRV    , S(KC_GRV) ,
    S(KC_SLSH), S(KC_LBRC), KC_LBRC   , S(KC_9)   , S(KC_COMM),                              KC_LNG1   , KC_EQL    , S(KC_SCLN), KC_QUOT   , S(KC_MINS),
    S(KC_BSLS), S(KC_RBRC), KC_RBRC   , S(KC_0)   , S(KC_DOT) ,                              KC_LNG2   , S(KC_EQL) , KC_SCLN   , S(KC_QUOT), KC_BSLS   ,
    _______   , _______   , _______   , _______   , _______   , KC_TAB   ,          KC_DEL , _______   , _______   , _______   , _______   , DF(_JP_DEF)
  ),

  [_JP_SYM] = LAYOUT_universal(
    S(KC_1)   , KC_LBRC   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                              KC_EQL  , S(KC_6)   , S(KC_QUOT)   , S(KC_LBRC)    , S(KC_EQL) ,
    S(KC_SLSH), S(KC_RBRC), KC_RBRC   , S(KC_8)   , S(KC_COMM),                              KC_LNG1   , S(KC_MINS)    , KC_QUOT, S(KC_7)   , S(KC_INT1),
    S(KC_INT3) , S(KC_BSLS), KC_BSLS   , S(KC_9)   , S(KC_DOT) ,                             KC_LNG2   , S(KC_SCLN) , KC_SCLN   , S(KC_2), KC_INT1   ,
    _______   , _______   , _______   , _______   , _______   , KC_TAB   ,          KC_DEL , _______   , _______   , _______   , _______   , DF(_US_DEF)
  ),

  [_NUMFNC] = LAYOUT_universal(
    KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     ,                              KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    ,
    KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                              KC_HOME   , KC_PGUP   , KC_UP     , KC_PGDN   , KC_F11    ,
    KC_6      , SFT_T(KC_7), CTL_T(KC_8), ALT_T(KC_9), KC_0   ,                              KC_END    , KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_F12    ,
    _______   , _______   , _______   , _______   , _______   , _______    ,     _______   , _______   , _______   , _______   , _______   , _______
  ),

  [_SCRL] = LAYOUT_universal(
    _______   , _______   , _______   , _______   , _______   ,                              _______   , _______   , _______   , _______   , _______   ,
    _______   , _______   , _______   , _______   , _______   ,                              _______   , _______   , _______   , _______   , _______   ,
    _______   , _______   , _______   , _______   , _______   ,                              _______   , _______   , _______   , _______   , _______   ,
    _______   , _______   , _______   , _______   , _______   , _______    ,     _______   , _______   , _______   , _______   , _______   , _______
  )
};