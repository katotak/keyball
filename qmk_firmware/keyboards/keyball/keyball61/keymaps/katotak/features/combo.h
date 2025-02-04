/* Copyright 2023 katotak
 *
 * 参考ページ
 * 公式：https://docs.qmk.fm/#/ja/feature_combo?id=%e3%82%b3%e3%83%b3%e3%83%9c
 *
 * 注意： 以下の設定が必要です
 * rules.mk: COMBO_ENABLE = yes
 * config.h: #define COMBO_COUNT 2（=実際に設定するコンボ数）
 */
#pragma once

#define COMBO_COUNT 6

const uint16_t PROGMEM combo_btn1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_btn2[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn3[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn4[] = {ALT_T(KC_M), CTL_T(KC_COMM), COMBO_END};
const uint16_t PROGMEM combo_btn5[] = {CTL_T(KC_COMM), SFT_T(KC_DOT), COMBO_END};
const uint16_t PROGMEM combo_btn6[] = {ALT_T(KC_M), SFT_T(KC_DOT), COMBO_END};

combo_t key_combos[] = {

    COMBO(combo_btn1, KC_BTN1),
    COMBO(combo_btn2, KC_BTN2),
    COMBO(combo_btn3, KC_BTN3),
    COMBO(combo_btn4, KC_BTN4),
    COMBO(combo_btn5, KC_BTN5),
    COMBO(combo_btn6, C(KC_W)),

};