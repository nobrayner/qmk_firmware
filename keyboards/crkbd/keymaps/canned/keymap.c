#include "quantum.h"
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "caps_word.h"
#include "num_word.h"
#include "repeat.h"

#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_TAB ,   KC_Q  ,   KC_W  ,   KC_F  ,   KC_P  ,   KC_G  ,                          KC_B  ,   KC_L  ,  REPEAT ,   KC_Y  , KC_QUOT , KC_PSCR ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      CPSWORD ,   KC_A  , MT_LRNG , MT_LMID , MT_LIDX ,   KC_J  ,                          KC_K  , MT_RIDX , MT_RMID , MT_RRNG ,   KC_O  , NUMWORD ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,   KC_Z  ,   KC_X  ,   KC_C  ,   KC_D  ,   KC_V  ,                        CT(DOT) ,   KC_H  ,   KC_M  , CT(LPRN), CT(RPRN),  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              RSYMMOD , NAV_SPC , KC_BSPC ,    WRK_ENT ,   KC_E  , LSYMMOD
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NUM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  , KC_PLUS , KC_ASTR , KC_PERC ,  KC_NO  ,                         KC_NO  ,  KC_NO  , _______ ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,   KC_6  ,   KC_4  ,   KC_2  ,   KC_0  ,   KC_J  ,                          KC_K  ,   KC_1  ,   KC_3  ,   KC_5  ,   KC_7  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,   KC_X  ,  NUM_G  ,   KC_8  ,  KC_NO  ,                        _______ ,   KC_9  ,  KC_NO  , _______ , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_ESC , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [RSYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  , C(KC_A) , C(KC_W) ,  KC_NO  ,  KC_NO  ,                         KC_NO  , KC_HASH , _______ ,  KC_AT  , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT ,  KC_NO  ,                         KC_GRV , KC_QUES , KC_LBRC , KC_RBRC ,  KC_DLR , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , C(KC_Z) , C(KC_X) ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        _______ , KC_AMPR ,  KC_NO  , _______ , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ , L_BASE ,   L_FUN
                                          //`-----------------------------'  `-----------------------------'
  ),
  [LSYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ , KC_TILD , KC_PLUS , KC_ASTR , KC_PERC , KC_SLSH ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , KC_PIPE , KC_LCBR , KC_RCBR , KC_MINS , KC_BSLS ,                         KC_NO  , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_LT  ,  KC_GT  , KC_EXLM ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , KC_RALT , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               L_FUN  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [WRKS] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  WRK_5  ,  WRK_4  ,  WRK_3  ,  WRK_2  ,  KC_NO  ,                        NDE_LFT , NDE_DWN ,  NDE_UP , NDE_RHT ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  WRK_1  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NAV] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         U_CUT  ,  U_CPY  ,  U_PST  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_TAB ,  KC_NO  ,                        KC_LEFT , KC_DOWN ,  KC_UP  , KC_RGHT ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        KC_HOME , KC_PGDN , KC_PGUP ,  KC_END ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [FUN] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_F8  ,  KC_F6  ,  KC_F4  ,  KC_F2  ,  KC_F12 ,                         KC_F11 ,  KC_F1  ,  KC_F3  ,  KC_F5  ,  KC_F7  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_F10 ,  KC_NO  ,                         KC_NO  ,  KC_F9  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_ESC , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Check for CPSWORD and NUMWORD before processing them, so they can be toggled
    switch (keycode) {
        case CPSWORD:
            if (record->event.pressed) {
                toggle_caps_word();
            }
            return false;
        case NUMWORD:
            if (record->event.pressed) {
                toggle_num_word();
            }
            return false;
    }

    if (!process_case_modes(keycode, record)) {
        return false;
    }
    if (!process_num_word(keycode, record)) {
        return false;
    }

    switch (keycode) {
        // Custom tap-holds
        case CT(DOT):
            if (record->tap.count && record->event.pressed) {
                tap_code(KC_DOT);
            } else if (record->event.pressed) {
                tap_code(KC_COMM);
            }
            return false;
        case CT(LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
            } else if (record->event.pressed) {
                tap_code(KC_SLSH);
            }
            return false;
        case CT(RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN);
            } else if (record->event.pressed) {
                tap_code16(KC_QUES);
            }
            return false;

        // "Macro" keys
        case NUM_G:
            if (record->event.pressed) {
                tap_code16(S(KC_G));
            }
            return false;
        case VIM_SAVE:
            if (record->event.pressed) {
                tap_code(KC_ESC);
                tap_code16(KC_COLN);
                tap_code(KC_W);
                tap_code(KC_ENT);
            }
            return false;
        case REPEAT:
            update_repeat_key(record);
            return false;
        case REV_RPT:
            update_reverse_repeat_key(record);
            return false;
        default:
            if (record->event.pressed) {
                register_key_to_repeat(keycode);
            }
            break;
    }

    return true;
}

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return OLED_ROTATION_270;
}

void oled_render_layer_state(void) {
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case NAV:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case WRKS:
            oled_write_ln_P(PSTR("WORK"), false);
            break;
        case LSYM:
            oled_write_ln_P(PSTR("LSYM"), false);
            break;
        case RSYM:
            oled_write_ln_P(PSTR("RSYM"), false);
            break;
        case NUM:
            oled_write_ln_P(PSTR("NUM"), false);
            break;
        case FUN:
            oled_write_ln_P(PSTR("FUNC"), false);
            break;
    }

    oled_write_ln_P(PSTR(""), false);
    oled_write_ln_P(PSTR(""), false);

    if (caps_word_enabled()) {
        oled_write_ln_P(PSTR("CAPS"), false);
    } else {
        oled_write_ln_P(PSTR(""), false);
    }

    if (get_oneshot_mods() & MOD_BIT(KC_LCTL)) {
        oled_write_ln_P(PSTR("CTRL"), false);
    } else {
        oled_write_ln_P(PSTR(""), false);
    }
    if (get_oneshot_mods() & MOD_BIT(KC_LSFT)) {
        oled_write_ln_P(PSTR("SHFT"), false);
    } else {
        oled_write_ln_P(PSTR(""), false);
    }
    if (get_oneshot_mods() & MOD_BIT(KC_LGUI)) {
        oled_write_ln_P(PSTR("GUI"), false);
    } else {
        oled_write_ln_P(PSTR(""), false);
    }
    if (get_oneshot_mods() & MOD_BIT(KC_LALT)) {
        oled_write_ln_P(PSTR("ALT"), false);
    } else {
        oled_write_ln_P(PSTR(""), false);
    }
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
        // Render something cool to the left side, I guess?
    }
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}
#endif // OLED_ENABLE
