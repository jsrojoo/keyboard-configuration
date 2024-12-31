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
const  uint16_t  PROGMEM  _wfuy_to_1_combo[]            =  {KC_W,     KC_F,     KC_U,        KC_Y,        COMBO_END};
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
const  uint16_t  PROGMEM  _pt_tab_combo[]               =  {KC_P,     KC_T,     COMBO_END};               
const  uint16_t  PROGMEM  _ne_bspc_combo[]              =  {KC_N,     KC_E,     COMBO_END};               
const  uint16_t  PROGMEM  _plusRbrc_bspc_combo[]        =  {KC_PLUS,  KC_RBRC,  COMBO_END};               
const  uint16_t  PROGMEM  _kj_circ_combo[]              =  {KC_K,     KC_J,     COMBO_END};               
const  uint16_t  PROGMEM  _kl_ampr_combo[]              =  {KC_K,     KC_L,     COMBO_END};               
const  uint16_t  PROGMEM  _ku_astr_combo[]              =  {KC_K,     KC_U,     COMBO_END};               
const  uint16_t  PROGMEM  _ky_unds_combo[]              =  {KC_K,     KC_Y,     COMBO_END};               
const  uint16_t  PROGMEM  _kScln_coln_combo[]           =  {KC_K,     KC_SCLN,  COMBO_END};               
const  uint16_t  PROGMEM  _kGrv_tild_combo[]            =  {KC_K,     KC_GRV,   COMBO_END};               
const  uint16_t  PROGMEM  _kh_Gt_combo[]                =  {KC_K,     KC_H,     COMBO_END};               
const  uint16_t  PROGMEM  _kn_Plus_combo[]              =  {KC_K,     KC_N,     COMBO_END};               
const  uint16_t  PROGMEM  _ke_Rbrc_combo[]              =  {KC_K,     KC_E,     COMBO_END};               
const  uint16_t  PROGMEM  _ki_Rcbr_combo[]              =  {KC_K,     KC_I,     COMBO_END};               
const  uint16_t  PROGMEM  _ko_Rprn_combo[]              =  {KC_K,     KC_O,     COMBO_END};               
const  uint16_t  PROGMEM  _kQuot_Dquo_combo[]           =  {KC_K,     KC_QUOT,  COMBO_END};               
const  uint16_t  PROGMEM  _dotSlsh_Ques_combo[]         =  {KC_DOT,   KC_SLSH,  COMBO_END};               
const  uint16_t  PROGMEM  _mComm_Pipe_combo[]           =  {KC_M,     KC_COMM,  COMBO_END};               
const  uint16_t  PROGMEM  _commDot_mins_combo[]         =  {KC_COMM,  KC_DOT,   COMBO_END};               
const  uint16_t  PROGMEM  _bTab_grv_combo[]             =  {KC_B,     KC_TAB,   COMBO_END};               
const  uint16_t  PROGMEM  _bq_exlm_combo[]              =  {KC_B,     KC_Q,     COMBO_END};               
const  uint16_t  PROGMEM  _bw_at_combo[]                =  {KC_B,     KC_W,     COMBO_END};               
const  uint16_t  PROGMEM  _bf_hash_combo[]              =  {KC_B,     KC_F,     COMBO_END};               
const  uint16_t  PROGMEM  _bp_dlr_combo[]               =  {KC_B,     KC_P,     COMBO_END};               
const  uint16_t  PROGMEM  _bg_perc_combo[]              =  {KC_B,     KC_G,     COMBO_END};               
const  uint16_t  PROGMEM  _ba_lprn_combo[]              =  {KC_B,     KC_A,     COMBO_END};               
const  uint16_t  PROGMEM  _br_lcbr_combo[]              =  {KC_B,     KC_R,     COMBO_END};               
const  uint16_t  PROGMEM  _bs_lbrc_combo[]              =  {KC_B,     KC_S,     COMBO_END};               
const  uint16_t  PROGMEM  _bt_eql_combo[]               =  {KC_B,     KC_T,     COMBO_END};               
const  uint16_t  PROGMEM  _bd_lt_combo[]                =  {KC_B,     KC_D,     COMBO_END};               
const  uint16_t  PROGMEM  _zx_combo[]                   =  {KC_Z,     KC_X,     COMBO_END};               
const  uint16_t  PROGMEM  _xc_combo[]                   =  {KC_X,     KC_C,     COMBO_END};               
const  uint16_t  PROGMEM  _cv_combo[]                   =  {KC_C,     KC_V,     COMBO_END};               
const  uint16_t  PROGMEM  _xcv_combo[]                  =  {KC_X,     KC_C,     KC_V,        COMBO_END};  

combo_t key_combos[] = {

	COMBO(  _qw_esc_combo,          KC_ESC         ),
	COMBO(  _ln_rgui_combo,         KC_RGUI        ),
	COMBO(  _ue_ralt_combo,         KC_RALT        ),
	COMBO(  _pt_tab_combo,          KC_TAB         ),
	COMBO(  _rs_osm_lsft_combo,     OSM(MOD_LSFT)  ),
	COMBO(  _ei_osm_rshift_combo,   OSM(MOD_LSFT)  ),
	COMBO(  _ni_osm_rctl_combo,     OSM(MOD_RCTL)  ),
	COMBO(  _rt_osm_rctl_combo,     OSM(MOD_RCTL)  ),
	COMBO(  _rsei_caps_combo,       KC_CAPS        ),
	COMBO(  _wf_to_1_combo,         OSL(1)         ),
	COMBO(  _uy_to_1_combo,         OSL(1)         ),
	COMBO(  _wfuy_to_1_combo,       TO(1)          ),
	COMBO(  _lu_to_2_combo,         OSL(2)         ),
	COMBO(  _fp_to_2_combo,         OSL(2)         ),

	COMBO(  _ne_bspc_combo,         KC_BSPC        ),
	COMBO(  _plusRbrc_bspc_combo,   KC_BSPC        ),

	COMBO(  _kj_circ_combo,         KC_CIRC        ),
	COMBO(  _kl_ampr_combo,         KC_AMPR        ),
	COMBO(  _ku_astr_combo,         KC_ASTR        ),
	COMBO(  _ky_unds_combo,         KC_UNDS        ),
	COMBO(  _kScln_coln_combo,      KC_COLN        ),
	COMBO(  _kGrv_tild_combo,       KC_TILD        ),

	COMBO(  _kh_Gt_combo,           KC_GT          ),
	COMBO(  _kn_Plus_combo,         KC_PLUS        ),
	COMBO(  _ke_Rbrc_combo,         KC_RBRC        ),
	COMBO(  _ki_Rcbr_combo,         KC_RCBR        ),
	COMBO(  _ko_Rprn_combo,         KC_RPRN        ),
	COMBO(  _kQuot_Dquo_combo,      KC_DQUO        ),

	COMBO(  _dotSlsh_Ques_combo,    KC_QUES        ),
	COMBO(  _mComm_Pipe_combo,      KC_MINS        ),
	COMBO(  _commDot_mins_combo,    KC_BSLS        ),
	COMBO(  _zx_combo,              KC_BSLS        ),
	COMBO(  _xc_combo,              KC_PIPE        ),
	COMBO(  _cv_combo,              KC_QUOT        ),
	COMBO(  _xcv_combo,             KC_DQUO        ),

	COMBO(  _bTab_grv_combo,        KC_GRV         ),             
	COMBO(  _bq_exlm_combo,         KC_EXLM        ),
	COMBO(  _bw_at_combo,           KC_AT          ),
	COMBO(  _bf_hash_combo,         KC_HASH        ),
	COMBO(  _bp_dlr_combo,          KC_DLR         ),
	COMBO(  _bg_perc_combo,         KC_PERC        ),
	COMBO(  _ba_lprn_combo,         KC_LPRN        ),
	COMBO(  _br_lcbr_combo,         KC_LCBR        ),
	COMBO(  _bs_lbrc_combo,         KC_LBRC        ),
	COMBO(  _bt_eql_combo,          KC_EQL         ),
	COMBO(  _bd_lt_combo,           KC_LT          ),

};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
		    KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, 							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_GRV,

		    KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_D,	 						KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT,
		    
		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO,					KC_NO,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), TO(3)
		    ),

    [1] = LAYOUT(
		   KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 						KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_TILD,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT, 						KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_DQUO, 

		   KC_NO, KC_BSLS, KC_QUOT, KC_DQUO, KC_COLN, KC_PIPE, KC_NO, 				KC_NO, KC_QUES, KC_MINS, KC_COMM, KC_DOT, KC_SLSH, KC_NO, 

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), TO(3)
		   ),

    [2] = LAYOUT(
		   KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		   KC_NO, KC_ESC, KC_NO, KC_UP, KC_NO, KC_NO,						 	KC_NO, KC_7, KC_8, KC_9, KC_0, KC_NO, 

		   TO(0), KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						KC_TRNS, KC_4, KC_5, KC_6, KC_0,

		   KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_NO,			KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), TO(3)
		   ),

    [3] = LAYOUT(
		    KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, OSL(1), TO(2), QK_BOOT
		    ),

    [4] = LAYOUT(

		    TO(0),  KC_NO,   KC_NO,   STN_N1,    KC_NO,   KC_NO,    /*       *   *   */       TO(4),    KC_NO,  KC_NO,  STN_N1,  KC_NO,  KC_BSPC,

		    KC_NO,  STN_S1,  STN_TL,  STN_PL,   STN_HL,  STN_ST1,  /*       *   *   */       STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

		    KC_NO,  STN_S2,  STN_KL,  STN_WL,  STN_RL,   STN_ST2,  /*       *   *   */       STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

		    KC_NO,  KC_NO,   KC_NO,   KC_NO,    STN_A,   STN_O,    KC_NO,   /*  */  KC_NO,   STN_E,    STN_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		    /*      *        *        */KC_NO,  TO(3),   STN_A,    STN_O,  /*  */  STN_E,  STN_U,    KC_NO,  KC_NO                   
		),
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

