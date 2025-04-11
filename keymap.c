#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _uy_combo[]      =  {KC_U,    KC_Y,     COMBO_END};
const  uint16_t  PROGMEM  _wf_combo[]      =  {KC_W,    KC_F,     COMBO_END};
const  uint16_t  PROGMEM  _wfuy_combo[]      =  {KC_W,    KC_F, KC_U,    KC_Y,     COMBO_END};

const  uint16_t  PROGMEM  _rsei_combo[]    =  {LSFT_T(KC_R), LSFT_T(KC_S),     LSFT_T(KC_E), LSFT_T(KC_I),        COMBO_END};
const  uint16_t  PROGMEM  _rs_combo[]      =  {KC_R,    KC_S,     COMBO_END};
const  uint16_t  PROGMEM  _ei_combo[]      =  {KC_E,    KC_I,     COMBO_END};
const  uint16_t  PROGMEM  _wfp_combo[]     =  {KC_W,    KC_F,     KC_P,        COMBO_END};

const  uint16_t  PROGMEM  _fplu_combo[]    =  {KC_F,    KC_P,     KC_L,        KC_U,        COMBO_END};
const  uint16_t  PROGMEM  _fp_combo[]      =  {KC_F,    KC_P,     COMBO_END};

const  uint16_t  PROGMEM  _lu_combo[]      =  {KC_L,    KC_U,     COMBO_END};
const  uint16_t  PROGMEM  _ne_combo[]      =  {KC_N,    KC_E,     COMBO_END};


const  uint16_t  PROGMEM  _amprAstr_combo[]      =  {KC_AMPR, KC_ASTR,     COMBO_END};
const  uint16_t  PROGMEM  _plusRbrc_combo[]      =  {KC_PLUS, KC_RBRC,     COMBO_END};
const  uint16_t  PROGMEM  _sevenEight_combo[]    =  {KC_7, KC_8,     COMBO_END};

const  uint16_t  PROGMEM  _lBrcEql_combo[]    =  {KC_LBRC, KC_EQL,     COMBO_END};
const  uint16_t  PROGMEM  _st_combo[]    =  {KC_S, KC_T,     COMBO_END};
const  uint16_t  PROGMEM  _threeFour_combo[]    =  {KC_3, KC_4,     COMBO_END};

const  uint16_t  PROGMEM  _lBrcLcbr_combo[]    =  {KC_LCBR, KC_LBRC,     COMBO_END};
const  uint16_t  PROGMEM  _rBrcRcbr_combo[]    =  {KC_RBRC, KC_RCBR,     COMBO_END};

const  uint16_t  PROGMEM  _twoThree_combo[]    =   {KC_2, KC_3,     COMBO_END};
const  uint16_t  PROGMEM  _eightNine_combo[]    =  {KC_8, KC_9,     COMBO_END};


combo_t key_combos[] = {

	/*COMBO(  _ne_combo,                 QK_LEAD       ),*/
	/*COMBO(  _plusRbrc_combo,           QK_LEAD       ),*/
	/*COMBO(  _threeFour_combo,          QK_LEAD       ),*/
	/**/
	/*COMBO(  _sevenEight_combo,         QK_LEAD       ),*/
	/*COMBO(  _st_combo,                 QK_LEAD       ),*/
	/*COMBO(  _lBrcEql_combo,            QK_LEAD       ),*/

	/*COMBO(  _lBrcLcbr_combo,           TO(0)         ),*/
	/*COMBO(  _rBrcRcbr_combo,           TO(0)         ),*/
	/*COMBO(  _twoThree_combo,           TO(0)         ),*/
	/*COMBO(  _eightNine_combo,          TO(0)         ),*/

	COMBO(  _uy_combo,                 OSM(MOD_LCTL) ),
	COMBO(  _wf_combo,                 OSM(MOD_LCTL) ),

	/*COMBO(  _rs_combo,                 OSM(MOD_LSFT) ),*/
	/*COMBO(  _ei_combo,                 OSM(MOD_LSFT) ),*/

	/*COMBO(  _fplu_combo,               TO(5)         ),*/
	/*COMBO(  _amprAstr_combo,           TO(5)         ),*/
	/*COMBO(  _fp_combo,                 OSL(5)        ),*/
	/*COMBO(  _lu_combo,                 OSL(5)        ),*/

	COMBO(  _rsei_combo,               CW_TOGG       ),
	COMBO(  _wfuy_combo,               KC_CAPS       ),

};

void leader_start_user(void) {
    // Do something when the leader key is pressed
}

void _turn_on_layer_zero(void) {
  layer_off(1);
  layer_off(2);
  layer_off(3);
  layer_off(5);
  layer_on(0);
  clear_mods();
  clear_oneshot_mods();
}

enum custom_keycodes {
  QMK_BASE_LAYER = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMK_BASE_LAYER:
      _turn_on_layer_zero();
      break;
  }
  return true;
};

void leader_end_user(void) {
  if (leader_sequence_one_key(KC_A)) {
    _turn_on_layer_zero();
  } else if (leader_sequence_one_key(KC_LPRN)) {
    _turn_on_layer_zero();
  } else if (leader_sequence_one_key(KC_1)) {
    _turn_on_layer_zero();
  } else if (leader_sequence_one_key(KC_T)) {
    layer_on(1);
  } else if (leader_sequence_one_key(KC_S)) {
    layer_on(5);
  }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(

		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, OSL(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,							              KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    KC_ESC, LT(1, KC_A), LSFT_T(KC_R), LSFT_T(KC_S), LT(5, KC_T), KC_D,	          KC_H, LT(5, KC_N), LSFT_T(KC_E), LSFT_T(KC_I), LT(1, KC_O), OSM(MOD_LSFT),

		    QMK_BASE_LAYER, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					        KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					TO(2), TO(3), OSL(1), KC_SPC,		            KC_ENT, OSL(1), TO(2), TO(3)
		    ),

    [1] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 					    KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TO(0), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT,						    KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, QMK_BASE_LAYER,

		   QMK_BASE_LAYER, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_KP_MINUS, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 KC_ENT, QK_LEAD, TO(2), TO(3)
		   ),

    [2] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		                 KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_NO, KC_Q, KC_NO, KC_UP, KC_NO, KC_NO,						 	           KC_NO, KC_7, KC_8, KC_9, KC_0, KC_DEL,

		   TO(0), KC_A, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						       KC_TRNS, LCTL_T(KC_4), LSFT_T(KC_5), LALT_T(KC_6), LGUI_T(KC_0), QMK_BASE_LAYER,

		   QMK_BASE_LAYER, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_LT,				 KC_GT, KC_NO, KC_1, KC_2, KC_3, KC_NO, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(0), KC_SPC,		 KC_ENT, QK_LEAD, TO(2), TO(3)
		   ),

    [3] = LAYOUT(
		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		        KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 KC_ENT, QK_LEAD, TO(2), QK_BOOT
		    ),

    [4] = LAYOUT(

		    TO(0),  KC_NO,   KC_NO,   STN_N1,    KC_NO,   KC_NO,    /*       *   *   */       TO(4),    KC_NO,  KC_NO,  STN_N1,  KC_NO,  TO(0),

		    KC_NO,  STN_S1,  STN_TL,  STN_PL,   STN_HL,  STN_ST1,  /*       *   *   */       STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

		    KC_NO,  STN_S2,  STN_KL,  STN_WL,  STN_RL,   STN_ST2,  /*       *   *   */       STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

		    KC_NO,  KC_NO,   KC_NO,   KC_NO,    STN_A,   STN_O,    KC_NO,   /*  */  KC_NO,   STN_E,    STN_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		    /*      *        *        */KC_NO,  TO(3),   STN_A,    STN_O,  /*  */  STN_E,  STN_U,    TO(0),  KC_NO
		),

    [5] = LAYOUT(

		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,							        KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    TO(0), KC_1, KC_2, KC_3, KC_4, KC_5, 							        KC_6, KC_7, KC_8, KC_9, KC_0, KC_KP_MINUS,

		    QMK_BASE_LAYER, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 KC_ENT, QK_LEAD, TO(2), TO(3)

		   ),
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
