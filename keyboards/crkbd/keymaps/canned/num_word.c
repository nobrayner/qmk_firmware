#include "num_word.h"
#include "keycodes.h"

static uint16_t num_word_timer;
static bool num_word_on = false;

bool num_word_enabled(void) {
    return num_word_on;
}

void enable_num_word(void) {
    num_word_on = true;
    layer_on(NUM);
}

void disable_num_word(void) {
    num_word_on = false;
    layer_off(NUM);
}

void toggle_num_word(void) {
    if (num_word_on) {
        disable_num_word();
    } else {
        enable_num_word();
    }
}

void process_num_word_activation(const keyrecord_t *record) {
    if (record->event.pressed) {
        layer_on(NUM);
        num_word_timer = timer_read();
    } else {
        if (timer_elapsed(num_word_timer) < TAPPING_TERM) {
            // Tapping enables NUMWORD
            num_word_on = true;
        } else {
            // Holding turns off NUM when released
            layer_off(NUM);
        }
    }
}

bool terminate_num_word(uint16_t keycode, const keyrecord_t *record) {
    switch (keycode) {
        // Keycodes to ignore (don't disable num word)
        case KC_1 ... KC_0:
        case KC_PERC:
        case KC_COMM:
        case KC_DOT:
        case KC_SLSH:
        case KC_MINS:
        case KC_ASTR:
        case KC_PLUS:
        case KC_COLN:
        case KC_EQL:
        case KC_UNDS:
        case KC_BSPC:
        case KC_X:
        case REPEAT:
        case REV_RPT:
        case KC_NO:
            if (record->event.pressed && (get_mods() != 0)) {
                return true;
            }
            break;
        default:
            if (record->event.pressed) {
                return true;
            }
            break;
    }

    return false;
}

bool process_num_word(uint16_t keycode, const keyrecord_t *record) {
    if (num_word_on) {
        // Get the base keycode of a mod or layer tap key
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
                if (record->tap.count == 0)
                    return true;
                keycode = keycode & 0xFF;
                break;
            default:
                break;
        }

        if(record->event.pressed) {
            if (terminate_num_word(keycode, record)) {
                disable_num_word();
            }
        }

        return true;
    }

    return true;
}
