#pragma once

#undef TAPPING_TERM
#define TAPPING_TERM 300
#define TAPPING_TOGGLE 2
#define PERMISSIVE_HOLD

#define RGBLIGHT_LAYERS
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LED_MAP \
    { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 }
#define RGBLIGHT_DEFAULT_HUE 200

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT

// If it's high, then the controller assumes it is the left hand,
// and if it's low, it's assumed to be the right side.
#define SPLIT_HAND_PIN D4
