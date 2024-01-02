/* Copyright 2023 katotak
 *
 * 参考ページ
 * 公式：https://docs.qmk.fm/#/ja/feature_key_overrides
 * 翻訳：https://github.com/qmk/qmk_firmware/blob/daa6ba4a11e6e02ec141e57324907066457afd64/docs/ja/feature_key_overrides.md
 * その他：https://qiita.com/shela/items/9e5bd102a95a15d1b00c
 *
 * 注意：rules.mk で KEY_OVERRIDE_ENABLE = yes が必要です！
 */

#include "keymap_japanese.h"
#include "layer.h"

// JIS配列の記号
const key_override_t jp_key_override_1    = ko_make_with_layers(MOD_MASK_SHIFT, JP_1   , JP_EXLM, 1<<_JP_DEF);
const key_override_t jp_key_override_2    = ko_make_with_layers(MOD_MASK_SHIFT, JP_2   , JP_AT  , 1<<_JP_DEF);
const key_override_t jp_key_override_3    = ko_make_with_layers(MOD_MASK_SHIFT, JP_3   , JP_HASH, 1<<_JP_DEF);
const key_override_t jp_key_override_4    = ko_make_with_layers(MOD_MASK_SHIFT, JP_4   , JP_DLR , 1<<_JP_DEF);
const key_override_t jp_key_override_5    = ko_make_with_layers(MOD_MASK_SHIFT, JP_5   , JP_PERC, 1<<_JP_DEF);
const key_override_t jp_key_override_6    = ko_make_with_layers(MOD_MASK_SHIFT, JP_6   , JP_CIRC, 1<<_JP_DEF);
const key_override_t jp_key_override_7    = ko_make_with_layers(MOD_MASK_SHIFT, JP_7   , JP_AMPR, 1<<_JP_DEF);
const key_override_t jp_key_override_8    = ko_make_with_layers(MOD_MASK_SHIFT, JP_8   , JP_ASTR, 1<<_JP_DEF);
const key_override_t jp_key_override_9    = ko_make_with_layers(MOD_MASK_SHIFT, JP_9   , JP_LPRN, 1<<_JP_DEF);
const key_override_t jp_key_override_0    = ko_make_with_layers(MOD_MASK_SHIFT, JP_0   , JP_RPRN, 1<<_JP_DEF);
const key_override_t jp_key_override_lbrc = ko_make_with_layers(MOD_MASK_SHIFT, JP_LBRC, JP_LCBR, 1<<_JP_DEF);
const key_override_t jp_key_override_rbrc = ko_make_with_layers(MOD_MASK_SHIFT, JP_RBRC, JP_RCBR, 1<<_JP_DEF);
const key_override_t jp_key_override_comm = ko_make_with_layers(MOD_MASK_SHIFT, JP_COMM, JP_LABK, 1<<_JP_DEF);
const key_override_t jp_key_override_dot  = ko_make_with_layers(MOD_MASK_SHIFT, JP_DOT , JP_RABK, 1<<_JP_DEF);
const key_override_t jp_key_override_mins = ko_make_with_layers(MOD_MASK_SHIFT, JP_MINS, JP_UNDS, 1<<_JP_DEF);
const key_override_t jp_key_override_eql  = ko_make_with_layers(MOD_MASK_SHIFT, JP_EQL , JP_PLUS, 1<<_JP_DEF);
const key_override_t jp_key_override_quot = ko_make_with_layers(MOD_MASK_SHIFT, JP_QUOT, JP_DQUO, 1<<_JP_DEF);
const key_override_t jp_key_override_scln = ko_make_with_layers(MOD_MASK_SHIFT, JP_SCLN, JP_COLN, 1<<_JP_DEF);
const key_override_t jp_key_override_slsh = ko_make_with_layers(MOD_MASK_SHIFT, JP_SLSH, JP_QUES, 1<<_JP_DEF);
const key_override_t jp_key_override_bsls = ko_make_with_layers(MOD_MASK_SHIFT, JP_BSLS, JP_PIPE, 1<<_JP_DEF);
const key_override_t jp_key_override_grv  = ko_make_with_layers(MOD_MASK_SHIFT, JP_GRV , JP_TILD, 1<<_JP_DEF);

// 使用する全てのキーオーバーライドをグローバルに定義
const key_override_t **key_overrides = (const key_override_t *[]){
    &jp_key_override_1    ,
    &jp_key_override_2    ,
    &jp_key_override_3    ,
    &jp_key_override_4    ,
    &jp_key_override_5    ,
    &jp_key_override_6    ,
    &jp_key_override_7    ,
    &jp_key_override_8    ,
    &jp_key_override_9    ,
    &jp_key_override_0    ,
    &jp_key_override_lbrc ,
    &jp_key_override_rbrc ,
    &jp_key_override_comm ,
    &jp_key_override_dot  ,
    &jp_key_override_mins ,
    &jp_key_override_eql  ,
    &jp_key_override_quot ,
    &jp_key_override_scln ,
    &jp_key_override_slsh ,
    &jp_key_override_bsls ,
    NULL  // オーバーライドの配列は Null で終了
};