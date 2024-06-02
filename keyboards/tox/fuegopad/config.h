#pragma once

#define TAPPING_TERM 400

/* RGB Pins */
/*
#define WS2812_DI_PIN GP17
#define RGBLED_NUM 1
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_BREATHING
*/

//#define NOP_FUDGE 0.4

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 6

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS { GP18, GP26, GP27, GP28, GP29 }
#define MATRIX_COL_PINS { GP10, GP19, GP20, GP9, GP8, GP7 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


