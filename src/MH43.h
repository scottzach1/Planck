#ifndef MH43_H
#define MH43_H

#include "matrix.h"
#include "keymap_common.h"
#include "backlight.h"
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a,   \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k1a, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38 \
) \
{ \
   { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, KC_NO k1a}, \
    { k20, KC_NO k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a}, \
    { k30, KC_NO, k31, k32, k33, KC_NO, k34, KC_NO, k35, k36, k37, k38 } \
}

void matrix_init_user(void);
void matrix_scan_user(void);
void led_set_user(uint8_t usb_led);
/
#endif