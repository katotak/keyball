#pragma once

const uint8_t CPI_SLOW    = KEYBALL_CPI_SLOW / 100;

enum custom_keycodes {
    CPI_SLW = KEYBALL_SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case CPI_SLW:
            if (record->event.pressed) {
                keyball_set_cpi(CPI_SLOW);
            } else {
                keyball_set_cpi(0);
            }
            break;

        default:
            break;
    }
return true;
}
