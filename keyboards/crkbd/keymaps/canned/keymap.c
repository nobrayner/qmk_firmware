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

#include QMK_KEYBOARD_H

#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)

enum layers { BASE, SYM, NAV, FUN };

// Thumb layer-tap shorthands
#define TO_SYM TO(SYM)
#define TO_NAV TO(NAV)
#define TO_FUN TO(FUN)
#define TO_BASE TO(BASE)

// Homerow mods shorthands
#define ALT_S LALT_T(KC_S)
#define GUI_KCT LGUI_T(KC_T)
#define GUI_N LSFT_T(KC_N)
#define ALT_E LALT_T(KC_E)

// Utility shorthands
#define LCTRL OSM(MOD_LCTL)
#define LSHFT OSM(MOD_LSFT)

#define DE_LEFT LAG(KC_LEFT)
#define DE_RGHT LAG(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
      DE_LEFT ,   KC_Q  ,   KC_W  ,   KC_F  ,   KC_P  ,   KC_B  ,                          KC_J  ,   KC_L  ,   KC_U  ,   KC_Y  , KC_QUOT , DE_RGHT ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      KC_MINS ,   KC_A  ,   KC_R  ,  ALT_S  , GUI_KCT ,   KC_G  ,                          KC_K  ,  GUI_N  ,  ALT_E  ,   KC_I  ,   KC_O  , KC_SCLN ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,   KC_Z  ,   KC_X  ,   KC_C  ,   KC_D  ,   KC_V  ,                          KC_M  ,   KC_H  , KC_COMM ,  KC_DOT , KC_SLSH ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              KC_ESC  ,  KC_SPC , KC_LEAD ,     LCTRL  ,  LSHFT  ,  TO_SYM
                                          //`-----------------------------'  `-----------------------------'
  ),
  [SYM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       RESET  ,   KC_1  ,   KC_2  ,   KC_3  ,   KC_4  ,   KC_5  ,                          KC_6  ,   KC_7  ,   KC_8  ,   KC_9  ,   KC_0  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_EXLM , KC_LBRC , KC_LCBR , KC_LPRN , KC_HASH ,                         KC_GRV ,  KC_EQL , KC_PLUS ,  KC_AT  , KC_PIPE ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_RBRC , KC_RCBR , KC_RPRN ,  KC_NO  ,                         KC_DLR , KC_CIRC , KC_ASTR , KC_PERC ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               TO_FUN ,  TO_NAV ,  KC_TAB ,     KC_ENT , KC_BSPC , TO_BASE
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NAV] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       RESET  ,  KC_NO  , KC_MPRV , KC_VOLU , KC_VOLD , KC_MNXT ,                         U_CUT  ,  U_CPY  ,  U_PST  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_WH_L , KC_WH_U , KC_WH_D , KC_WH_R ,                        KC_LEFT , KC_DOWN ,  KC_UP  , KC_RGHT ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         KC_NO  , KC_HOME ,  KC_END ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              KC_MSTP , KC_MPLY , KC_MUTE ,     KC_NO  ,  KC_NO  , TO_BASE
                                          //`-----------------------------'  `-----------------------------'
  ),
  [FUN] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       RESET  ,  KC_F12 ,  KC_F7  ,  KC_F8  ,  KC_F9  , KC_PSCR ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_F11 ,  KC_F4  ,  KC_F5  ,  KC_F6  , KC_SLCK ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_F10 ,  KC_F1  ,  KC_F2  ,  KC_F3  , KC_PAUS ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_APP ,  KC_SPC ,  KC_TAB ,     KC_NO  ,  KC_NO  , TO_BASE
                                          //`-----------------------------'  `-----------------------------'
  ),
};

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
        case SYM:
            oled_write_ln_P(PSTR("SYM"), false);
            break;
        case NAV:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case FUN:
            oled_write_ln_P(PSTR("FUNC"), false);
            break;
    }

    oled_write_ln_P(PSTR(""), false);
}

// void oled_render_crkbd_logo(void) {
//     static const char PROGMEM crkbd_logo[] = {
//         0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
//         0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
//         0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
//         0};
//     oled_write_P(crkbd_logo, false);
// }

void oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
        // oled_render_crkbd_logo();
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
