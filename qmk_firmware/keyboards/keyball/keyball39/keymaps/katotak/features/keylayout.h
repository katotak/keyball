#pragma once

// #include "keymap_japanese.h"
#include "features/layer.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_US_DEF_] = LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    GUI_T(KC_A), SFT_T(KC_S), CTL_T(KC_D), ALT_T(KC_F), KC_G  ,                              KC_H, ALT_T(KC_J), CTL_T(KC_K), SFT_T(KC_L), LT(_SCROLL_,KC_MINS),
    KC_Z      , KC_X      , KC_C      , KC_V      , KC_B      ,                              KC_N      , KC_M      , KC_COMM   , KC_DOT    , KC_SLSH   ,
    KC_LGUI, KC_LCTL, KC_LALT, A(KC_GRV), LT(_US_SYM_,KC_SPC), SFT_T(KC_TAB),        SFT_T(KC_BSPC), LT(_US_SYM_,KC_ENT), XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL
  ),
 
  [_US_SYM_] = LAYOUT_universal(
    KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                              KC_6      , KC_7      , KC_8      , KC_9      , KC_0      ,
    GUI_T(KC_GRV), SFT_T(KC_PGUP), CTL_T(KC_UP), ALT_T(KC_PGDN), KC_HOME ,                   KC_EQL, ALT_T(KC_QUOT), CTL_T(KC_LBRC), SFT_T(KC_RBRC), KC_MINS,
    KC_INS    , KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_END    ,                              KC_BSLS   , KC_SCLN   , KC_COMM   , KC_DOT    , KC_SLSH   ,
    KC_LGUI, KC_LCTL, KC_LALT, KC_ESC, LT(_US_FNC_,KC_SPC), SFT_T(KC_DEL),        SFT_T(KC_DEL), LT(_US_FNC_,KC_ENT), XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL
  ),

  [_US_FNC_] = LAYOUT_universal(
    KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     ,                              KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    ,
    KC_LGUI, SFT_T(KC_MUTE), CTL_T(KC_VOLU), KC_LALT   , XXXXXXX   ,                         XXXXXXX   , KC_RALT   , KC_RCTL   , KC_RSFT   , KC_F11    ,
    XXXXXXX   , KC_BRID   , KC_VOLD   , KC_BRIU   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , KC_F12    ,
    KC_LGUI   , KC_LCTL   , KC_LALT   , KC_ESC    , XXXXXXX   , SFT_T(KC_TAB),        SFT_T(KC_BSPC),  XXXXXXX, XXXXXXX , XXXXXXX  , XXXXXXX , KC_DEL
  ),

  [_SCROLL_] = LAYOUT_universal(
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                              XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,      XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX
  )

};
// clang-format on
