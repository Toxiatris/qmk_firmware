#pragma once
#include "quantum.h"

// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT_numpad_5x4( \
  k00, k01, k02, k03, \
  k10, k11, k12,      \
  k20, k21, k22, k23, \
  k30, k31, k32,      \
  k40, k41, k42       \
) \
{ \
  {k00, k01, k02, k03}, \
  {k10, k11, k12, KC_NO}, \
  {k20, k21, k22, k23}, \
  {k30, k31, k32, KC_NO}, \
  {k40, k41, k42, KC_NO} \
}

/*  matrix layout
   * ,-------------------.
   * | 00 | 01 | 02 | 03 |
   * |----|----|----|----|
   * | 10 | 11 | 12 |    |
   * |----|----|----| 23 |
   * | 20 | 21 | 22 |    |
   * |----|----|----|----|
   * | 30 | 31 | 32 |    |
   * |----|----|----| 42 |
   * |   40    | 41 |    |
   * `-------------------'
 */


