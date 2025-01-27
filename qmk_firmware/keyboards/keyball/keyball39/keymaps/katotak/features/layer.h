#pragma once

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

enum layer {
  _US_DEF_,
  _US_SYM_,
  _FUNC_,
  _SCROLL_
};

layer_state_t layer_state_set_user(layer_state_t state) {
    
  uint8_t layer = get_highest_layer(state);
  
  // スクロールモード有効
  keyball_set_scroll_mode(layer == _SCROLL_);

  // レイヤーとLEDを連動させる
  #ifdef RGBLIGHT_ENABLE

  switch(layer){
    default:
      // rgblight_sethsv(HSV_OFF);
      break;
  }

  #endif

  return state;
}
