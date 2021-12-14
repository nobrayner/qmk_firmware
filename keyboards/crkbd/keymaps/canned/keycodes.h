#pragma once

#include QMK_KEYBOARD_H

#include "quantum.h"

enum layers {
    BASE = 0,
    NAV,
    SYM,
    NUM,
    FUN
};

enum custom_keycodes {
    CPSWORD = SAFE_RANGE,
};

#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)

// Thumb layer-tap shorthands
#define NAV_SPC LT(NAV, KC_SPC)
#define SYM_ENT LT(SYM, KC_ENT)
#define NUM_TAB LT(NUM, KC_TAB)
#define FUN_DEL LT(FUN, KC_DEL)
