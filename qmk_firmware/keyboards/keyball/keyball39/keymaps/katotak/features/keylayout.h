#pragma once

#include "keymap_japanese.h"
#include "features/layer.h"
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_US_DEF_] = LAYOUT_universal(
    KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       ,                              KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       ,
    KC_A       , KC_S       , KC_D       , KC_F       , KC_G       ,                              KC_H       , KC_J       , KC_K     , KC_L, LT(_SCROLL_,KC_MINS),
    GUI_T(KC_Z), ALT_T(KC_X), CTL_T(KC_C), SFT_T(KC_V), KC_B       ,                              KC_N, SFT_T(KC_M), CTL_T(KC_COMM), ALT_T(KC_DOT), GUI_T(KC_SLSH),
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LT(_US_SYM_,KC_SPC), CTL_T(KC_ENT),    LT(_FUNC_,KC_BSPC), KC_RSFT, XXXXXXX, XXXXXXX   , XXXXXXX    , XXXXXXX
  ),

  [_US_SYM_] = LAYOUT_universal(
    KC_1       , KC_2       , KC_3       , KC_4       , KC_5       ,                              KC_6       , KC_7       , KC_8       , KC_9       , KC_0       ,
    KC_INS     , KC_HOME    , KC_UP      , KC_END     , KC_PGUP    ,                              XXXXXXX    , KC_GRV     , KC_EQL     , KC_SCLN    , KC_QUOT    ,
    GUI_T(KC_PSCR), ALT_T(KC_LEFT), CTL_T(KC_DOWN), SFT_T(KC_RGHT), KC_PGDN,                      DF(_JP_DEF_), KC_LSFT, CTL_T(KC_LBRC), ALT_T(KC_RBRC), GUI_T(KC_BSLS),
    _______    , _______    , _______    , _______    , _______    , _______    ,    _______    , _______    , _______    , _______    , _______    , _______
  ),

  [_JP_DEF_] = LAYOUT_universal(
    KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       ,                              KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       ,
    KC_A       , KC_S       , KC_D       , KC_F       , KC_G       ,                              KC_H       , KC_J       , KC_K     , KC_L, LT(_SCROLL_,KC_MINS),
    GUI_T(KC_Z), ALT_T(KC_X), CTL_T(KC_C), SFT_T(KC_V), KC_B       ,                              KC_N, SFT_T(KC_M), CTL_T(KC_COMM), ALT_T(KC_DOT), GUI_T(KC_SLSH),
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LT(_JP_SYM_,KC_SPC), CTL_T(KC_ENT),    LT(_FUNC_,KC_BSPC), KC_RSFT, XXXXXXX, XXXXXXX   , XXXXXXX    , XXXXXXX
  ),

  [_JP_SYM_] = LAYOUT_universal(
    KC_1       , KC_2       , KC_3       , KC_4       , KC_5       ,                              KC_6       , KC_7       , KC_8       , KC_9       , KC_0       ,
    KC_INS     , KC_HOME    , KC_UP      , KC_END     , KC_PGUP    ,                              XXXXXXX    , KC_GRV     , KC_EQL     , KC_SCLN    , KC_QUOT    ,
    GUI_T(KC_PSCR), ALT_T(KC_LEFT), CTL_T(KC_DOWN), SFT_T(KC_RGHT), KC_PGDN,                      DF(_US_DEF_), KC_LSFT, CTL_T(KC_LBRC), ALT_T(KC_RBRC), GUI_T(KC_BSLS),
    _______    , _______    , _______    , _______    , _______    , _______    ,    _______    , _______    , _______    , _______    , _______    , _______
  ),

  [_FUNC_] = LAYOUT_universal(
    KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      ,                              KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     ,
    XXXXXXX    , KC_MUTE    , KC_VOLU    , KC_BRIU    , XXXXXXX    ,                              XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , KC_F11     ,
    KC_LGUI    , KC_LALT, CTL_T(KC_VOLD), SFT_T(KC_BRID), XXXXXXX  ,                              XXXXXXX    , KC_LSFT    , KC_LCTL    , KC_LALT  , GUI_T(KC_F12),
    _______    , _______    , _______    , _______    , _______    , _______    ,    _______    , _______    , _______    , _______    , _______    , _______
  ),

  [_SCROLL_] = LAYOUT_universal(
    XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,                              XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,
    XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,                              XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,
    XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,                              XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    ,
    _______    , _______    , _______    , _______    , _______    , _______    ,    _______    , _______    , _______    , _______    , _______    , _______
  )
};
// clang-format on