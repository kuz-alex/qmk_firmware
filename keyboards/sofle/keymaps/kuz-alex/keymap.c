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

#include QMK_KEYBOARD_H
#include "oled.c"

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [1] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI) },
    [3] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)}
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                                    KC_6, KC_7, KC_8, KC_9, KC_0, KC_DEL,
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                                    KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,                                    KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE,             XXXXXXX, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                        KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC,      KC_ENT, MO(2), KC_RGUI, KC_RALT, KC_RCTL
    ),
[1] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
    KC_LSFT, KC_LCTL, KC_LALT, KC_RGUI, KC_DLR, KC_CAPS,                         KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_RPRN, KC_PIPE,
    KC_TRNS, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, XXXXXXX, KC_TRNS,      KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSLS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, MO(1),  KC_TRNS,       KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS
    ),
[2] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_PGDN, KC_CAPS,                        KC_MINS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
    KC_TRNS, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, BL_TOGG, KC_TRNS,       KC_TRNS, KC_UNDS, KC_PPLS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
                           KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS,        KC_TRNS, MO(2), KC_TRNS, KC_TRNS, KC_TRNS
     ),
[3] = LAYOUT(
    KC_TRNS,  XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TRNS,
    KC_MPRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    RGB_MOD,  KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,                       KC_INS, KC_HOME, KC_PGUP, XXXXXXX, XXXXXXX, KC_F12,
    RGB_RMOD, KC_BRID, KC_BRIU, BL_STEP, RGB_TOG, BL_TOGG, XXXXXXX,     XXXXXXX, KC_DEL, KC_END, KC_PGDN, XXXXXXX, XXXXXXX, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XXXXXXX,     XXXXXXX, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
/*
[3] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______,  _______, _______,
  _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______,  _______, _______,
  _______, _______, _______, _______, _______, _______,                           _______, _______, _______, _______,  _______, _______,
  _______, _______, _______, _______, _______, _______,  _______,       _______,  _______, _______, _______, _______,  _______, _______,
                    _______, _______, _______,  _______, _______,       _______, _______, _______, _______, _______
)
*/
};


#define HSV_AZURE       132, 102, 255
#define HSV_BLACK         0,   0,   0
#define HSV_BLUE        170, 255, 255
#define HSV_CHARTREUSE   64, 255, 255
#define HSV_CORAL        11, 176, 255
#define HSV_CYAN        128, 255, 255
#define HSV_GOLD         36, 255, 255
#define HSV_GOLDENROD    30, 218, 218
#define HSV_GREEN        85, 255, 255
#define HSV_MAGENTA     213, 255, 255
#define HSV_PINK        234, 128, 255
#define HSV_PURPLE      191, 255, 255
#define HSV_RED           0, 255, 255
#define HSV_SPRINGGREEN 106, 255, 255
#define HSV_TEAL        128, 255, 128
#define HSV_TURQUOISE   123,  90, 112
#define HSV_WHITE         0,   0, 255
#define HSV_YELLOW       43, 255, 255
#define HSV_OFF         HSV_BLACK

void keyboard_post_init_user(void) {
    // rgblight_sethsv_noeeprom(HSV_MAGENTA);

    // transaction_register_rpc(RPC_ID_USER_KEYMAP_SYNC, user_keymap_sync);

    // This is good in case I screw anything up with bad code; it's REALLY hard
    // to fix it when mods get messed up since it can mess up the whole OS.
    //
    // Ctrl+alt+del can help on Windows, as can osk.exe sometimes.
    clear_mods();
}
