#include "repeat.h"
#include "keycodes.h"

uint16_t last_keycode = KC_NO;

uint16_t last_key(void) {
    return last_keycode;
}

void register_key_to_repeat(uint16_t keycode) {
    // Get the base keycode of a mod or layer tap key
    switch (keycode) {
        case QK_MOD_TAP ... QK_MOD_TAP_MAX:
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            keycode = keycode & 0xFF;
            break;
    }

    // Merge current mod state with keycode, for easy comparison when
    // we want to do special key reverse repeats.
    uint8_t mods = get_mods() | get_oneshot_mods();
    if (mods & MOD_MASK_CTRL) keycode |= QK_LCTL;
    if (mods & MOD_MASK_SHIFT) keycode |= QK_LSFT;
    if (mods & MOD_MASK_GUI) keycode |= QK_LGUI;
    if (mods & MOD_BIT(KC_LALT)) keycode |= QK_LALT;
    if (mods & MOD_BIT(KC_RALT)) keycode |= QK_RALT;

    last_keycode = keycode;
}

void update_key(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        register_code16(keycode);
    } else {
        unregister_code16(keycode);
    }
}

void update_repeat_key(keyrecord_t *record) {
    update_key(last_keycode, record);
}

void update_reverse_key_pairs(uint16_t a, uint16_t b, keyrecord_t *record) {
    if (last_keycode == a) {
        update_key(b, record);
    } else if (last_keycode == b) {
        update_key(a, record);
    }
}

void update_reverse_repeat_key(keyrecord_t *record) {
    // Do the "reverse" of the last pressed key, that we use to repeat
    update_reverse_key_pairs(C(KC_TAB), C(S(KC_TAB)), record);
    update_reverse_key_pairs(C(KC_N), C(KC_P), record);
    update_reverse_key_pairs(C(KC_F), C(KC_B), record);
    update_reverse_key_pairs(C(KC_U), C(KC_D), record);
    update_reverse_key_pairs(KC_PGUP, KC_PGDN, record);
    update_reverse_key_pairs(KC_ASTR, KC_HASH, record);
    update_reverse_key_pairs(KC_LCBR, KC_RCBR, record);

    update_reverse_key_pairs(S(KC_W), S(KC_B), record);
    update_reverse_key_pairs(KC_U, C(KC_R), record);
}
