/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "quantum.h"
#include QMK_KEYBOARD_H

#include "keycodes.h"
#include "caps_word.h"
#include "num_word.h"

#include "g/keymap_combo.h"


///////////////////////////////////////////////////////////////////////////
//////////////////////         TO DO            ///////////////////////////
///////////////////////////////////////////////////////////////////////////
//* Implement REPEAT key

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_TAB ,   KC_Y  ,   KC_C  ,   KC_K  ,   KC_F  ,   KC_J  ,                          KC_X  ,   KC_L  ,  REPEAT ,   KC_U  ,  KC_DOT , KC_PSCR ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      CPSWORD ,   KC_R  ,   KC_S  ,   KC_T  ,   KC_H  ,   KC_D  ,                          KC_M  ,   KC_N  ,   KC_A  ,   KC_I  ,   KC_O  , NUMWORD ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_COMM ,   KC_V  ,   KC_G  ,   KC_P  ,   KC_B  ,                        KC_SLSH ,   KC_W  , KC_LPRN , KC_RPRN , KC_UNDS ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              RSYMMOD , NAV_SPC , KC_BSPC ,    WRK_ENT ,   KC_E  , LSYMMOD
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NUM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  , KC_PLUS ,   KC_K  , KC_PERC ,   KC_J  ,                        _______ ,  KC_NO  , _______ ,  KC_NO  , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,   KC_6  ,   KC_4  ,   KC_2  ,   KC_0  , KC_ASTR ,                         KC_NO  ,   KC_1  ,   KC_3  ,   KC_5  ,   KC_7  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , _______ ,  KC_NO  ,  NUM_G  ,   KC_8  ,  KC_NO  ,                        _______ ,   KC_9  , _______ , _______ , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [RSYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  , C(KC_A) , C(KC_W) ,  KC_NO  ,  KC_NO  ,                         KC_NO  , KC_HASH , _______ ,  KC_AT  , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  OS_ALT ,  OS_GUI ,  OS_CTL ,  OS_SFT ,  KC_NO  ,                         KC_GRV , KC_QUES , KC_LBRC , KC_RBRC ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , C(KC_Z) , C(KC_X) ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        _______ , KC_AMPR , _______ , _______ , _______ , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ , L_BASE ,   L_FUN
                                          //`-----------------------------'  `-----------------------------'
  ),
  [LSYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ , KC_TILD , KC_PLUS , KC_BSLS , KC_PERC ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , KC_PIPE , KC_LCBR , KC_RCBR , KC_MINS , KC_ASTR ,                         KC_NO  ,  OS_SFT ,  OS_CTL ,  OS_GUI ,  OS_ALT , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ , _______ ,  KC_LT  ,  KC_GT  , KC_EXLM ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , OS_RALT , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               L_FUN  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [WRKS] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  WRK_8  ,  WRK_6  ,  WRK_4  ,  WRK_2  ,  KC_NO  ,                         KC_NO  ,  WRK_3  ,  WRK_5  ,  WRK_7  ,  WRK_9  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  WRK_0  ,  KC_NO  ,                         KC_NO  ,  WRK_1  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
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
      _______ ,   KC_F8 ,  KC_F6  ,  KC_F4  ,  KC_F2  ,  KC_F12 ,                         KC_F11 ,  KC_F1  ,  KC_F3  ,  KC_F5  ,  KC_F7  , _______ ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      _______ ,   KC_NO ,  KC_NO  ,  KC_NO  ,  KC_F10 ,  KC_NO  ,                         KC_NO  ,  KC_F9  ,  KC_NO  ,  KC_NO  ,  KC_NO  , _______ ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  , _______ , _______ ,    _______ ,  L_BASE ,  KC_NO
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

    // "Macro" keys
    switch (keycode) {
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

    if (get_oneshot_mods() & MOD_BIT(KC_LSFT)) {
        oled_write_ln_P(PSTR("SHIFT"), false);
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
