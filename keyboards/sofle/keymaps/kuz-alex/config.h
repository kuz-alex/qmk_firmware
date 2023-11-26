/* Copyright 2020 Josef Adamcik
 * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* By default left side is selected as master,
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options. */

#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_LED_COUNT RGBLED_NUM
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8
#define RGB_MATRIX_VAL_STEP 8
#define RGB_MATRIX_SPD_STEP 10
#define RGB_MATRIX_SPLIT {36,36}
#define SPLIT_TRANSPORT_MIRROR

// reacts to keypresses
// Light up keys when pressed, then fade to unlit.
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
// Set default RGB mode
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// Set default hue
#define RGB_MATRIX_STARTUP_HUE 200
// Set default saturation
#define RGB_MATRIX_STARTUP_SAT 255
// Set default brightness
/// #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
// Set default animation speed
#define RGB_MATRIX_STARTUP_SPD 35
// Turn off RGB when USB is suspended
#define RGB_DISABLE_WHEN_USB_SUSPENDED
