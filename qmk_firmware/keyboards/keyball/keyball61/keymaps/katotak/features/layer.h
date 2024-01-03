#pragma once

enum layer {
  _US_DEF_,
  _JP_DEF_,
  _SYMBOL_,
  _NUM_SCR_
};

layer_state_t layer_state_set_user(layer_state_t state) {
    
  uint8_t layer = get_highest_layer(state);
  
  // スクロールモード有効
  keyball_set_scroll_mode(layer == _NUM_SCR_);

  // // レイヤーとLEDを連動させる
  switch(layer){
    default:
      rgblight_sethsv(HSV_OFF);
      break;
  }

  return state;
}
