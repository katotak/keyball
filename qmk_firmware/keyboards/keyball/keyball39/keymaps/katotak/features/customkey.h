#pragma once

const uint8_t CPI_SLOW    = KEYBALL_CPI_SLOW / 100;

enum custom_keycodes {
    ORG_RAR = KEYBALL_SAFE_RANGE,
    ORG_LAR,
    ORG_FJK,
    CPI_SLW
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case ORG_RAR:
            if (record->event.pressed) {
                SEND_STRING("->");
            }
            break;
        
        case ORG_LAR:
            if (record->event.pressed) {
                SEND_STRING("<-");
            }
            break;

        case ORG_FJK:
            if (record->event.pressed) {
                SEND_STRING("qawsedrftgyhujikolp;");
            }
            break;

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
