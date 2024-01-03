#pragma once

#include "keymap_japanese.h"
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
    JP_Q      , JP_W      , JP_E      , JP_R      , JP_T      ,                              JP_Y      , JP_U      , JP_I      , JP_O      , JP_P      ,
    JP_A      , JP_S      , JP_D      , JP_F      , JP_G      ,                              JP_H      , JP_J      , JP_K      , JP_L, LT(_NUM_SCR_,JP_MINS),
    JP_Z , SFT_T(JP_X) , CTL_T(JP_C) , ALT_T(JP_V), JP_B      ,                              JP_N, ALT_T(JP_M), CTL_T(JP_COMM), SFT_T(JP_DOT), JP_SLSH ,
    KC_ESC    , XXXXXXX, XXXXXXX, KC_LGUI  , SFT_T(KC_SPC), LT(_JP_SYM_,KC_TAB),  LT(_NUM_SCR_,KC_BSPC), SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX   , KC_RSFT
  ),

  [_US_SYM_] = LAYOUT_universal(
    KC_EXLM   , KC_AT     , KC_HASH   , KC_DLR    , KC_PERC   ,                              KC_CIRC   , KC_AMPR   , KC_ASTR   , KC_GRV    , KC_TILD   ,
    KC_QUES   , KC_LCBR   , KC_LBRC   , KC_LPRN   , KC_LABK   ,                              KC_RCTL   , KC_EQL    , KC_COLN   , KC_QUOT   , KC_UNDS   ,
    KC_PIPE   , KC_RCBR   , KC_RBRC   , KC_RPRN   , KC_RABK   ,                              KC_RSFT   , KC_PLUS   , KC_SCLN   , KC_DQUO   , KC_BSLS   ,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), XXXXXXX,         KC_DEL , SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX  , DF(_JP_DEF_)
  ),

  [_JP_SYM_] = LAYOUT_universal(
    JP_EXLM   , JP_AT     , JP_HASH   , JP_DLR    , JP_PERC   ,                              JP_CIRC   , JP_AMPR   , JP_ASTR   , JP_GRV    , JP_TILD   ,
    JP_QUES   , JP_LCBR   , JP_LBRC   , JP_LPRN   , JP_LABK   ,                              KC_RCTL   , JP_EQL    , JP_COLN   , JP_QUOT   , JP_UNDS   ,
    JP_PIPE   , JP_RCBR   , JP_RBRC   , JP_RPRN   , JP_RABK   ,                              KC_RSFT   , JP_PLUS   , JP_SCLN   , JP_DQUO   , JP_BSLS   ,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), XXXXXXX,         KC_DEL , SFT_T(KC_ENT) , XXXXXXX , XXXXXXX  , XXXXXXX  , DF(_US_DEF_)
  ),

  [_NUM_SCR_] = LAYOUT_universal(
    KC_F1     , KC_F2     , KC_F3     , KC_F4     , KC_F5     ,                              KC_F6     , KC_F7     , KC_F8     , KC_F9     , KC_F10    ,
    KC_1      , KC_2      , KC_3      , KC_4      , KC_5      ,                              KC_LEFT   , KC_DOWN   , KC_UP     , KC_RGHT   , KC_F11    ,
    KC_6   , SFT_T(KC_7), CTL_T(KC_8), ALT_T(KC_9), KC_0      ,                              KC_END, ALT_T(KC_PGDN), CTL_T(KC_PGUP), SFT_T(KC_HOME), KC_F12,
    KC_ESC    , XXXXXXX   , XXXXXXX   , KC_LGUI   , SFT_T(KC_SPC), KC_DEL,          XXXXXXX, SFT_T(KC_ENT), XXXXXXX , XXXXXXX  , XXXXXXX   , A(KC_GRV)
  )
};
// clang-format on
