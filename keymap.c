#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _klu_combo[]              =  {KC_K,     KC_L, KC_U,    COMBO_END};               
const  uint16_t  PROGMEM  _bfp_combo[]              =  {KC_B, KC_F,     KC_P,     COMBO_END};               

const  uint16_t  PROGMEM  _rsei_caps_combo[]            =  {KC_R,     KC_S,     KC_E,        KC_I,        COMBO_END};

const  uint16_t  PROGMEM  _kei_osm_rshift_combo[]        =  {KC_K, KC_E,     KC_I,     COMBO_END};               
const  uint16_t  PROGMEM  _brs_osm_lsft_combo[]          =  {KC_B, KC_R,     KC_S,     COMBO_END};               

const  uint16_t  PROGMEM  _qw_esc_combo[]               =  {KC_Q,     KC_W,     COMBO_END};               

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

const  uint16_t  PROGMEM  _km_Dquo_combo[]              =  {KC_K,     KC_M,  COMBO_END};               
const  uint16_t  PROGMEM  _kComm_mins_combo[]           =  {KC_K,     KC_COMM,  COMBO_END};               
const  uint16_t  PROGMEM  _kDot_mins_combo[]            =  {KC_K,     KC_DOT,   COMBO_END};               
const  uint16_t  PROGMEM  _kSlsh_Ques_combo[]           =  {KC_K,     KC_SLSH,  COMBO_END};               

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

const  uint16_t  PROGMEM  _bz_combo[]                   =  {KC_B,     KC_Z,     COMBO_END};               
const  uint16_t  PROGMEM  _bx_combo[]                   =  {KC_B,     KC_X,     COMBO_END};               
const  uint16_t  PROGMEM  _bc_combo[]                   =  {KC_B,     KC_C,     COMBO_END};               
const  uint16_t  PROGMEM  _bv_combo[]                   =  {KC_B,     KC_V,     COMBO_END};               

const  uint16_t  PROGMEM  _kme_combo[]                  =  {KC_K, KC_M, KC_E, COMBO_END};
const  uint16_t  PROGMEM  _kmDot_combo[]                =  {KC_K, KC_M, KC_E, COMBO_END};

const  uint16_t  PROGMEM  _kni_combo[]                  =  {KC_K, KC_N, KC_I, COMBO_END};
const  uint16_t  PROGMEM  _kio_combo[]                  =  {KC_K, KC_I, KC_O, COMBO_END};
const  uint16_t  PROGMEM  _brt_combo[]                  =  {KC_B, KC_R, KC_T, COMBO_END};
const  uint16_t  PROGMEM  _bar_combo[]                  =  {KC_B, KC_A, KC_R, COMBO_END};

const  uint16_t  PROGMEM  _kne_combo[]                  =  {KC_K, KC_N, KC_E, COMBO_END};
const  uint16_t  PROGMEM  _bst_combo[]                  =  {KC_B, KC_S, KC_T, COMBO_END};

const  uint16_t  PROGMEM  _fpl_combo[]                  =  {KC_F, KC_P, KC_L, COMBO_END};
const  uint16_t  PROGMEM  _fpu_combo[]                  =  {KC_F, KC_P, KC_U, COMBO_END};
const  uint16_t  PROGMEM  _fpy_combo[]                  =  {KC_F, KC_P, KC_Y, COMBO_END};

const  uint16_t  PROGMEM  _fpn_combo[]                  =  {KC_F, KC_P, KC_N, COMBO_END};
const  uint16_t  PROGMEM  _fpe_combo[]                  =  {KC_F, KC_P, KC_E, COMBO_END};
const  uint16_t  PROGMEM  _fpi_combo[]                  =  {KC_F, KC_P, KC_I, COMBO_END};
const  uint16_t  PROGMEM  _fpm_combo[]                  =  {KC_F, KC_P, KC_M, COMBO_END};
const  uint16_t  PROGMEM  _fpo_combo[]                  =  {KC_F, KC_P, KC_O, COMBO_END};
const  uint16_t  PROGMEM  _fpComm_combo[]               =  {KC_F, KC_P, KC_COMM, COMBO_END};
const  uint16_t  PROGMEM  _fpDot_combo[]                =  {KC_F, KC_P, KC_DOT, COMBO_END};

const  uint16_t  PROGMEM  _lsft_a_combo[]                = { KC_R, KC_S, KC_A, COMBO_END };
const  uint16_t  PROGMEM  _rsft_a_combo[]                = { KC_E, KC_I, KC_A, COMBO_END };
const  uint16_t  PROGMEM  _lsft_b_combo[]                = { KC_R, KC_S, KC_B, COMBO_END };
const  uint16_t  PROGMEM  _rsft_b_combo[]                = { KC_E, KC_I, KC_B, COMBO_END };
const  uint16_t  PROGMEM  _lsft_c_combo[]                = { KC_R, KC_S, KC_C, COMBO_END };
const  uint16_t  PROGMEM  _rsft_c_combo[]                = { KC_E, KC_I, KC_C, COMBO_END };
const  uint16_t  PROGMEM  _lsft_d_combo[]                = { KC_R, KC_S, KC_D, COMBO_END };
const  uint16_t  PROGMEM  _rsft_d_combo[]                = { KC_E, KC_I, KC_D, COMBO_END };
const  uint16_t  PROGMEM  _lsft_e_combo[]                = { KC_R, KC_S, KC_E, COMBO_END };
const  uint16_t  PROGMEM  _rsft_e_combo[]                = { KC_E, KC_I, KC_E, COMBO_END };
const  uint16_t  PROGMEM  _lsft_f_combo[]                = { KC_R, KC_S, KC_F, COMBO_END };
const  uint16_t  PROGMEM  _rsft_f_combo[]                = { KC_E, KC_I, KC_F, COMBO_END };
const  uint16_t  PROGMEM  _lsft_g_combo[]                = { KC_R, KC_S, KC_G, COMBO_END };
const  uint16_t  PROGMEM  _rsft_g_combo[]                = { KC_E, KC_I, KC_G, COMBO_END };
const  uint16_t  PROGMEM  _lsft_h_combo[]                = { KC_R, KC_S, KC_H, COMBO_END };
const  uint16_t  PROGMEM  _rsft_h_combo[]                = { KC_E, KC_I, KC_H, COMBO_END };
const  uint16_t  PROGMEM  _lsft_i_combo[]                = { KC_R, KC_S, KC_I, COMBO_END };
const  uint16_t  PROGMEM  _rsft_i_combo[]                = { KC_E, KC_I, KC_I, COMBO_END };
const  uint16_t  PROGMEM  _lsft_j_combo[]                = { KC_R, KC_S, KC_J, COMBO_END };
const  uint16_t  PROGMEM  _rsft_j_combo[]                = { KC_E, KC_I, KC_J, COMBO_END };
const  uint16_t  PROGMEM  _lsft_k_combo[]                = { KC_R, KC_S, KC_K, COMBO_END };
const  uint16_t  PROGMEM  _rsft_k_combo[]                = { KC_E, KC_I, KC_K, COMBO_END };
const  uint16_t  PROGMEM  _lsft_l_combo[]                = { KC_R, KC_S, KC_L, COMBO_END };
const  uint16_t  PROGMEM  _rsft_l_combo[]                = { KC_E, KC_I, KC_L, COMBO_END };
const  uint16_t  PROGMEM  _lsft_m_combo[]                = { KC_R, KC_S, KC_M, COMBO_END };
const  uint16_t  PROGMEM  _rsft_m_combo[]                = { KC_E, KC_I, KC_M, COMBO_END };
const  uint16_t  PROGMEM  _lsft_n_combo[]                = { KC_R, KC_S, KC_N, COMBO_END };
const  uint16_t  PROGMEM  _rsft_n_combo[]                = { KC_E, KC_I, KC_N, COMBO_END };
const  uint16_t  PROGMEM  _lsft_o_combo[]                = { KC_R, KC_S, KC_O, COMBO_END };
const  uint16_t  PROGMEM  _rsft_o_combo[]                = { KC_E, KC_I, KC_O, COMBO_END };
const  uint16_t  PROGMEM  _lsft_p_combo[]                = { KC_R, KC_S, KC_P, COMBO_END };
const  uint16_t  PROGMEM  _rsft_p_combo[]                = { KC_E, KC_I, KC_P, COMBO_END };
const  uint16_t  PROGMEM  _lsft_q_combo[]                = { KC_R, KC_S, KC_Q, COMBO_END };
const  uint16_t  PROGMEM  _rsft_q_combo[]                = { KC_E, KC_I, KC_Q, COMBO_END };
const  uint16_t  PROGMEM  _lsft_r_combo[]                = { KC_R, KC_S, KC_R, COMBO_END };
const  uint16_t  PROGMEM  _rsft_r_combo[]                = { KC_E, KC_I, KC_R, COMBO_END };
const  uint16_t  PROGMEM  _lsft_s_combo[]                = { KC_R, KC_S, KC_S, COMBO_END };
const  uint16_t  PROGMEM  _rsft_s_combo[]                = { KC_E, KC_I, KC_S, COMBO_END };
const  uint16_t  PROGMEM  _lsft_t_combo[]                = { KC_R, KC_S, KC_T, COMBO_END };
const  uint16_t  PROGMEM  _rsft_t_combo[]                = { KC_E, KC_I, KC_T, COMBO_END };
const  uint16_t  PROGMEM  _lsft_u_combo[]                = { KC_R, KC_S, KC_U, COMBO_END };
const  uint16_t  PROGMEM  _rsft_u_combo[]                = { KC_E, KC_I, KC_U, COMBO_END };
const  uint16_t  PROGMEM  _lsft_v_combo[]                = { KC_R, KC_S, KC_V, COMBO_END };
const  uint16_t  PROGMEM  _rsft_v_combo[]                = { KC_E, KC_I, KC_V, COMBO_END };
const  uint16_t  PROGMEM  _lsft_w_combo[]                = { KC_R, KC_S, KC_W, COMBO_END };
const  uint16_t  PROGMEM  _rsft_w_combo[]                = { KC_E, KC_I, KC_W, COMBO_END };
const  uint16_t  PROGMEM  _lsft_x_combo[]                = { KC_R, KC_S, KC_X, COMBO_END };
const  uint16_t  PROGMEM  _rsft_x_combo[]                = { KC_E, KC_I, KC_X, COMBO_END };
const  uint16_t  PROGMEM  _lsft_y_combo[]                = { KC_R, KC_S, KC_Y, COMBO_END };
const  uint16_t  PROGMEM  _rsft_y_combo[]                = { KC_E, KC_I, KC_Y, COMBO_END };
const  uint16_t  PROGMEM  _lsft_z_combo[]                = { KC_R, KC_S, KC_Z, COMBO_END };
const  uint16_t  PROGMEM  _rsft_z_combo[]                = { KC_E, KC_I, KC_Z, COMBO_END };

combo_t key_combos[] = {
	COMBO( _lsft_a_combo     , LSFT(KC_A) ),
	COMBO( _rsft_a_combo     , LSFT(KC_A) ),
	COMBO( _lsft_b_combo     , LSFT(KC_B) ),
	COMBO( _rsft_b_combo     , LSFT(KC_B) ),
	COMBO( _lsft_c_combo     , LSFT(KC_C) ),
	COMBO( _rsft_c_combo     , LSFT(KC_C) ),
	COMBO( _lsft_d_combo     , LSFT(KC_D) ),
	COMBO( _rsft_d_combo     , LSFT(KC_D) ),
	COMBO( _lsft_e_combo     , LSFT(KC_E) ),
	COMBO( _rsft_e_combo     , LSFT(KC_E) ),
	COMBO( _lsft_f_combo     , LSFT(KC_F) ),
	COMBO( _rsft_f_combo     , LSFT(KC_F) ),
	COMBO( _lsft_g_combo     , LSFT(KC_G) ),
	COMBO( _rsft_g_combo     , LSFT(KC_G) ),
	COMBO( _lsft_h_combo     , LSFT(KC_H) ),
	COMBO( _rsft_h_combo     , LSFT(KC_H) ),
	COMBO( _lsft_i_combo     , LSFT(KC_I) ),
	COMBO( _rsft_i_combo     , LSFT(KC_I) ),
	COMBO( _lsft_j_combo     , LSFT(KC_J) ),
	COMBO( _rsft_j_combo     , LSFT(KC_J) ),
	COMBO( _lsft_k_combo     , LSFT(KC_K) ),
	COMBO( _rsft_k_combo     , LSFT(KC_K) ),
	COMBO( _lsft_l_combo     , LSFT(KC_L) ),
	COMBO( _rsft_l_combo     , LSFT(KC_L) ),
	COMBO( _lsft_m_combo     , LSFT(KC_M) ),
	COMBO( _rsft_m_combo     , LSFT(KC_M) ),
	COMBO( _lsft_n_combo     , LSFT(KC_N) ),
	COMBO( _rsft_n_combo     , LSFT(KC_N) ),
	COMBO( _lsft_o_combo     , LSFT(KC_O) ),
	COMBO( _rsft_o_combo     , LSFT(KC_O) ),
	COMBO( _lsft_p_combo     , LSFT(KC_P) ),
	COMBO( _rsft_p_combo     , LSFT(KC_P) ),
	COMBO( _lsft_q_combo     , LSFT(KC_Q) ),
	COMBO( _rsft_q_combo     , LSFT(KC_Q) ),
	COMBO( _lsft_r_combo     , LSFT(KC_R) ),
	COMBO( _rsft_r_combo     , LSFT(KC_R) ),
	COMBO( _lsft_s_combo     , LSFT(KC_S) ),
	COMBO( _rsft_s_combo     , LSFT(KC_S) ),
	COMBO( _lsft_t_combo     , LSFT(KC_T) ),
	COMBO( _rsft_t_combo     , LSFT(KC_T) ),
	COMBO( _lsft_u_combo     , LSFT(KC_U) ),
	COMBO( _rsft_u_combo     , LSFT(KC_U) ),
	COMBO( _lsft_v_combo     , LSFT(KC_V) ),
	COMBO( _rsft_v_combo     , LSFT(KC_V) ),
	COMBO( _lsft_w_combo     , LSFT(KC_W) ),
	COMBO( _rsft_w_combo     , LSFT(KC_W) ),
	COMBO( _lsft_x_combo     , LSFT(KC_X) ),
	COMBO( _rsft_x_combo     , LSFT(KC_X) ),
	COMBO( _lsft_y_combo     , LSFT(KC_Y) ),
	COMBO( _rsft_y_combo     , LSFT(KC_Y) ),
	COMBO( _lsft_z_combo     , LSFT(KC_Z) ),
	COMBO( _rsft_z_combo     , LSFT(KC_Z) ),

	COMBO(  _qw_esc_combo,           KC_ESC         ),

	COMBO( _fpl_combo     , KC_7 ),
	COMBO( _fpu_combo     , KC_8 ),
	COMBO( _fpy_combo     , KC_9 ),

	COMBO( _fpn_combo     , KC_4 ),
	COMBO( _fpe_combo     , KC_5 ),
	COMBO( _fpi_combo     , KC_6 ),

	COMBO( _fpo_combo     , KC_0 ),
	COMBO( _fpm_combo     , KC_1 ),
	COMBO( _fpComm_combo  , KC_2 ),
	COMBO( _fpDot_combo   , KC_3 ),

	COMBO(  _klu_combo,          	 OSL(2)         ),
	COMBO(  _bfp_combo,              OSL(2)         ),

	COMBO(  _kme_combo,         	 LCTL(KC_BSPC)  ),
	COMBO(  _kmDot_combo,         	 KC_BSPC  ),

	COMBO(  _brs_osm_lsft_combo,     OSM(MOD_LSFT)  ),
	COMBO(  _kei_osm_rshift_combo,   OSM(MOD_LSFT)  ),

	COMBO(  _kni_combo,     	 OSM(MOD_LCTL)  ),
	COMBO(  _kio_combo,     	 OSM(MOD_LCTL)  ),

	COMBO(  _kne_combo,     	 OSM(MOD_LCTL)  ),
	COMBO(  _bst_combo,     	 OSM(MOD_LCTL)  ),

	COMBO(  _brt_combo,     	 OSM(MOD_LCTL)  ),
	COMBO(  _bar_combo,     	 OSM(MOD_LCTL)  ),

	COMBO(  _rsei_caps_combo,       KC_CAPS        ),

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

	COMBO(  _km_Dquo_combo,         KC_MINS        ),
	COMBO(  _kComm_mins_combo,      KC_DQUO        ),
	COMBO(  _kSlsh_Ques_combo,      KC_QUES        ),
	COMBO(  _kDot_mins_combo,       KC_TILD        ),

	COMBO(  _bz_combo,              KC_BSLS        ),
	COMBO(  _bx_combo,              KC_PIPE        ),
	COMBO(  _bc_combo,              KC_QUOT        ),
	COMBO(  _bv_combo,              KC_COLN        ),

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
		    KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_RALT, KC_RGUI, KC_0, KC_NO,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, 							KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_GRV,

		    MO(1), KC_A, KC_R, KC_S, KC_T, KC_D,	 						KC_H, KC_N, KC_E, KC_I, KC_O, MO(1),
		    
		    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO,					KC_NO,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,

		    					LT(3,KC_PSCR), TO(3), KC_B, KC_SPC,		 KC_ENT, KC_K, TO(2), TO(3)
		    ),

    [1] = LAYOUT(
		   KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 						KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_COLN, KC_TILD,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT, 						KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_DQUO, 

		   KC_NO, KC_BSLS, KC_PIPE, KC_QUOT, KC_COLN, KC_QUOT, KC_NO, 				KC_NO, KC_DQUO, KC_MINS, KC_TILD, KC_GRV, KC_QUES, KC_NO, 

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, TO(0), TO(2), TO(3)
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

