#include QMK_KEYBOARD_H

enum custom_layers {
    _BASE,
    _SYM,
    _NAV,
    _RPG
};

#define KC_LSPC LT(_SYM, KC_SPC)  // Left Space key, tap for Space, hold for Symbol Layer
#define KC_RSPC LT(_NAV, KC_SPC)  // Right Space key, tap for Space, hold for Navigation Layer
#define KC_SFTT LSFT_T(KC_TAB)    // Tap for Tab, hold for Left Shift
#define KC_RPGT TG(_RPG)          // Toggle RPG layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split_3x6_4(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_SFTT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LOPT, KC_LCMD, KC_LSPC,          KC_RSPC,       KC_BSPC,          KC_RALT, KC_RPGT
        ),

    [_SYM] = LAYOUT_split_3x6_4(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_CAPS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
        _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR,                   KC_LBRC, KC_RBRC, KC_UNDS, KC_SCLN, KC_COLN, KC_BSLS,
        _______, _______, _______, _______,          _______,       _______,          _______, _______
        ),

    [_NAV] = LAYOUT_split_3x6_4(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_ENT,  _______,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU,                   KC_MUTE, KC_CALC, KC_WBAK, KC_WFWD, KC_WREF, _______,
        _______, _______, _______, _______,          _______,       _______,          _______, _______
        ),

    [_RPG] = LAYOUT_split_3x6_4(
        KC_ESC,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                      _______, _______, _______, _______, _______, KC_BSPC,
        KC_LSFT, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,                      _______, _______, _______, _______, _______, _______,
        KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                      _______, _______, _______, _______, _______, _______,
        KC_1,    KC_2,    KC_3,    KC_SPC,            KC_RPGT,      _______,          _______, _______
        )
};