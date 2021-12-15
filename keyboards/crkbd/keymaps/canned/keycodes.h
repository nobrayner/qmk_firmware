#pragma once

#include QMK_KEYBOARD_H

#include "quantum.h"

enum layers {
    BASE = 0,
    WRKS,
    NAV,
    RSYM,
    LSYM,
    NUM,
    FUN
};

enum custom_keycodes {
    CPSWORD = SAFE_RANGE,
    NUMWORD,

    REPEAT,
    REV_RPT,

    NUM_G,

    VIM_SAVE,
};

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

// Thumb layer-tap shorthands
#define NAV_SPC LT(NAV, KC_SPC)
#define WRK_ENT LT(WRKS, KC_ENT)
#define LSYMMOD LT(LSYM, KC_NO)
#define RSYMMOD LT(RSYM, KC_ESC)

// OS Mods
#define OS_ALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)
#define OS_GUI OSM(MOD_LGUI)
#define OS_CTL OSM(MOD_LCTL)
#define OS_SFT OSM(MOD_LSFT)

// Layer keys
#define L_BASE TO(BASE)
#define L_FUN TO(FUN)

// Workspace keys
#define WRK_1 LGUI(KC_1)
#define WRK_2 LGUI(KC_2)
#define WRK_3 LGUI(KC_3)
#define WRK_4 LGUI(KC_4)
#define WRK_5 LGUI(KC_5)
#define WRK_6 LGUI(KC_6)
#define WRK_7 LGUI(KC_7)
#define WRK_8 LGUI(KC_8)
#define WRK_9 LGUI(KC_9)
#define WRK_0 LGUI(KC_0)
