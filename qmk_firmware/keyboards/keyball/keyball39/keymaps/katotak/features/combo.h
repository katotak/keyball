/* Copyright 2023 kamidai (@d_kamiichi)
 *
 * 参考ページ
 * 公式：https://docs.qmk.fm/#/ja/feature_combo?id=%e3%82%b3%e3%83%b3%e3%83%9c
 *
 * 注意： 以下の設定が必要です
 * rules.mk: COMBO_ENABLE = yes
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

// LANG
const uint16_t PROGMEM combo_lang[] = {KC_ENT, KC_BSPC, COMBO_END};
// ESC
const uint16_t PROGMEM combo_esc[] = {KC_W, KC_E, COMBO_END};
// tab
const uint16_t PROGMEM combo_tab[] = {KC_E, KC_R, COMBO_END};
// BS
const uint16_t PROGMEM combo_bs[] = {KC_U, KC_I, COMBO_END};
// del
const uint16_t PROGMEM combo_del[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_btn1, LCA_T(KC_BTN1)),
    COMBO(combo_btn2, C_S_T(KC_BTN2)),
    COMBO(combo_btn3, LSA_T(KC_BTN3)),
    COMBO(combo_btn4, KC_BTN4),
    COMBO(combo_btn5, KC_BTN5),
    COMBO(combo_btn6, C(KC_W)),
    COMBO(combo_lang, A(KC_GRV)),
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_bs, KC_BSPC),
    COMBO(combo_del, KC_DEL),
};