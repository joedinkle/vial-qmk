#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,\
		QK_BOOT,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I,    KC_O,    KC_P,      KC_BSPC,\
        KC_TAB,   KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, KC_ENTER,\
        KC_LSFT,   KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,\
        KC_1,    KC_2, KC_3, KC_4, KC_5,  KC_6, KC_7,  KC_8,        KC_B\
)
};
