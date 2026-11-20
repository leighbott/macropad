#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
  [0] = LAYOUT(
    KC_Q,         KC_W,       KC_F,       KC_P,       KC_G,         KC_NO,                        KC_NO,    KC_NO,          KC_NO,       KC_NO,       KC_NO,       KC_NO,
    LT(1,KC_A),   KC_R,       KC_S,       KC_T,       KC_D,         KC_NO,                        KC_NO,    KC_NO,          KC_NO,       KC_NO,       KC_NO,       KC_NO,
    LSFT_T(KC_Z), KC_X,       KC_C,       KC_V,       KC_B,         KC_NO,                        KC_NO,    KC_NO,          KC_NO,       KC_NO,    KC_NO,     KC_NO,
    KC_NO,        KC_NO,      KC_NO,      KC_NO,      LT(3,KC_SPC), KC_LCTL,                      KC_NO,  KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO
  ),

// Extra
  [1] = LAYOUT(
    LSFT(KC_MINUS), KC_7,       KC_8,       KC_9,       KC_SLSH,    _______,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    KC_CALC,        KC_4,       KC_5,       KC_6,       KC_MINUS,   _______,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    TG(1),          KC_1,       KC_2,       KC_3,       KC_DOT,     _______,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    _______,        _______,    _______,    _______,    LT(3,KC_0), KC_BSPC,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
  ),

// Extra
  [2] = LAYOUT(
    _______,        KC_F7,      KC_F8,      KC_F9,      KC_F10,     _______,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,      KC_NO,     KC_NO,
    _______,        KC_F4,      KC_F5,      KC_F6,      KC_F11,     _______,                        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    _______,        KC_F1,      KC_F2,      KC_F3,      KC_F12,     _______,                        KC_NO,    KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),

// Extra
  [3] = LAYOUT(
    KC_LEFT,        KC_DOWN,     KC_UP,        KC_RGHT,      LALT(KC_F4),_______,                    KC_NO,  KC_NO,  KC_NO, KC_NO,   KC_NO, KC_NO,
    _______,        KC_LALT,     LSFT(KC_TAB), KC_TAB,       LALT(KC_TAB),_______,                   KC_NO,  KC_NO,  KC_NO,       KC_NO, KC_NO,        KC_NO,
    RGUI(KC_E),     RCS(KC_TAB), LCTL(KC_W),   LCTL(KC_TAB), LCTL(KC_Y),_______,                     KC_NO,  KC_NO,   KC_NO,             KC_NO,        KC_NO,              KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [4] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),

// Extra
  [5] = LAYOUT(
    KC_Q,           KC_W,       KC_E,       KC_R,       KC_T,       _______,                        KC_NO,    KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
    LT(1,KC_A),     KC_S,       KC_D,       KC_F,       KC_G,       _______,                        KC_NO,    KC_NO,       KC_NO,       KC_NO,       KC_NO,       KC_NO,
    TG(5),          KC_X,       KC_C,       KC_V,       KC_B,       _______,                        KC_NO,    KC_NO,       KC_NO,       KC_NO,    KC_NO,     KC_NO,
    TG(5),          TG(5),      TG(5),      TG(5),      LT(3,KC_SPC), KC_LCTL,                      KC_NO,    KC_NO, KC_NO,      KC_NO,      KC_NO,      KC_NO
  ),

// Extra
  [6] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [7] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [8] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [9] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [10] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [11] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [12] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [13] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [14] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [15] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [16] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [17] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [18] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [19] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [20] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
// Extra
  [21] = LAYOUT(
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,                KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
   _______,_______,_______,_______,_______,_______,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO
  ),
};
