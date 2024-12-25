#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM esc_combo[] = {KC_Q, KC_W, COMBO_END};

const uint16_t PROGMEM osm_lshift_combo[] = {KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM osm_lshift1_combo[] = {KC_E, KC_I, COMBO_END};

const uint16_t PROGMEM osm_lctrl_combo[] = {KC_A, KC_R, COMBO_END};
const uint16_t PROGMEM osm_rctrl_combo[] = {KC_I, KC_O, COMBO_END};

const uint16_t PROGMEM osm_ctrl_shft_combo[] = {KC_A, KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM osm_rctrl_rshft_combo[] = {KC_E, KC_I, KC_O, COMBO_END};

const uint16_t PROGMEM osm_gui_combo[] = {KC_L, KC_N, COMBO_END};
const uint16_t PROGMEM osm_gui1_combo[] = {KC_P, KC_T, COMBO_END};

const uint16_t PROGMEM osm_alt_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM osm_alt1_combo[] = {KC_U, KC_E, COMBO_END};

const uint16_t PROGMEM osl_symbol_layer[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM osl_symbola_combo[] = {KC_U, KC_Y, COMBO_END};

const uint16_t PROGMEM symbol_on_combo[] = {KC_Q, KC_W, KC_F, COMBO_END};

const uint16_t PROGMEM symbol_on_osl_num_combo[] = {KC_HASH, KC_DLR, COMBO_END};

const uint16_t PROGMEM osm_num_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM osm_rnum_combo[] = {KC_L, KC_U, COMBO_END};

const uint16_t PROGMEM num_on_combo[] = {KC_F, KC_P, KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM num_on_1_combo[] = {KC_HASH, KC_DLR, KC_AMPR, KC_ASTR, COMBO_END};
const uint16_t PROGMEM num_on_osm_symbol_combo[] = {KC_8, KC_9, COMBO_END};

const uint16_t PROGMEM l1_osm_lnum_combo[] = {KC_DLR, KC_PERC, COMBO_END};
const uint16_t PROGMEM l1_osm_rnum_combo[] = {KC_CIRC, KC_AMPR, COMBO_END};

const uint16_t PROGMEM f_p_leader_combo[] = {KC_F, KC_P, COMBO_END};

const uint16_t PROGMEM default_layer_1_on_combo[] = {KC_LCBR, KC_RCBR, COMBO_END};
const uint16_t PROGMEM default_layer_2_on_combo[] = {KC_LEFT, KC_6, COMBO_END};
const uint16_t PROGMEM default_layer_3_on_combo[] = {KC_MS_L, KC_WH_R, COMBO_END};
const uint16_t PROGMEM default_layer_4_on_combo[] = {KC_9, KC_0, COMBO_END};
const uint16_t PROGMEM default_layer_5_on_combo[] = {KC_UNDS, KC_SCLN, COMBO_END};

const uint16_t PROGMEM f_u_cwtogg_combo[] = {KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM bspc_combo[] = {KC_H, KC_N, COMBO_END};

combo_t key_combos[] = {
    COMBO(f_u_cwtogg_combo, CW_TOGG),
    COMBO(f_p_leader_combo, CW_TOGG),
    COMBO(bspc_combo, KC_BSPC),

    COMBO(default_layer_1_on_combo, TO(0)),
    COMBO(default_layer_2_on_combo, TO(0)),
    COMBO(default_layer_3_on_combo, TO(0)),
    COMBO(default_layer_4_on_combo, TO(0)),
    COMBO(default_layer_5_on_combo, TO(0)),

    COMBO(esc_combo, KC_ESC),

    COMBO(osm_lshift_combo, OSM(MOD_LSFT)),
    COMBO(osm_lshift1_combo, OSM(MOD_LSFT)),

    COMBO(osm_lctrl_combo, OSM(MOD_LCTL)),
    COMBO(osm_rctrl_combo, OSM(MOD_LCTL)),

    COMBO(osm_ctrl_shft_combo, OSM(MOD_LCTL | MOD_LSFT)),
    COMBO(osm_rctrl_rshft_combo, OSM(MOD_LCTL | MOD_LSFT)),


    COMBO(osm_alt_combo, OSM(MOD_LALT)),
    COMBO(osm_alt1_combo, OSM(MOD_LALT)),

    COMBO(osm_gui_combo, OSM(MOD_LGUI)),
    COMBO(osm_gui1_combo, OSM(MOD_LGUI)),

    COMBO(osl_symbol_layer, OSL(1)),
    COMBO(osl_symbola_combo, OSL(1)),

    COMBO(osm_num_combo, OSL(2)),
    COMBO(osm_rnum_combo, OSL(2)),
    COMBO(symbol_on_osl_num_combo, OSL(2)),

    COMBO(symbol_on_combo, TO(1)),

    COMBO(num_on_combo, TO(2)),
    COMBO(num_on_1_combo, TO(2)),
    COMBO(num_on_osm_symbol_combo, OSL(1)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		    TO(0), TO(0), OSL(2), CW_TOGG, TO(2), KC_CAPS, 			 			TO(5), OSL(1), CW_TOGG, OSM(MOD_LSFT), TO(0), KC_BSPC,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, 							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS,

		    TO(0), KC_A, KC_R, KC_S, KC_T, KC_D,		 					KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT,

		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO,					KC_NO,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(6), KC_CAPS
		    ),

    [1] = LAYOUT(
		   TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,					 	KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 						KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_TILD,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT, 						KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_DQUO, 

		   KC_NO, KC_BSLS, KC_QUOT, KC_DQUO, KC_COLN, KC_PIPE, KC_NO, 				KC_NO, KC_QUES, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO, 

		   					KC_NO, KC_NO, TO(0), KC_SPC, 			KC_ENT, OSL(1), KC_NO, KC_NO
		   ),

    [2] = LAYOUT(
		   TO(0), KC_NO, OSL(2), TO(1), KC_TRNS, KC_NO, 						KC_TRNS, TO(2), TO(1), TO(2), KC_NO, KC_BSPC,

		   KC_NO, KC_ESC, KC_NO, KC_UP, KC_NO, KC_NO,						 	KC_NO, KC_7, KC_8, KC_9, KC_0, KC_NO, 

		   TO(0), KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						KC_TRNS, KC_4, KC_5, KC_6, KC_0,

		   KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_NO,			KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,

		   					KC_TRNS, KC_TRNS, TO(0), KC_SPC,		KC_ENT, OSL(1), KC_NO, KC_NO
		   ),

    [3] = LAYOUT(
		    TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,					 		TO(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		    					KC_TRNS, KC_TRNS, TO(0), KC_TRNS,	 KC_TRNS, OSL(1), NK_TOGG, QK_BOOT),

    [4] = LAYOUT(
		    TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,						 	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,

		    KC_NO, TO(1), TO(2), TO(3), TO(2), KC_CAPS,							KC_NO, TG(2), CW_TOGG, TO(2), TO(1), KC_NO,

		    TO(0), KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, KC_NO,						KC_NO, KC_DEL, KC_RALT, KC_RSFT, KC_RCTL, KC_NO,

		    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,					 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		    					KC_NO, KC_NO, TO(0), KC_SPC,		 KC_ENT, KC_NO, NK_TOGG, KC_NO
		    ),

    [5] = LAYOUT(KC_ESC, KC_LCTL, KC_9, KC_9, KC_LGUI, KC_NO, KC_TRNS, KC_RGUI, KC_0, KC_0, KC_RCTL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, TO(0), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_C, KC_V, KC_NO, KC_NO, KC_N, KC_M, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_PSCR, TO(3), TO(0), KC_SPC, KC_ENT, NK_ON, NK_TOGG, KC_NO),

    [6] = LAYOUT(QK_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS, KC_LSFT, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, KC_NO, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL, TO(0), KC_NO, KC_NO, KC_SPC, KC_ENT, KC_NO, KC_TRNS, TO(0)),

    [7] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

    [8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

