#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _uy_combo[]    =  {KC_U,  KC_Y,  COMBO_END};         
const  uint16_t  PROGMEM  _wf_combo[]    =  {KC_W,  KC_F,  COMBO_END};         
const  uint16_t  PROGMEM  _rsei_combo[]  =  {KC_R,  KC_S,  KC_E,        KC_I,  COMBO_END};
const  uint16_t  PROGMEM  _wfuy_combo[]  =  {KC_W,  KC_F,  KC_U,        KC_Y,  COMBO_END};
const  uint16_t  PROGMEM  _ie_combo[]    =  {KC_I,  KC_E,  COMBO_END};         
const  uint16_t  PROGMEM  _rs_combo[]    =  {KC_R,  KC_S,  COMBO_END};         

combo_t key_combos[] = {

	COMBO(  _uy_combo,                 OSM(MOD_LCTL) ),
	COMBO(  _wf_combo,                 OSM(MOD_LCTL) ),

	COMBO(  _rsei_combo,               CW_TOGG       ),
	COMBO(  _wfuy_combo,               KC_CAPS       ),
	COMBO(  _ie_combo,                 KC_ESC       ),
	COMBO(  _rs_combo,                 KC_ESC       ),

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

enum {
  TD_BASE_ESC,
};

typedef struct {
    bool single_tap_executed;
} td_state_t;

td_state_t td_state = {
    .single_tap_executed = false,
};

void td_base_esc_each(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1 && !td_state.single_tap_executed) {
    _turn_on_layer_zero();
  } else if (state->count == 2) {
    tap_code(KC_ESC);
  }
}

void td_finished(tap_dance_state_t *state, void *user_data) {
    // Do nothing here — we've already handled it in on_each_tap
}

void td_reset(tap_dance_state_t *state, void *user_data) {
    td_state.single_tap_executed = false; // Reset for next time
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_BASE_ESC] = ACTION_TAP_DANCE_FN_ADVANCED(td_base_esc_each, td_finished, td_reset),
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

		    KC_GRV, KC_NO, KC_DQUO, RALT_T(KC_QUOT), TO(2), KC_NO,                KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), TO(4), QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,                                 KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    TD(TD_BASE_ESC), KC_A, KC_R, KC_S, KC_T, KC_D,	                      KC_H, KC_N, KC_E, KC_I, KC_O, KC_ENT,

		    KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					        KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,

		    					TO(5), TO(3), OSL(6), LT(5, KC_SPC),		            OSM(MOD_LSFT), OSL(6), TO(5), TO(3)
		    ),

    [1] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 					    KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TO(0), KC_LPRN, KC_LCBR, LT(5, KC_LBRC), KC_EQL, KC_LT,				KC_GT, KC_PLUS, LT(5, KC_RBRC), KC_RCBR, KC_RPRN, KC_ENT,

		   QMK_BASE_LAYER, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_KP_MINUS, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), LT(5, KC_SPC),		 KC_ENT, TO(1), TO(2), TO(3)
		   ),

    [2] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		                 KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_NO, KC_Q, KC_NO, KC_UP, KC_NO, KC_NO,						 	           KC_NO, KC_7, KC_8, KC_9, KC_0, KC_DEL,

		   TO(0), KC_A, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 						       KC_TRNS, LCTL_T(KC_4), LSFT_T(KC_5), LALT_T(KC_6), LGUI_T(KC_0), KC_ENT,

		   QMK_BASE_LAYER, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, KC_PSCR, KC_LT,				 KC_GT, KC_NO, KC_1, KC_2, KC_3, KC_NO, QMK_BASE_LAYER,

		    					LT(5,KC_PSCR), TO(3), TO(0), LT(5, KC_SPC),		 KC_ENT, TO(1), TO(2), TO(3)
		   ),

    [3] = LAYOUT(
		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		        KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TO(0), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 		KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		    					LT(5,KC_PSCR), TO(3), TO(1), KC_SPC,		 KC_ENT, TO(1), TO(2), QK_BOOT
		    ),

    [4] = LAYOUT(

		    TO(0),  KC_NO,   KC_NO,   STN_N1,    KC_NO,   KC_NO,    /*       *   *   */       TO(4),    KC_NO,  STN_N1,  KC_NO,  TO(0),  TO(0),

		    KC_NO,  STN_S1,  STN_TL,  STN_PL,   STN_HL,  STN_ST1,  /*       *   *   */       STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,

		    KC_NO,  STN_S2,  STN_KL,  STN_WL,  STN_RL,   STN_ST2,  /*       *   *   */       STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,

		    KC_NO,  KC_NO,   KC_NO,   KC_NO,    STN_A,   STN_O,    KC_NO,   /*  */  KC_NO,   STN_E,    STN_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,
		    /*      *        *        */KC_NO,  TO(3),   STN_A,    STN_O,  /*  */  STN_E,  STN_U,    KC_NO,  KC_NO
		),

    [5] = LAYOUT(

		    KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,							        KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC,

		    TO(0), KC_1, KC_2, KC_3, KC_4, KC_5, 							        KC_6, KC_7, KC_8, KC_9, KC_0, KC_ENT,

		    QMK_BASE_LAYER, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(5,KC_PSCR), TO(3), TO(1), LT(5, KC_SPC),		 KC_ENT, TO(1), TO(2), TO(3)

		   ),

    [6] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, 					    KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TO(0), KC_LPRN, KC_LCBR, LT(5, KC_LBRC), KC_EQL, KC_LT,				KC_GT, KC_PLUS, LT(5, KC_RBRC), KC_RCBR, KC_RPRN, KC_ENT,

		   KC_ESC, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_KP_MINUS, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), LT(5, KC_SPC),		 KC_ENT, TO(1), TO(2), TO(3)
		   ),

};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
