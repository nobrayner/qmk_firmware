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

// Mod taps
#define MT_LIDX MT(MOD_LSFT, KC_T)
#define MT_LMID MT(MOD_LCTL, KC_S)
#define MT_LRNG MT(MOD_LGUI, KC_R)
#define MT_RIDX MT(MOD_LSFT, KC_N)
#define MT_RMID MT(MOD_LCTL, KC_U)
#define MT_RRNG MT(MOD_LGUI, KC_I)

// Thumb layer-tap shorthands
#define NAV_SPC LT(NAV, KC_SPC)
#define WRK_ENT LT(WRKS, KC_ENT)
#define LSYMMOD LT(LSYM, KC_NO)
#define RSYMMOD LT(RSYM, KC_ESC)

// Shorthands
// Custom tap-hold keys
#define CT(KEY) LT(0, KC_##KEY)
#define ST(KEY) S(KC_##KEY)
// Layer keys
#define L_BASE TO(BASE)
#define L_FUN TO(FUN)

// Workspace keys
#define WRK_1 G(KC_1)
#define WRK_2 G(KC_2)
#define WRK_3 G(KC_3)
#define WRK_4 G(KC_4)
#define WRK_5 G(KC_5)
#define WRK_6 G(KC_6)

#define NDE_LFT G(KC_H)
#define NDE_RHT G(KC_L)
#define NDE_UP  G(KC_K)
#define NDE_DWN G(KC_J)
