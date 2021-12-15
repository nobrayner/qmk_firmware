#include "caps_word.h"
#include "keycodes.h"

static bool caps_word_on = false;

bool caps_word_enabled(void) {
    return caps_word_on;
}

void enable_caps_word(void) {
    caps_word_on = true;
    if (!host_keyboard_led_state().caps_lock) {
        tap_code(KC_CAPS);
    }
}

void disable_caps_word(void) {
    caps_word_on = false;
    if (host_keyboard_led_state().caps_lock) {
        tap_code(KC_CAPS);
    }
}

void toggle_caps_word(void) {
    if (caps_word_on) {
        disable_caps_word();
    } else {
        enable_caps_word();
    }
}

bool terminate_case_modes(uint16_t keycode, const keyrecord_t *record) {
        switch (keycode) {
            // Keycodes to ignore (don't disable caps word)
            case KC_A ... KC_Z:
            case KC_1 ... KC_0:
            case KC_MINS:
            case KC_UNDS:
            case KC_BSPC:
            case KC_NO:
                // If mod chording disable the mods
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

bool process_case_modes(uint16_t keycode, const keyrecord_t *record) {
    if (caps_word_on) {
        // Get the base keycode of a mod or layer tap key
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
                // Earlier return if this has not been considered tapped yet
                if (record->tap.count == 0)
                    return true;
                keycode = keycode & 0xFF;
                break;
            default:
                break;
        }

        if (record->event.pressed) {
            if (terminate_case_modes(keycode, record)) {
                disable_caps_word();
            }
        }

        return true;
    }
    return true;
}
