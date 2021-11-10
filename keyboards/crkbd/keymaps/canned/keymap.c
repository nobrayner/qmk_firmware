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

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

enum layers { BASE, MEDIA, NAV, MOUSE, SYM, NUM, FUN };

// Thumb layer-tap shorthands
#define MED_ESC LT(MEDIA, KC_ESC)
#define NAV_SPC LT(NAV, KC_SPC)
#define MOU_TAB LT(MOUSE, KC_TAB)
#define SYM_ENT LT(SYM, KC_ENT)
#define NUM_BSP LT(NUM, KC_BSPC)
#define FUN_DEL LT(FUN, KC_DEL)

// Homerow mods shorthands
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define SFT_KCT LSFT_T(KC_T)
#define SFT_N LSFT_T(KC_N)
#define CTL_E LCTL_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O LGUI_T(KC_O)

// Utility shorthands
#define DE_LEFT LAG(KC_LEFT)
#define DE_RGHT LAG(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,   KC_Q  ,   KC_W  ,   KC_F  ,   KC_P  ,   KC_B  ,                          KC_J  ,   KC_L  ,   KC_U  ,   KC_Y  , KC_QUOT ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
      DE_LEFT ,  GUI_A  ,  ALT_R  ,  CTL_S  , SFT_KCT ,   KC_G  ,                          KC_K  ,  SFT_N  ,  CTL_E  ,  ALT_I  ,  GUI_O  , DE_RGHT ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,   KC_Z  ,   KC_X  ,   KC_C  ,   KC_D  ,   KC_V  ,                          KC_M  ,   KC_H  , KC_COMM ,  KC_DOT , KC_SLSH ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                              MED_ESC , NAV_SPC , MOU_TAB ,    SYM_ENT , NUM_BSP , FUN_DEL
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NAV] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  RESET  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         U_RDO  ,  U_PST  ,  U_CPY  ,  U_CUT  ,  U_UND  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT ,  KC_NO  ,                        KC_LEFT , KC_DOWN ,  KC_UP  , KC_RGHT , KC_CAPS ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        KC_HOME , KC_PGDN , KC_PGUP ,  KC_END ,  KC_INS ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  ,  KC_NO  ,  KC_NO  ,     KC_ENT , KC_BSPC ,  KC_DEL
                                          //`-----------------------------'  `-----------------------------'
  ),
  [MOUSE] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  RESET  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         U_RDO  ,  U_PST  ,  U_CPY  ,  U_CUT  ,  U_UND  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT ,  KC_NO  ,                        KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                        KC_WH_L , KC_WH_D , KC_WH_U , KC_WH_R ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  ,  KC_NO  ,  KC_NO  ,    KC_BTN1 , KC_BTN3 , KC_BTN2
                                          //`-----------------------------'  `-----------------------------'
  ),
  [MEDIA] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  ,  RESET  ,  KC_NO ,   KC_NO  ,  KC_NO  ,  KC_NO  ,                        RGB_TOG , RGB_MOD , RGB_HUI , RGB_SAI , RGB_VAI ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_LGUI , KC_LALT , KC_LCTL , KC_LSFT ,  KC_NO  ,                        KC_MPRV , KC_VOLD , KC_VOLU , KC_MNXT ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,  KC_NO  ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_NO  ,  KC_NO  ,  KC_NO  ,    KC_MSTP , KC_MPLY , KC_MUTE
                                          //`-----------------------------'  `-----------------------------'
  ),
  [NUM] = LAYOUT(
  //,-----------------------------------------------------------.                      ,-----------------------------------------------------------.
       KC_NO  , KC_LBRC ,   KC_7  ,   KC_8  ,   KC_9  , KC_RBRC ,                         KC_NO  ,  KC_NO  ,  KC_NO  ,  KC_NO  ,  RESET  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  , KC_SCLN ,   KC_4  ,   KC_5  ,   KC_6  ,  KC_EQL ,                         KC_NO  , KC_LSFT , KC_LCTL , KC_LALT , KC_LGUI ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------|                      |---------+---------+---------+---------+---------+---------|
       KC_NO  ,  KC_GRV ,   KC_1  ,   KC_2  ,   KC_3  , KC_BSLS ,                         KC_NO  ,  KC_NO  ,  KC_NO  , KC_ALGR ,  KC_NO  ,  KC_NO  ,
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                               KC_DOT ,   KC_0  , KC_MINS ,     KC_NO  ,  KC_NO  ,  KC_NO
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
        case MEDIA:
            oled_write_ln_P(PSTR("MEDIA"), false);
            break;
        case NAV:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case MOUSE:
            oled_write_ln_P(PSTR("MOUSE"), false);
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
