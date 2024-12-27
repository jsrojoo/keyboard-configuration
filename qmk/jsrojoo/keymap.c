#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _456_to_0_rcombo[]            =  {KC_4,     KC_5,     KC_6,        COMBO_END};  
const  uint16_t  PROGMEM  _56_to_0_rcombo[]             =  {KC_5,     KC_6,     COMBO_END};               
const  uint16_t  PROGMEM  _ampAstrUnds_to_0_rcombo[]    =  {KC_AMPR,  KC_ASTR,  KC_UNDS,     COMBO_END};  
const  uint16_t  PROGMEM  _ampAstr_to_0_lcombo[]        =  {KC_AMPR,  KC_ASTR,  COMBO_END};               
const  uint16_t  PROGMEM  _atHashDlr_to_0_lcombo[]      =  {KC_AT,    KC_HASH,  KC_DLR,      COMBO_END};  
const  uint16_t  PROGMEM  _fp_to_2_combo[]              =  {KC_F,     KC_P,     COMBO_END};               
const  uint16_t  PROGMEM  _lu_to_2_combo[]              =  {KC_L,     KC_U,     COMBO_END};               
const  uint16_t  PROGMEM  _uy_to_1_combo[]              =  {KC_U,     KC_Y,     COMBO_END};               
const  uint16_t  PROGMEM  _wf_to_1_combo[]              =  {KC_W,     KC_F,     COMBO_END};               
const  uint16_t  PROGMEM  _se_cw_combo[]                =  {KC_S,     KC_E,     COMBO_END};               
const  uint16_t  PROGMEM  _rsei_caps_combo[]            =  {KC_R,     KC_S,     KC_E,        KC_I,        COMBO_END};
const  uint16_t  PROGMEM  _ei_osm_rshift_combo[]        =  {KC_E,     KC_I,     COMBO_END};               
const  uint16_t  PROGMEM  _rs_osm_lsft_combo[]          =  {KC_R,     KC_S,     COMBO_END};               
const  uint16_t  PROGMEM  _ni_osm_rctl_combo[]          =  {KC_N,     KC_I,     COMBO_END};               
const  uint16_t  PROGMEM  _rt_osm_rctl_combo[]          =  {KC_R,     KC_T,     COMBO_END};               
const  uint16_t  PROGMEM  _leftDownRight_to_0_lcombo[]  =  {KC_LEFT,  KC_DOWN,  KC_RGHT,     COMBO_END};  
const  uint16_t  PROGMEM  _leftDown_to_0_lcombo[]       =  {KC_LEFT,  KC_DOWN,  COMBO_END};               
const  uint16_t  PROGMEM  _ln_rgui_combo[]              =  {KC_L,     KC_N,     COMBO_END};               
const  uint16_t  PROGMEM  _qw_esc_combo[]               =  {KC_Q,     KC_W,     COMBO_END};               
const  uint16_t  PROGMEM  _rbcRcbr_to_0_combo[]         =  {KC_RBRC,  KC_RCBR,  COMBO_END};               
const  uint16_t  PROGMEM  _ue_ralt_combo[]              =  {KC_U,     KC_E,     COMBO_END};               


combo_t key_combos[] = {
	COMBO(  _qw_esc_combo,         KC_ESC         ),
	COMBO(  _ln_rgui_combo,        KC_RGUI        ),
	COMBO(  _ue_ralt_combo,        KC_RALT        ),
	COMBO(  _rs_osm_lsft_combo,    OSM(MOD_LSFT)  ),
	COMBO(  _ei_osm_rshift_combo,  OSM(MOD_LSFT)  ),
	COMBO(  _ni_osm_rctl_combo,    OSM(MOD_RCTL)  ),
	COMBO(  _rt_osm_rctl_combo,    OSM(MOD_RCTL)  ),
	COMBO(  _rsei_caps_combo,      KC_CAPS        ),
	COMBO(  _se_cw_combo,          CW_TOGG        ),
	COMBO(  _wf_to_1_combo,        OSL(1)         ),
	COMBO(  _uy_to_1_combo,        OSL(1)         ),
	COMBO(  _lu_to_2_combo,        OSL(2)         ),
	COMBO(  _fp_to_2_combo,        OSL(2)         ),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	 			 			TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, 							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_MINS,

		    KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D,	 						KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
		    
		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO,					KC_NO,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, TO(1), TO(2), TO(3)
		    ),

    [1] = LAYOUT(
		   TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,					 	TO(4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 						KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_TILD,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT, 						KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_DQUO, 

		   KC_NO, KC_BSLS, KC_QUOT, KC_DQUO, KC_COLN, KC_PIPE, KC_NO, 				KC_NO, KC_QUES, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO, 

		   					KC_NO, KC_NO, TO(0), KC_SPC, 			KC_ENT, TO(1), KC_NO, KC_NO
		   ),

    [2] = LAYOUT(
		   TO(0), KC_NO, OSL(2), TO(1), KC_TRNS, KC_NO, 						TO(4), TO(2), TO(1), TO(2), KC_NO, KC_BSPC,

		   KC_NO, KC_ESC, KC_NO, KC_UP, KC_NO, KC_NO,						 	KC_NO, KC_7, KC_8, KC_9, KC_0, KC_NO, 

		   TO(0), KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						KC_TRNS, KC_4, KC_5, KC_6, KC_0,

		   KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_NO,			KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,

		   					KC_TRNS, KC_TRNS, TO(0), KC_SPC,		KC_ENT, TO(1), KC_NO, KC_NO
		   ),

    [3] = LAYOUT(
		    TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,					 		TO(4), KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		    					KC_TRNS, KC_TRNS, TO(0), KC_SPC,	 KC_ENT, TO(1), KC_NO, QK_BOOT),

    [4] = LAYOUT(

		    TO(0),  KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    /*       *   *   */       TO(4),    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_BSPC,

		    KC_NO,  STN_S1,  STN_TL,  STN_PL,   STN_HL,  STN_ST1,  /*       *   *   */       STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

		    KC_NO,  STN_S2,  STN_KL,  STN_WL,  STN_RL,   STN_ST2,  /*       *   *   */       STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

		    KC_NO,  KC_NO,   KC_NO,   KC_NO,    STN_A,   STN_O,    KC_NO,   /*  */  KC_NO,   STN_E,    STN_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		    /*      *        *        */KC_NO,  KC_NO,   KC_NO,    KC_SPC,  /*  */  KC_ENT,  KC_NO,    KC_NO,  KC_NO                   
		),
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

