#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
  [0] = LAYOUT(
    LCTL(LSFT(LGUI(KC_A))), LCTL(LSFT(LGUI(KC_B))), LCTL(LSFT(LGUI(KC_C))), LCTL(LSFT(LGUI(KC_D))), LCTL(LSFT(LGUI(KC_E))), LCTL(LSFT(LGUI(KC_F))),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(LGUI(KC_G))), LCTL(LSFT(LGUI(KC_H))), LCTL(LSFT(LGUI(KC_I))), LCTL(LSFT(LGUI(KC_J))), LCTL(LSFT(LGUI(KC_K))), LCTL(LSFT(LGUI(KC_L))),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(LGUI(KC_M))), LCTL(LSFT(LGUI(KC_N))), LCTL(LSFT(LGUI(KC_O))), LCTL(LSFT(LGUI(KC_P))), LCTL(LSFT(LGUI(KC_Q))), LCTL(LSFT(LGUI(KC_R))),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(LGUI(KC_S))), LCTL(LSFT(LGUI(KC_T))), LCTL(LSFT(LGUI(KC_U))), LCTL(LSFT(LGUI(KC_V))), LCTL(LSFT(LGUI(KC_W))), LCTL(LSFT(LGUI(KC_X))),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

// Extra
  [1] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

// Extra
  [2] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

// Extra
  [3] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [4] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

// Extra
  [5] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

// Extra
  [6] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [7] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [8] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [9] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [10] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [11] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [12] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [13] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [14] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [15] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [16] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [17] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [18] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [19] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [20] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
// Extra
  [21] = LAYOUT(
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    _______, _______, _______, _______, _______, _______,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
};
