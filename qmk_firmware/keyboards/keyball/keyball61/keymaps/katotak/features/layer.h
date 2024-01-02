#ifndef _H_LAYER_
#define _H_LAYER_

enum layer {
  _US_DEF,
  _JP_DEF,
  _FUNC,
  _SCRL
};

layer_state_t layer_state_set_user(layer_state_t state) {
    
  uint8_t layer = get_highest_layer(state);
  
  // スクロールモード有効
  keyball_set_scroll_mode(layer == _SCRL);

  // // レイヤーとLEDを連動させる
  switch(layer){
    default:
      rgblight_sethsv(HSV_OFF);
      break;
  }

  return state;
}

#endif