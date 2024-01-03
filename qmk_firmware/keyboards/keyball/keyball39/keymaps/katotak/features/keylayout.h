#ifndef _H_KEYLAYOUT_
#define _H_KEYLAYOUT_

#include "features/layer.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_US_DEF_] = LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                              KC_H      , KC_J      , KC_K      , KC_L, LT(_NUM_SCR_,KC_MINS),
    KC_Z   , SFT_T(KC_X), CTL_T(KC_C), ALT_T(KC_V), KC_B      ,                              KC_N, ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH ,
    KC_ESC    , XXXXXXX, XXXXXXX, KC_LGUI  , SFT_T(KC_SPC), LT(_US_SYM_,KC_TAB),  LT(_NUM_SCR_,KC_BSPC), SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX   , KC_RSFT
  ),

  [_JP_DEF_] = LAYOUT_universal(
    KC_Q      , KC_W      , KC_E      , KC_R      , KC_T      ,                              KC_Y      , KC_U      , KC_I      , KC_O      , KC_P      ,
    KC_A      , KC_S      , KC_D      , KC_F      , KC_G      ,                              KC_H      , KC_J      , KC_K      , KC_L, LT(_NUM_SCR_,KC_MINS),
    KC_Z , SFT_T(KC_X) , CTL_T(KC_C) , ALT_T(KC_V), KC_B      ,                              KC_N, ALT_T(KC_M), CTL_T(KC_COMM), SFT_T(KC_DOT), KC_SLSH ,
    KC_ESC    , XXXXXXX, XXXXXXX, KC_LGUI  , SFT_T(KC_SPC), LT(_JP_SYM_,KC_TAB),  LT(_NUM_SCR_,KC_BSPC), SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX   , KC_RSFT
  ),

  [_US_SYM_] = LAYOUT_universal(
    S(KC_1)   , S(KC_2)   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                              S(KC_6)   , S(KC_7)   , S(KC_8)   , KC_GRV    , S(KC_GRV) ,
    S(KC_SLSH), S(KC_LBRC), KC_LBRC   , S(KC_9)   , S(KC_COMM),                              KC_LNG1   , KC_EQL    , S(KC_SCLN), KC_QUOT   , S(KC_MINS),
    S(KC_BSLS), S(KC_RBRC), KC_RBRC   , S(KC_0)   , S(KC_DOT) ,                              KC_LNG2   , S(KC_EQL) , KC_SCLN   , S(KC_QUOT), KC_BSLS   ,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), XXXXXXX,         KC_BSPC, SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX  , DF(_JP_DEF_)
  ),

  [_JP_SYM_] = LAYOUT_universal(
    S(KC_1)   , KC_LBRC   , S(KC_3)   , S(KC_4)   , S(KC_5)   ,                              KC_EQL    , S(KC_6)   , S(KC_QUOT), S(KC_LBRC), S(KC_EQL) ,
    S(KC_SLSH), S(KC_RBRC), KC_RBRC   , S(KC_8)   , S(KC_COMM),                              KC_LNG1   , S(KC_MINS), KC_QUOT   , S(KC_7)   , S(KC_INT1),
    S(KC_INT3), S(KC_BSLS), KC_BSLS   , S(KC_9)   , S(KC_DOT) ,                              KC_LNG2   , S(KC_SCLN), KC_SCLN   , S(KC_2)   , KC_INT1   ,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), XXXXXXX,         KC_BSPC, SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX  , DF(_US_DEF_)
  ),

  [_NUM_SCR_] = LAYOUT_universal(
    KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                              KC_HOME   , KC_PGUP   , KC_UP     , KC_PGDN   , KC_F12    ,
    KC_6      , KC_7      , KC_8      , KC_9      , KC_0      ,                              KC_END    , KC_LEFT   , KC_DOWN   , KC_RGHT   , KC_F11    ,
    KC_F1   , SFT_T(KC_F2), CTL_T(KC_F3), ALT_T(KC_F4), KC_F5 ,                              KC_F6  , ALT_T(KC_F7), CTL_T(KC_F8), SFT_T(KC_F9), KC_F10 ,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), KC_DEL,          XXXXXXX, SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX  , A(KC_GRV)
  )
};
// clang-format on

#endif