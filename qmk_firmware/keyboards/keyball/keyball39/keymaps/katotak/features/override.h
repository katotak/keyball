/* Copyright 2023 katotak
 *
 * 参考ページ
 * 公式：https://docs.qmk.fm/#/ja/feature_key_overrides
 * 翻訳：https://github.com/qmk/qmk_firmware/blob/daa6ba4a11e6e02ec141e57324907066457afd64/docs/ja/feature_key_overrides.md
 * その他：https://qiita.com/shela/items/9e5bd102a95a15d1b00c
 *
 * 注意：rules.mk で KEY_OVERRIDE_ENABLE = yes が必要です！
 */
#pragma once

#include "keymap_japanese.h"
#include "features/layer.h"

// JIS配列
const key_override_t sft_kc_2_to_jp_at      = ko_make_with_layers(MOD_MASK_SHIFT, KC_2, JP_AT, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_6_to_jp_circ    = ko_make_with_layers(MOD_MASK_SHIFT, KC_6, JP_CIRC, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_7_to_jp_ampr    = ko_make_with_layers(MOD_MASK_SHIFT, KC_7, JP_AMPR, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_8_to_jp_astr    = ko_make_with_layers(MOD_MASK_SHIFT, KC_8, JP_ASTR, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_9_to_jp_lprn    = ko_make_with_layers(MOD_MASK_SHIFT, KC_9, JP_LPRN, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_0_to_jp_rprn    = ko_make_with_layers(MOD_MASK_SHIFT, KC_0, JP_RPRN, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_mins_to_jp_unds = ko_make_with_layers(MOD_MASK_SHIFT, LT(_SCROLL_,KC_MINS), JP_UNDS, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_eql_to_jp_eql       = ko_make_with_layers_and_negmods(0, KC_EQL, JP_EQL, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_eql_to_jp_plus  = ko_make_with_layers(MOD_MASK_SHIFT, KC_EQL, JP_PLUS, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_lbrc_to_jp_lbrc     = ko_make_with_layers_and_negmods(0, CTL_T(KC_LBRC), JP_LBRC, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_lbrc_to_jp_lcbr     = ko_make_with_layers(MOD_MASK_SHIFT, CTL_T(KC_LBRC), JP_LCBR, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_rbrc_to_jp_rbrc     = ko_make_with_layers_and_negmods(0, SFT_T(KC_RBRC), JP_RBRC, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_rbrc_to_jp_rcbr     = ko_make_with_layers(MOD_MASK_SHIFT, SFT_T(KC_RBRC), JP_RCBR, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_bsls_to_jp_bsls     = ko_make_with_layers_and_negmods(0, GUI_T(KC_BSLS), JP_BSLS, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_bsls_to_jp_pipe     = ko_make_with_layers(MOD_MASK_SHIFT, GUI_T(KC_BSLS), JP_PIPE, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t sft_kc_scln_to_jp_coln     = ko_make_with_layers(MOD_MASK_SHIFT, KC_SCLN, JP_COLN, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_quot_to_jp_quot     = ko_make_with_layers_and_negmods(0, KC_QUOT, JP_QUOT, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_quot_to_jp_dquo     = ko_make_with_layers(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO, (1<<_JP_DEF_ | 1<<_JP_SYM_));
const key_override_t kc_grv_to_jp_grv   = ko_make_with_layers_and_negmods(0, KC_GRV, JP_GRV, (1<<_JP_DEF_ | 1<<_JP_SYM_), (uint8_t) MOD_MASK_SHIFT);
const key_override_t sft_kc_grv_to_jp_tild = ko_make_with_layers(MOD_MASK_SHIFT, KC_GRV, JP_TILD, (1<<_JP_DEF_ | 1<<_JP_SYM_));

// 使用する全てのキーオーバーライドをグローバルに定義
const key_override_t **key_overrides = (const key_override_t *[]){
    &sft_kc_2_to_jp_at	    ,
    &sft_kc_6_to_jp_circ	,
    &sft_kc_7_to_jp_ampr	,
    &sft_kc_8_to_jp_astr	,
    &sft_kc_9_to_jp_lprn	,
    &sft_kc_0_to_jp_rprn	,
    &sft_kc_mins_to_jp_unds	,
    &kc_eql_to_jp_eql	    ,
    &sft_kc_eql_to_jp_plus	,
    &kc_lbrc_to_jp_lbrc	    ,
    &sft_kc_lbrc_to_jp_lcbr	,
    &kc_rbrc_to_jp_rbrc	    ,
    &sft_kc_rbrc_to_jp_rcbr	,
    &kc_bsls_to_jp_bsls	    ,
    &sft_kc_bsls_to_jp_pipe	,
    &sft_kc_scln_to_jp_coln	,
    &kc_quot_to_jp_quot	    ,
    &sft_kc_quot_to_jp_dquo	,
    &kc_grv_to_jp_grv	    ,
    &sft_kc_grv_to_jp_tild  ,
    NULL  // オーバーライドの配列は Null で終了
};