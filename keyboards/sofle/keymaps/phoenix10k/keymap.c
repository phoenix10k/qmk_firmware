#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    BASE,
    LEFT_MOD,
    RIGHT_MOD,
};

enum custom_keycodes {
    KC_000 = SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * BASE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | <x=  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |  Del  |------+------+------+------+------+------|
 * |LS /|\|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RS/ #~|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR | LMOD | /Space  /       \Enter \  | RMOD | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[BASE] = LAYOUT( \
  KC_GRV,           KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC, \
  KC_TAB,           KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LCBR, \
  KC_ESC,           KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT, \
  LSFT_T(KC_NUBS),  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,   KC_DEL,  KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  RSFT_T(KC_NUHS), \
                    KC_LGUI,KC_LALT, KC_LCTRL,TT(LEFT_MOD), KC_SPC,     KC_ENT,  TT(RIGHT_MOD), KC_RCTRL, KC_RALT, KC_RGUI \
),
/* LEFT_MOD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | RBG  | Plain|  Kit |  Mac |  PC  |                    |      |      |      |      |   -  |   =  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Mode+| Hue+ | Sat+ | Val+ |Speed+|-------.    ,-------|  <-  |   V  |   ^  |  ->  |   [  |   ]  |
 * |------+------+------+------+------+------|  MUTE |    |  Del  |------+------+------+------+------+------|
 * |LS/ |\| Mode-| Hue- | Sat- | Val- |Speed-|-------|    |-------|      |      |      |      |      |RS/ #~|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR | LMOD | /Space  /       \Enter \  | RMOD | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[LEFT_MOD] = LAYOUT( \
  KC_F1,    KC_F2,     KC_F3,    KC_F4,    KC_F5,    KC_F6,                            KC_F7,      KC_F8,      KC_F9,   KC_F10,     KC_F11,     KC_F12, \
  KC_TRNS,  RGB_TOG,   RGB_M_P,  RGB_M_K,  AG_SWAP,  AG_NORM,                          KC_NO,      KC_NO,      KC_NO,   KC_NO,      KC_MINS,    KC_EQL, \
  KC_TRNS,  RGB_MOD,   RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,                          KC_LEFT,    KC_DOWN,    KC_UP,   KC_RIGHT,   KC_LBRC,    KC_RBRC, \
  KC_TRNS,  RGB_RMOD,  RGB_HUD,  RGB_SAD,  RGB_VAD,  RGB_SPD, KC_TRNS,     KC_TRNS,    KC_NO,      KC_NO,      KC_NO,   KC_NO,      KC_NO,      KC_TRNS, \
            KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                          KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,    KC_TRNS \
),
/* RIGHT_MOD
 * ,----------------------------------------.                     ,-----------------------------------------.
 * |   `  |      |      |      |  Ins | Home |                    | NLck |   7  |   8  |   9  |   -  |   /  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |   ^  |      |  Del |  End |                    |      |   4  |   5  |   6  |   +  |   *  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |  <-  |   V  |  ->  |      | PgUp |-------.    ,-------|      |   1  |   2  |   3  |   =  |      |
 * |------+------+------+------+------+------|  MUTE |    |  Del  |------+------+------+------+------+------|
 * |LS/ |\|      |      |      |      | PgDn |-------|    |-------|      |   0  |  000 |   .  |  Ent |RS/ #~|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR | LMOD | /Space  /       \Enter \  | RMOD | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[RIGHT_MOD] = LAYOUT( \
  KC_TRNS, KC_NO,   KC_NO,      KC_NO,      KC_INS, KC_HOME,                            KC_NLCK,    KC_P7,  KC_P8,  KC_P9,      KC_PMNS,    KC_PSLS, \
  KC_TRNS, KC_NO,   KC_UP,      KC_NO,      KC_DEL, KC_END,                             KC_NO,      KC_P4,  KC_P5,  KC_P6,      KC_PPLS,    KC_PAST, \
  KC_TRNS, KC_LEFT, KC_DOWN,    KC_RIGHT,   KC_NO,  KC_PGUP,                            KC_NO,      KC_P1,  KC_P2,  KC_P3,      KC_PEQL,    KC_NO, \
  KC_TRNS, KC_NO,   KC_NO,      KC_NO,      KC_NO,  KC_PGDN,  KC_TRNS,       KC_TRNS,   KC_NO,      KC_P0,  KC_000, KC_PDOT,    KC_PENT,    KC_TRNS, \
            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS \
),
};

#ifdef RGBLIGHT_LAYERS

const rgblight_segment_t PROGMEM left_mod_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, HSV_BLUE}
);

const rgblight_segment_t PROGMEM right_mod_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 24, HSV_RED}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    left_mod_layer,
    right_mod_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, LEFT_MOD));
    rgblight_set_layer_state(1, layer_state_cmp(state, RIGHT_MOD));
    return state;
}

#endif

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);
    if (keymap_config.swap_lalt_lgui) {
        oled_write_ln_P(PSTR("MAC"), false);
    } else {
        oled_write_ln_P(PSTR("PC"), false);
    }

    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case BASE:
            oled_write_ln_P(PSTR("Base"), false);
            break;
        case RIGHT_MOD:
            oled_write_ln_P(PSTR("R Mod"), false);
            break;
        case LEFT_MOD:
            oled_write_ln_P(PSTR("L Mod"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CpsLk"), led_usb_state.caps_lock);
    oled_write_ln_P(PSTR("NumLk"), led_usb_state.num_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_000:
            if (record->event.pressed) {
                SEND_STRING("000");
            }
            break;
    }
    return true;
}

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

#endif
