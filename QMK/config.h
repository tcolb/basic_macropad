/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xBEEF
#define PRODUCT_ID      0xDEAD
#define RAW_USAGE_PAGE  0xFF60
#define RAW_USAGE_ID    0x61
#define DEVICE_VER      0x0002
#define MANUFACTURER    trco
#define PRODUCT         trco6
#define DESCRIPTION     5 key + encoder board

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3
#define DIODE_DIRECTION COL2ROW

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *                  NO_DIODE = switches are directly connected to AVR pins
 *
*/
#define MATRIX_ROW_PINS { D6, B4 }
#define MATRIX_COL_PINS { D7, B5, B6 }

// encoder
#define ENCODERS_PAD_A { C6 }
#define ENCODERS_PAD_B { C7 }
#define ENCODER_RESOLUTION 2

// ws2812 RGB LED
#define RGB_DI_PIN D4
#define RGBLED_NUM 2    // Number of LEDs
#define RGBLIGHT_ANIMATIONS

#define DEBOUNCE 5