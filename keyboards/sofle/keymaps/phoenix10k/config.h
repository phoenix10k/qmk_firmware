#pragma once

#undef TAPPING_TERM
#define TAPPING_TERM 300

#define RGB_DI_PIN D3
#define RGBLED_NUM 24
#define RGBLED_SPLIT {12,12}
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_LAYERS

// If it's high, then the controller assumes it is the left hand,
// and if it's low, it's assumed to be the right side.
#define SPLIT_HAND_PIN D4
