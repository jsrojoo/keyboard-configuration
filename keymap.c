#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _uy_combo[]      =  {KC_U,    KC_Y,     COMBO_END};
const  uint16_t  PROGMEM  _wf_combo[]      =  {KC_W,    KC_F,     COMBO_END};
const  uint16_t  PROGMEM  _rsei_combo[]    =  {KC_R,    KC_S,     KC_E,        KC_I,        COMBO_END};
const  uint16_t  PROGMEM  _rs_combo[]      =  {KC_R,    KC_S,     COMBO_END};
const  uint16_t  PROGMEM  _ei_combo[]      =  {KC_E,    KC_I,     COMBO_END};
const  uint16_t  PROGMEM  _wfp_combo[]     =  {KC_W,    KC_F,     KC_P,        COMBO_END};
const  uint16_t  PROGMEM  _luy_combo[]     =  {KC_L,    KC_U,     KC_Y,        COMBO_END};
const  uint16_t  PROGMEM  _wfuy_combo[]    =  {KC_W,    KC_F,     KC_U,        KC_Y,        COMBO_END};
const  uint16_t  PROGMEM  _yScoln_combo[]  =  {KC_Y,    KC_SCLN,  COMBO_END};
const  uint16_t  PROGMEM  _qw_combo[]      =  {KC_Q,    KC_W,     COMBO_END};
const  uint16_t  PROGMEM  _fplu_combo[]    =  {KC_F,    KC_P,     KC_L,        KC_U,        COMBO_END};

const  uint16_t  PROGMEM  _fp_combo[]      =  {KC_F,    KC_P,     COMBO_END};
const  uint16_t  PROGMEM  _lu_combo[]      =  {KC_L,    KC_U,     COMBO_END};

combo_t key_combos[] = {
	COMBO(  _uy_combo,      OSM(MOD_LCTL)  ),
	COMBO(  _wf_combo,      OSM(MOD_LCTL)  ),
	COMBO(  _rs_combo,      OSM(MOD_LSFT)  ),
	COMBO(  _ei_combo,      OSM(MOD_LSFT)  ),

	COMBO(  _wfp_combo,     OSL(1)         ),
	COMBO(  _luy_combo,     OSL(1)         ),

	COMBO(  _fp_combo,      OSL(5)         ),
	COMBO(  _lu_combo,      OSL(5)         ),

	COMBO(  _yScoln_combo,  OSL(2)         ),
	COMBO(  _qw_combo,      OSL(2)         ),

	COMBO(  _rsei_combo,    CW_TOGG        ),
	COMBO(  _wfuy_combo,    KC_CAPS        ),
	COMBO(  _fplu_combo,    TO(2)          ),

};

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void leader_end_user(void) {
    if (leader_sequence_one_key(KC_F)) {
        SEND_STRING("QMK is awesome.");
    } else if (leader_sequence_one_key(KC_Q)) {
        tap_code16(KC_ESC);
    } else if (leader_sequence_one_key(QK_LEAD)) {
        SEND_STRING("leader key pressed.");
    } else if (leader_sequence_two_keys(KC_F, KC_F)) {
        // Leader, f => Types the below string
        SEND_STRING("QMK is awesomeness.");
    } else if (leader_sequence_two_keys(KC_D, KC_D)) {
        // Leader, d, d => Ctrl+A, Ctrl+C
        SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
    } else if (leader_sequence_three_keys(KC_D, KC_D, KC_S)) {
        // Leader, d, d, s => Types the below string
        SEND_STRING("https://start.duckduckgo.com\n");
    } else if (leader_sequence_two_keys(KC_A, KC_S)) {
        // Leader, a, s => GUI+S
        tap_code16(LGUI(KC_S));
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(

		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D,	 						KC_H, KC_N, KC_E, KC_I, KC_O, KC_MINS,

		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					        KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LCTL,

		    					TO(2), TO(3), OSL(1), KC_SPC,		            KC_ENT, OSL(1), TO(2), TO(3)
		    ),

    [1] = LAYOUT(
		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		        KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 					    KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT,						    KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_DQUO,

		   KC_NO, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 KC_ENT, TO(5), TO(2), TO(3)
		   ),

    [2] = LAYOUT(
		   KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		   KC_NO, KC_ESC, KC_NO, KC_UP, KC_NO, KC_NO,						 	KC_NO, KC_7, KC_8, KC_9, KC_0, KC_BSPC,

		   TO(0), KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						KC_TRNS, LCTL_T(KC_4), LSFT_T(KC_5), LALT_T(KC_6), LGUI_T(KC_0), KC_NO,

		   KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_LT,				 KC_GT, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), TO(3)
		   ),

    [3] = LAYOUT(
		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		        KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), QK_BOOT
		    ),

    [4] = LAYOUT(

		    TO(0),  KC_NO,   KC_NO,   STN_N1,    KC_NO,   KC_NO,    /*       *   *   */       TO(4),    KC_NO,  KC_NO,  STN_N1,  KC_NO,  TO(0),

		    KC_NO,  STN_S1,  STN_TL,  STN_PL,   STN_HL,  STN_ST1,  /*       *   *   */       STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

		    KC_NO,  STN_S2,  STN_KL,  STN_WL,  STN_RL,   STN_ST2,  /*       *   *   */       STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

		    KC_NO,  KC_NO,   KC_NO,   KC_NO,    STN_A,   STN_O,    KC_NO,   /*  */  KC_NO,   STN_E,    STN_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		    /*      *        *        */KC_NO,  TO(3),   STN_A,    STN_O,  /*  */  STN_E,  STN_U,    TO(0),  KC_NO
		),

    [5] = LAYOUT(

		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		        KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    TO(0), KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,

		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LCTL,

		    					TO(2), TO(3), OSL(1), KC_SPC,		 KC_ENT, OSL(1), TO(2), TO(3)

		   ),
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
