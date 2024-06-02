#include QMK_KEYBOARD_H

enum {
  TD_DOTCOMMA
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_DOTCOMMA] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, KC_COMMA)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * ,-------------------.
   * | NL | /  | *  | -  |
   * |----|----|----|----|
   * | 7  | 8  | 9  |    |
   * |----|----|----| +  |
   * | 4  | 5  | 6  |    |
   * |----|----|----|----|
   * | 1  | 2  | 3  |    |
   * |----|----|----| En |
   * |    0    | .  |    |
   * `-------------------'
   */

  [0] = LAYOUT_numpad_5x4(
    KC_BSPC, KC_PSLS, KC_PAST, KC_PMNS, 
    KC_P7,   KC_P8,   KC_P9,   
    KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
    KC_P1,   KC_P2,   KC_P3,   
    LT(1, KC_P0), TD(TD_DOTCOMMA),  KC_PENT  
  ),
  [1] = LAYOUT_numpad_5x4(
    KC_DEL,  KC_ESC,   KC_LPRN,   KC_RPRN, 
    KC_NO,   KC_CIRC,   KC_NO,   
    KC_NO,   KC_NO,   KC_NO,   KC_CALC, 
    KC_NO,   KC_NO,   KC_NO,   
    KC_NO,   KC_NO,   KC_NO  
  )  
};
