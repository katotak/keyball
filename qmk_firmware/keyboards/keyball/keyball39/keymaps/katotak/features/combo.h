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

#define COMBO_COUNT 15

const uint16_t PROGMEM combo_btn1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_btn2[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn3[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM combo_btn4[] = {ALT_T(KC_M), CTL_T(KC_COMM), COMBO_END};
const uint16_t PROGMEM combo_btn5[] = {CTL_T(KC_COMM), SFT_T(KC_DOT), COMBO_END};
const uint16_t PROGMEM combo_btn6[] = {ALT_T(KC_M), SFT_T(KC_DOT), COMBO_END};
const uint16_t PROGMEM combo_btn7[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_btn8[] = {KC_A, KC_S, COMBO_END};

// for US Layer
const uint16_t PROGMEM combo_btn11[] = {ALT_T(KC_J), CTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM combo_btn12[] = {CTL_T(KC_K), SFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_btn13[] = {ALT_T(KC_J), SFT_T(KC_L), COMBO_END};
const uint16_t PROGMEM combo_btn14[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_btn15[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_btn16[] = {KC_M, KC_DOT, COMBO_END};
// const uint16_t PROGMEM combo_btn17[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_btn18[] = {GUI_T(KC_A), SFT_T(KC_S), COMBO_END};

combo_t key_combos[] = {

    COMBO(combo_btn1, KC_BTN1),
    COMBO(combo_btn2, KC_BTN2),
    COMBO(combo_btn3, KC_BTN3),
    COMBO(combo_btn4, KC_BTN4),
    COMBO(combo_btn5, KC_BTN5),
    COMBO(combo_btn6, C(KC_W)),
    COMBO(combo_btn7, KC_ESC),
    COMBO(combo_btn8, KC_TAB),

    // for US Layer
    COMBO(combo_btn11, KC_BTN1),
    COMBO(combo_btn12, KC_BTN2),
    COMBO(combo_btn13, KC_BTN3),
    COMBO(combo_btn14, KC_BTN4),
    COMBO(combo_btn15, KC_BTN5),
    COMBO(combo_btn16, C(KC_W)),
    // COMBO(combo_btn17, KC_ESC),
    COMBO(combo_btn18, KC_TAB),

};