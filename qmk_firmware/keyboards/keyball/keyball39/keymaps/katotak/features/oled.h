#pragma once

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

#define OLED_VERSION "        39 by KATOTAK"

void oledkit_render_info_user(void) {

  keyball_oled_render_keyinfo();   // キー情報を表示
  keyball_oled_render_ballinfo();  // トラックボール情報を表示

  // <Layer>を表示する
  const char *n;
  switch (get_highest_layer(layer_state | default_layer_state)) {
      case _US_DEF_:
          n = PSTR("_US_DEF_");
          break;
      case _US_SYM_:
          n = PSTR("_US_SYM_");
          break;
      case _US_SSYM_:
          n = PSTR("_US_SSYM_");
          break;
      case _US_FNC_:
          n = PSTR("_US_FNC_");
          break;
      case _SCROLL_:
          n = PSTR("_SCROLL_");
          break;
      default:
          n = PSTR("_Undefined_");
          break;
   }
   oled_write_P(PSTR("Layer: "), false);
   oled_write_ln_P(n, false);

}

void  oledkit_render_logo_user(void) {
    static const char PROGMEM logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(logo, false);
    oled_write_P(PSTR(OLED_VERSION), false);
    
}
#endif
