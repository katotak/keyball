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
#include "features/customkey.h"

// マウス
const uint16_t PROGMEM combo_btn1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_btn2[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn3[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn4[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM combo_btn5[] = {KC_L, LT(_SCROLL_,KC_MINS), COMBO_END};
const uint16_t PROGMEM combo_btn6[] = {KC_H, LT(_SCROLL_,KC_MINS), COMBO_END};       // タブを閉じる
// LANG
const uint16_t PROGMEM combo_lang[] = {LT(_US_FNC_,KC_ENT), LT(_US_FNC_,KC_BSPC), COMBO_END};
// ESC
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
// tab
const uint16_t PROGMEM combo_tab[] = {KC_W, KC_E, COMBO_END};
// del
const uint16_t PROGMEM combo_del[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_btn1, KC_BTN1),
    COMBO(combo_btn2, KC_BTN2),
    COMBO(combo_btn3, KC_BTN3),
    COMBO(combo_btn4, KC_BTN4),
    COMBO(combo_btn5, KC_BTN5),
    COMBO(combo_btn6, C(KC_W)),
    COMBO(combo_lang, A(KC_GRV)),
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_del, KC_DEL),
};