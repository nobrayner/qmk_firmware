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
