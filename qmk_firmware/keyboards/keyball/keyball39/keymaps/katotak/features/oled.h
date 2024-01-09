#pragma once

#ifdef OLED_ENABLE

#include "lib/oledkit/oledkit.h"

#define OLED_VERSION "        39 by KATOTAK"

// LEDモードを表示する
void keyball_oled_render_ledinfo(void) {
    const char *m;
    switch (rgblight_get_mode()) {
        case  1:
            m = PSTR("STATIC_LIGHT");
            break;
        case  2:
            m = PSTR("BREATHING");
            break;
        case  3:
            m = PSTR("BREATHING+1");
            break;
        case  4:
            m = PSTR("BREATHING+2");
            break;
        case  5:
            m = PSTR("BREATHING+3");
            break;
        case  6:
            m = PSTR("RAINBOW_MOOD");
            break;
        case  7:
            m = PSTR("RAINBOW_MOOD+1");
            break;
        case  8:
            m = PSTR("RAINBOW_MOOD+2");
            break;
        case  9:
            m = PSTR("RAINBOW_SWIRL");
            break;
        case 10:
            m = PSTR("RAINBOW_SWIRL+1");
            break;
        case 11:
            m = PSTR("RAINBOW_SWIRL+2");
            break;
        case 12:
            m = PSTR("RAINBOW_SWIRL+3");
            break;
        case 13:
            m = PSTR("RAINBOW_SWIRL+4");
            break;
        case 14:
            m = PSTR("RAINBOW_SWIRL+5");
            break;
        case 15:
            m = PSTR("SNAKE");
            break;
        case 16:
            m = PSTR("SNAKE+1");
            break;
        case 17:
            m = PSTR("SNAKE+2");
            break;
        case 18:
            m = PSTR("SNAKE+3");
            break;
        case 19:
            m = PSTR("SNAKE+4");
            break;
        case 20:
            m = PSTR("SNAKE+5");
            break;
        case 21:
            m = PSTR("KNIGHT");
            break;
        case 22:
            m = PSTR("KNIGHT+1");
            break;
        case 23:
            m = PSTR("KNIGHT+2");
            break;
        case 24:
            m = PSTR("CHRISTMAS");
            break;
        case 25:
            m = PSTR("STATIC_GRAD");
            break;
        case 26:
            m = PSTR("STATIC_GRAD+1");
            break;
        case 27:
            m = PSTR("STATIC_GRAD+2");
            break;
        case 28:
            m = PSTR("STATIC_GRAD+3");
            break;
        case 29:
            m = PSTR("STATIC_GRAD+4");
            break;
        case 30:
            m = PSTR("STATIC_GRAD+5");
            break;
        case 31:
            m = PSTR("STATIC_GRAD+6");
            break;
        case 32:
            m = PSTR("STATIC_GRAD+7");
            break;
        case 33:
            m = PSTR("STATIC_GRAD+8");
            break;
        case 34:
            m = PSTR("STATIC_GRAD+9");
            break;
        case 35:
            m = PSTR("RGB_TEST");
            break;
        case 36:
            m = PSTR("ALTERNATING");
            break;
        case 37:
            m = PSTR("TWINKLE");
            break;
        case 38:
            m = PSTR("TWINKLE+1");
            break;
        case 39:
            m = PSTR("TWINKLE+2");
            break;
        case 40:
            m = PSTR("TWINKLE+3");
            break;
        case 41:
            m = PSTR("TWINKLE+4");
            break;
        case 42:
            m = PSTR("TWINKLE+5");
            break;
        default:
            m = PSTR("-");
            break;
    }

    oled_write_P(PSTR("LED:"), false);
    oled_write_ln_P(m, false);

}

// Layerを表示する
void keyball_oled_render_layerinfo_kt(void) {
    const char *n;
    switch (get_highest_layer(layer_state | default_layer_state)) {
        case _US_DEF_:
            n = PSTR("_US_DEF_");
            break;
        case _US_SYM_:
            n = PSTR("_US_SYM_");
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
void oledkit_render_info_user(void) {

    keyball_oled_render_ledinfo();
    // keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo_kt();
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
