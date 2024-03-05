#pragma once

// #include "keymap_japanese.h"
#include "features/layer.h"
#include "features/customkey.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_US_DEF_] = LAYOUT_universal(
    KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       ,                              KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       ,
    GUI_T(KC_A), SFT_T(KC_S), CTL_T(KC_D), ALT_T(KC_F), KC_G       ,                              KC_H, ALT_T(KC_J), CTL_T(KC_K), SFT_T(KC_L), LT(_SCROLL_,KC_MINS),
    GUI_T(KC_Z), KC_X       , KC_C       , KC_V       , KC_B       ,                              KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    ,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LT(_US_SYM_,KC_SPC), LT(_US_FNC_,KC_ENT),    LT(_US_FNC_,KC_BSPC), KC_RSFT, XXXXXXX, XXXXXXX   , XXXXXXX    , XXXXXXX
  ),

  [_US_SYM_] = LAYOUT_universal(
    KC_1       , KC_2       , KC_3       , KC_4       , KC_5       ,                              KC_6       , KC_7       , KC_8       , KC_9       , KC_0       ,
    GUI_T(KC_INS), SFT_T(KC_HOME), CTL_T(KC_UP), ALT_T(KC_END), KC_PGUP,                          KC_DEL  , ALT_T(KC_GRV), CTL_T(KC_EQL), SFT_T(KC_QUOT), KC_SCLN,
    GUI_T(KC_PSCR), KC_LEFT , KC_DOWN    , KC_RGHT    , KC_PGDN    ,                              ORG_LAR    , ORG_RAR    , KC_LBRC    , KC_RBRC    , KC_BSLS    ,
    ORG_FJK    , _______    , _______    , _______    , _______    , _______    ,    _______    , _______    , _______    , _______    , _______    , _______
  ),

  [_US_FNC_] = LAYOUT_universal(
    KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      ,                              KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     ,
    KC_LGUI, SFT_T(KC_MUTE), CTL_T(KC_VOLU), ALT_T(KC_BRIU), XXXXXXX,                             XXXXXXX    , KC_LALT    , KC_LCTL    , KC_LSFT    , KC_F11     ,
    KC_LGUI    , XXXXXXX    , KC_VOLD    , KC_BRID    , XXXXXXX    ,                              XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX    , KC_F12     ,
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
