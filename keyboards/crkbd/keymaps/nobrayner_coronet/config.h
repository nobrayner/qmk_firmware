// Copyright 2021 nobrayner
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MASTER_LEFT

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_TAB
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// All combos are specified from the base layer, saves space
#define COMBO_ONLY_FROM_LAYER 0

// Not supported without flto
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
