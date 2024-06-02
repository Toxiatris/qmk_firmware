#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,--------------------------------------------------------------------.
 * |  Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------+-----+-------+------+------+-----|
 * |  A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------+-----+------+------+------+------|
 * |  Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+-----|
 * |Ctrl | Alt  | Lower| Shift|    Space    | BSPC | Raise|  Tab | Enter|
 * `--------------------------------------------------------------------'
 */
  [0] = LAYOUT_ortho_4x10(
   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
   KC_LCTL, KC_LALT, MO(1),   KC_LSFT, KC_SPC,  KC_SPC,  KC_BSPC, MO(2),   KC_TAB,  KC_ENT
  ),

/* Lower
 * ,--------------------------------------------------------------------.
 * |  !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |
 * |------+------+------+------+------+-------------+------+------+-----|
 * |  F1 |   F2 |   F3 |   F4 |   F5 |   F6 | Left | Down |  Up  |Right |
 * |------+------+------+------+------+-----+------+------+------+------|
 * |  F7 |   F8 |   F9 |  F10 |  F11 |  F12 |   ~  |   ,  |   {  |   }  |
 * |------+------+------+------+------+------+------+------+------+-----|
 * |Ctrl | LGUI |      | Shift|    Space    | MO(3)| Down |  Up  |Escape|
 * `--------------------------------------------------------------------'
 */
  [1] = LAYOUT_ortho_4x10(
   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_GRV,  KC_COMM, KC_LBRC, KC_RBRC,
   KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  MO(3),  KC_DOWN, KC_UP,   KC_ESC
  ),

  /* Raise
 * ,--------------------------------------------------------------------.
 * |  1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |
 * |------+------+------+------+------+-------------+------+------+-----|
 * |  F1 |   F2 |   F3 |   F4 |   F5 |   F6 |   -  |   +  |   "  |Enter |
 * |------+------+------+------+------+-----+------+------+------+------|
 * |  F7 |   F8 |   F9 |  F10 |  F11 |  F12 |   ~  |   ,  |   {  |   }  |
 * |------+------+------+------+------+------+------+------+------+-----|
 * |Ctrl | GUI  | Lower| Shift|    Space    |Raise | Left | Down |  Up  |
 * `--------------------------------------------------------------------'
 */
  [2] = LAYOUT_ortho_4x10(
   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_QUOT, KC_ENT,
   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_GRV,  KC_COMM, KC_LBRC, KC_RBRC,
   KC_LCTL, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DOWN, KC_UP,   KC_RIGHT
  ),

   /* Other
 * ,--------------------------------------------------------------------.
 * |     |      |      |      |      |      |      |      |      |Sleep |
 * |------+------+------+------+------+-------------+------+------+-----|
 * |     |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-----+------+------+------+------|
 * |     |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+-----|
 * |     |      |      |      |             |      |      |      |      |
 * `--------------------------------------------------------------------'
 */
  [3] = LAYOUT_ortho_4x10(
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLEP,
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};
