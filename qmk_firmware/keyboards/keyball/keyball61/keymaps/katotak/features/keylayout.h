#ifndef _H_KEYLAYOUT_
#define _H_KEYLAYOUT_

#include "features/layer.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_US_DEF_] = LAYOUT_universal(
    A(KC_GRV), KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                                   KC_6      , KC_7      , KC_8      , KC_9      , KC_0      , KC_BSLS   ,
    KC_GRV   , KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                                   KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      , KC_EQL    ,
    KC_LBRC  , KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                                   KC_H      , KC_J      , KC_K    , KC_L, LT(_NUM_SCR_,KC_MINS), KC_QUOT,
    KC_RBRC  , KC_Z   , SFT_T(KC_X) , CTL_T(KC_C) , ALT_T(KC_V) , KC_B   , KC_LNG1  ,              KC_LNG2 , KC_N ,   ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH, KC_SCLN ,
    KC_ESC   , KC_ESC, XXXXXXX, XXXXXXX, KC_LGUI, SFT_T(KC_SPC), LT(_SYMBOL_,KC_TAB),              LT(_NUM_SCR_,KC_BSPC), SFT_T(KC_ENT), XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, KC_RSFT
  ),

  [_JP_DEF_] = LAYOUT_universal(
    _______  , JP_1      , JP_2      , JP_3      , JP_4      , JP_5      ,                                   JP_6      , JP_7      , JP_8      , JP_9      , JP_0      , JP_BSLS   ,
    JP_GRV   , JP_Q      , JP_W      , JP_E      , JP_R      , JP_T      ,                                   JP_Y      , JP_U      , JP_I      , JP_O      , JP_P      , JP_EQL    ,
    JP_LBRC  , JP_A      , JP_S      , JP_D      , JP_F      , JP_G      ,                                   JP_H      , JP_J      , JP_K    , KC_L, LT(_NUM_SCR_,JP_MINS), JP_QUOT,
    JP_RBRC  , JP_Z      , SFT_T(JP_X), CTL_T(JP_C), ALT_T(JP_V), JP_B   , _______  ,              _______ , JP_N    , ALT_T(JP_M), CTL_T(JP_COMM), SFT_T(JP_DOT), JP_SLSH, JP_SCLN,
    KC_ESC   , KC_ESC, XXXXXXX, XXXXXXX, KC_LGUI, SFT_T(KC_SPC), LT(_SYMBOL_,KC_TAB),              LT(_NUM_SCR_,KC_BSPC), SFT_T(KC_ENT), XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, KC_RSFT
  ),

  [_SYMBOL_] = LAYOUT_universal(
    _______  , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                                   XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX  , S(KC_1)   , S(KC_2)   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                                   S(KC_6)   , S(KC_7)   , S(KC_8)   , KC_GRV    , S(KC_GRV) , XXXXXXX   ,
    XXXXXXX  , S(KC_SLSH), S(KC_LBRC), KC_LBRC   , S(KC_9)   , S(KC_COMM),                                   KC_LNG1   , KC_EQL    , S(KC_SCLN), KC_QUOT   , S(KC_MINS), XXXXXXX   ,
    XXXXXXX  , S(KC_BSLS), S(KC_RBRC), KC_RBRC   , S(KC_0)   , S(KC_DOT) , XXXXXXX  ,             XXXXXXX  , KC_LNG2   , S(KC_EQL) , KC_SCLN   , S(KC_QUOT), KC_BSLS   , XXXXXXX   ,
    KC_ESC   , KC_ESC   , XXXXXXX    , XXXXXXX   , KC_LGUI, SFT_T(KC_SPC), XXXXXXX  ,             KC_BSPC  , SFT_T(KC_ENT), XXXXXXX, XXXXXXX   , XXXXXXX   , KC_RSFT   , KC_RSFT
  ),

  [_NUM_SCR_] = LAYOUT_universal(
    _______  , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,                                   XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   , XXXXXXX   ,
    XXXXXXX  , KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                                   KC_HOME   , KC_PGUP   , KC_UP     , KC_PGDN   , KC_F12    , XXXXXXX   ,
    XXXXXXX  , KC_6      , KC_7      , KC_8      , KC_9      , KC_0      ,                                   KC_END    , KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_F11    , XXXXXXX   ,
    XXXXXXX  , KC_F1, SFT_T(KC_F2), CTL_T(KC_F3), ALT_T(KC_F4), KC_F5, DF(_JP_DEF_) ,             DF(_US_DEF_), KC_F6, ALT_T(KC_F7), CTL_T(KC_F8), SFT_T(KC_F9), KC_F10, XXXXXXX   ,
    KC_ESC   , KC_ESC   , XXXXXXX    , XXXXXXX   , KC_LGUI, SFT_T(KC_SPC), KC_DEL   ,             XXXXXXX  , SFT_T(KC_ENT), XXXXXXX, XXXXXXX   , XXXXXXX   , A(KC_GRV) , A(KC_GRV)
  )

};
// clang-format on

#endif