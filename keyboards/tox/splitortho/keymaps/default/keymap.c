#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /*  
   * ,--------------.
   * | 00 | 01 | 02 |
   * |----|----|----|
   * | 10 | 11 | 12 |
   * |----|----|----|
   * | 20 | 21 | 22 |
   * `--------------'
 */

  [0] = LAYOUT_macropad_3x3(
    KC_1,   KC_2,   KC_3,
    KC_4,   KC_5,   KC_6,   
    KC_7,   KC_8,   KC_9
  ),
};
