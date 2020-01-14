sudo/* Copyright 2018 MechMerlin
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

#define KC_XXXX KC_NO
#define KC_ KC_TRNS 
#define KC_ALLU LSFT(LCTL(KC_UP))
#define KC_ALLL LSFT(LCTL(KC_LEFT))
#define KC_ALLR LSFT(LCTL(KC_RIGHT))
#define KC_ALLD LSFT(LCTL(KC_DOWN))
#define KC_COPY LCTL(KC_C)
#define KC_PST LCTL(KC_V)
#define KC_CUT LCTL(KC_X)
#define KC_CALD LCTL(LALT(KC_DEL))
#define KC_WINL LGUI(KC_LEFT)
#define KC_WINR LGUI(KC_RIGHT)
#define KC_WINU LGUI(KC_UP)
#define KC_WIND LGUI(KC_DOWN)
#define KC_LOCK LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KC_LAYOUT( /* Base */
    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   NO,    R,   F1,   F2,   F3,   F4,   F5, \
    F9,  F10,  F11,  F12,  F13,  F14,  F15,  F16,   NO,    R,   F6,   F7,   F8,   F9,  F10, \
   F17,  F18,  F19,  F20,  F21,  F22,  F23,  F24,   NO,    R,  F11,  F12,  F13,  F14,  F15, \
     D,    O,    N,    U,    T,    C,    A,    T,  SPC,    R,  F16,    L,    E,    S,  SPC, \
     D,    O,    N,    U,    T,    C,    A,    T,  SPC,    R,    U,    L,    E,    S,  SPC, \
     D,    O,    N,    U,    T,    C,    A,    T,  SPC,    R,    U,    L,    E,    S,  SPC, \
     D,  CUT, ALLL, ALLD, ALLU, ALLR,    A,    T,  SPC,    R,    U,    L,    E,    S,  SPC, \
     D,  PST, LEFT, DOWN,   UP, RGHT,    A,    T,  SPC,    R,    U,    L,    E,    S,  SPC, \
     D, COPY, HOME, PGDN, PGUP,  END,    A,    T,  SPC,    R,    U,    L,    E,    S,  SPC, \
     D,    1,    2,    3,    4,    5,   NO,   NO,   NO,    6,    7,    8,    9,    0,  SPC, \
  MINS, QUOT, COMM,  DOT,    P,    Y,    C,    A,    T,    F,    G,    C,    R,    L, SLSH, \
   TAB,    A,    O,    E,    U,    I,    T,  SPC,    R,    D,    H,    T,    N,    S,  EQL, \
  LCTL, SCLN,    Q,    J,    K,    X,    A,    T,  SPC,    B,    M,    W,    V,    Z, LALT, \
  LCTL, SCLN,    Q,    J,    K,    X,    A,    T,  SPC,    B,    M,    W,    V,    Z, LALT, \
     D,    O,    N,    U,    T, LSFT,    A,  ESC,  SPC,  SPC,    U,    L,    E,    S,  SPC  \
),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}
