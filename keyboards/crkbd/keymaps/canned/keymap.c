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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,   KC_Y  ,   KC_C  ,   KC_K  ,   KC_F  ,   KC_J  ,                          KC_Z  ,   KC_L  ,  KC_NO  ,   KC_U  ,   KC_Q  ,  KC_NO ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      CPSWORD ,   KC_R  ,   KC_S  ,   KC_T  ,   KC_H  ,   KC_D  ,                          KC_M  ,   KC_N  ,   KC_A  ,   KC_I  ,   KC_O  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_QUOT ,   KC_V  ,   KC_G  ,   KC_P  ,   KC_B  ,                          KC_X  ,   KC_W  , KC_COMM ,  KC_DOT , KC_UNDS ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_ESC , NAV_SPC , KC_BSPC ,    SYM_ENT ,   KC_E  ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NAV] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  RESET  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         U_CUT  ,  U_CPY  ,  U_PST  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT ,  KC_NO  ,                        KC_LEFT , KC_DOWN ,  KC_UP  , KC_RGHT ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        KC_HOME , KC_PGDN , KC_PGUP ,  KC_END ,  KC_INS ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  ,  KC_NO  ,  KC_NO  ,     KC_ENT , KC_BSPC ,  KC_DEL
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NUM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  KC_NO  ,   KC_7  ,   KC_8  ,   KC_9  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  ,   KC_4  ,   KC_5  ,   KC_6  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  ,   KC_1  ,   KC_2  ,   KC_3  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  ,  KC_NO  ,  KC_NO  ,     KC_NO  ,  KC_NO  ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [SYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  , KC_LCBR , KC_AMPR , KC_ASTR , KC_LPRN , KC_RCBR ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  RESET  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_COLN ,  KC_DLR , KC_PERC , KC_CIRC , KC_PLUS ,                         KC_NO  , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_TILD , KC_EXLM ,  KC_AT  , KC_HASH , KC_PIPE ,                         KC_NO  ,  KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              KC_LPRN , KC_RPRN , KC_UNDS ,     KC_NO  ,  KC_NO  ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
  [FUN] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  KC_F12 ,  KC_F7  ,  KC_F8  ,  KC_F9  , KC_PSCR ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  RESET  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_F11 ,  KC_F4  ,  KC_F5  ,  KC_F6  , KC_SLCK ,                         KC_NO  , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_F10 ,  KC_F1  ,  KC_F2  ,  KC_F3  , KC_PAUS ,                         KC_NO  ,  KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_APP ,  KC_SPC ,  KC_TAB ,     KC_NO  ,  KC_NO  ,  KC_NO
                                          //`-----------------------------'  `-----------------------------'
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_case_modes(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case CPSWORD:
            if (record->event.pressed) {
                toggle_caps_word();
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
        case SYM:
            oled_write_ln_P(PSTR("SYM"), false);
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
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
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
