#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
  [0] = LAYOUT(
    LCTL(LSFT(KC_A)), LCTL(LSFT(KC_B)), LCTL(LSFT(KC_C)), LCTL(LSFT(KC_D)), LCTL(LSFT(KC_E)), LCTL(LSFT(KC_F)),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(KC_G)), LCTL(LSFT(KC_H)), LCTL(LSFT(KC_I)), LCTL(LSFT(KC_J)), LCTL(LSFT(KC_K)), LCTL(LSFT(KC_L)),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(KC_M)), LCTL(LSFT(KC_N)), LCTL(LSFT(KC_O)), LCTL(LSFT(KC_P)), LCTL(LSFT(KC_Q)), LCTL(LSFT(KC_R)),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    LCTL(LSFT(KC_S)), LCTL(LSFT(KC_T)), LCTL(LSFT(KC_U)), LCTL(LSFT(KC_V)), LCTL(LSFT(KC_W)), LCTL(LSFT(KC_X)),    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
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
