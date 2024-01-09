/* Copyright 2023 kamidai (@d_kamiichi)
 *
 * 参考ページ
 * 公式：https://docs.qmk.fm/#/ja/feature_combo?id=%e3%82%b3%e3%83%b3%e3%83%9c
 *
 * 注意： 以下の設定が必要です
 * rules.mk: COMBO_ENABLE = yes
 * config.h: #define COMBO_COUNT 2（=実際に設定するコンボ数）
 */
#pragma once

#include "features/layer.h"

// マウスボタン
const uint16_t PROGMEM combo_btn1[] = {ALT_T(KC_J), CTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_btn2[] = {CTL_T(KC_K), SFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_btn3[] = {ALT_T(KC_J), SFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_btn4[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_btn5[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_btn6[] = {KC_M, KC_DOT, COMBO_END};

// Shift + 記号レイヤー
const uint16_t PROGMEM combo_btn7[] = {SFT_T(KC_S), SFT_T(KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_btn8[] = {SFT_T(KC_L), SFT_T(KC_ENT), COMBO_END};

combo_t key_combos[] = {

    COMBO(combo_btn1, KC_BTN1),
    COMBO(combo_btn2, KC_BTN2),
    COMBO(combo_btn3, KC_BTN3),
    COMBO(combo_btn4, KC_BTN4),
    COMBO(combo_btn5, KC_BTN5),
    COMBO(combo_btn6, C(KC_W)),
    COMBO(combo_btn7, MO(_US_SSYM_)),
    COMBO(combo_btn8, MO(_US_SSYM_))

};