#pragma once

enum custom_keycodes {
   LNG_SFT = SAFE_RANGE
};

enum key_state {
   RELEASED,
   PRESSED,
   HOLDEN
};

void tap_lng(void) {
   register_code(KC_RALT);
   tap_code(KC_GRV);
   unregister_code(KC_RALT);
}

void register_shift(void) {
   register_code(KC_RSFT);
}

void unregister_shift(void) {
   unregister_code(KC_RSFT);
}

enum key_state lng_sft_state = RELEASED;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (keycode == LNG_SFT) {
    if (record->event.pressed) {
      lng_sft_state = PRESSED;
    } else {
      switch (lng_sft_state) {
        case PRESSED:
          tap_lng();
          break;
        case HOLDEN:
          unregister_shift();
          break;
        default:
          break;
      }
      lng_sft_state = RELEASED;
    }
  } else {
    switch (lng_sft_state) {
      case PRESSED:
        register_shift();
        lng_sft_state = HOLDEN;
        break;
      default:
        break;
    }
  }
  return true;
}
