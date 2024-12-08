#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_GRV, TO(0), TO(0), OSL(1), OSL(2), KC_CAPS, CW_TOGG, TO(2), TO(1), TO(0), TO(0), KC_TILD, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, OSM(MOD_RSFT), QK_GESC, LCTL_T(KC_A), LSFT_T(KC_R), LALT_T(KC_S), LGUI_T(KC_T), KC_D, KC_H, RGUI_T(KC_N), RALT_T(KC_E), RSFT_T(KC_I), RCTL_T(KC_O), OSM(MOD_RCTL), KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, LT(3,KC_PSCR), TO(3), OSM(MOD_LSFT), KC_SPC, KC_ENT, KC_BSPC, KC_G, KC_NO),
    [1] = LAYOUT(KC_TILD, KC_NO, TO(0), KC_TRNS, TO(2), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_TILD, TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT, KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_NO, KC_NO, KC_BSLS, KC_QUOT, KC_DQUO, KC_COLN, KC_PIPE, KC_NO, KC_NO, KC_QUES, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_NO, KC_NO, TO(0), KC_SPC, KC_ENT, KC_BSPC, KC_NO, KC_NO),
    [2] = LAYOUT(KC_NO, KC_NO, TO(0), TO(1), KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_UP, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, TO(0), KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS, RGUI_T(KC_4), RALT_T(KC_5), RSFT_T(KC_6), RCTL_T(KC_0), KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_SPC, KC_ENT, KC_BSPC, KC_NO, KC_NO),
    [3] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_WH_U, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_WH_D, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


