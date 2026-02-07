#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const  uint16_t  PROGMEM  _uy_combo[]    =  {LT(1, KC_U),  KC_Y,  COMBO_END};         
const  uint16_t  PROGMEM  _wf_combo[]    =  {KC_W,  KC_F,  COMBO_END};         
const  uint16_t  PROGMEM  _rsei_combo[]  =  {KC_R,  KC_S,  LT(2, KC_E),        KC_I,  COMBO_END};
const  uint16_t  PROGMEM  _wfuy_combo[]  =  {KC_W,  KC_F,  LT(1, KC_U),        KC_Y,  COMBO_END};
const  uint16_t  PROGMEM  _ie_combo[]    =  {KC_I,  LT(2, KC_E),  COMBO_END};         
const  uint16_t  PROGMEM  _rs_combo[]    =  {KC_R,  KC_S,  COMBO_END};         

const  uint16_t  PROGMEM  lbrc_lcbr[]    =  {KC_LBRC, KC_LCBR,  COMBO_END};         
const  uint16_t  PROGMEM  rbrc_rcbr[]    =  {KC_RBRC, KC_RCBR,  COMBO_END};         

const  uint16_t  PROGMEM  two_three[]   =  {KC_2, KC_3,  COMBO_END};         
const  uint16_t  PROGMEM  eight_nine[]    =  {KC_8, KC_9,  COMBO_END};         

combo_t key_combos[] = {
  COMBO(  _uy_combo,    OSM(MOD_LCTL)  ),
  COMBO(  _wf_combo,    OSM(MOD_LCTL)  ),
  COMBO(  _rsei_combo,  CW_TOGG        ),
  COMBO(  _wfuy_combo,  KC_CAPS        ),

  /*COMBO(  _rs_combo,    KC_ESC         ),*/
  /*COMBO(  _ie_combo,    KC_ESC         ),*/

  COMBO(  lbrc_lcbr,    TO(0)          ),
  COMBO(  rbrc_rcbr,    TO(0)          ),
  COMBO(  two_three,    TO(0)          ),
  COMBO(  eight_nine,   TO(0)          ),
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

enum {
  TD_CAPS_RECENT_TIMEOUT_MS = 30,
};

typedef struct {
    bool single_tap_executed;
} td_state_t;

td_state_t td_state = {
    .single_tap_executed = false,
};

static bool caps_word_recently_disabled = false;
static uint16_t caps_word_recently_disabled_timer = 0;

void td_base_esc_each(tap_dance_state_t *state, void *user_data) {
  const bool caps_word_active = is_caps_word_on();
  const bool caps_word_recent =
      caps_word_recently_disabled &&
      timer_elapsed(caps_word_recently_disabled_timer) <=
          TD_CAPS_RECENT_TIMEOUT_MS;
  const bool caps_word_effective_active = caps_word_active || caps_word_recent;
  const bool caps_lock_active = host_keyboard_led_state().caps_lock;
  const uint8_t mods_active = get_mods();
  const uint8_t oneshot_active = get_oneshot_mods();
  const bool base_layer_active = get_highest_layer(layer_state) == 0;
  const bool should_send_escape = base_layer_active &&
                                  !(mods_active | oneshot_active |
                                    (caps_word_effective_active ? 1 : 0) |
                                    (caps_lock_active ? 1 : 0));

  if (state->count == 1 && !td_state.single_tap_executed) {
    if (!base_layer_active) {
      _turn_on_layer_zero();
      td_state.single_tap_executed = true;
      return;
    }

    if (caps_word_effective_active) {
      caps_word_off();
      caps_word_recently_disabled = false;
    }

    if (caps_lock_active) {
      tap_code(KC_CAPS);
    }

    if (mods_active & MOD_MASK_SHIFT) {
      del_mods(MOD_MASK_SHIFT);
    }

    if (oneshot_active) {
      clear_oneshot_mods();
    }

    if (should_send_escape) {
      tap_code(KC_ESC);
      td_state.single_tap_executed = true;
    }

  } else if (state->count == 2) {
    if (is_caps_word_on()) {
      caps_word_off();
    }

    if (host_keyboard_led_state().caps_lock) {
      tap_code(KC_CAPS);
    }

    _turn_on_layer_zero();
    tap_code(KC_ESC);
  }
}

void caps_word_set_user(bool active) {
  if (active) {
    caps_word_recently_disabled = false;
    return;
  }

  caps_word_recently_disabled = true;
  caps_word_recently_disabled_timer = timer_read();
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

		    KC_GRV, KC_1, RGUI_T(KC_2), RALT_T(KC_3), KC_4, KC_5,                KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV,

		    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,                                KC_J, KC_L, LT(1, KC_U), KC_Y, KC_SCLN, KC_BSPC,

		    TD(TD_BASE_ESC), KC_A, KC_R, KC_S, KC_T, KC_D,	                     KC_H, KC_N, LT(2, KC_E), KC_I, KC_O, KC_ENT,

		    KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					             KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,

		    					TO(5), TO(3), OSL(1), KC_SPC,		            OSM(MOD_LSFT), OSL(1), OSM(MOD_LGUI), OSM(MOD_LALT)
		    ),

    [1] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			       KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT, KC_HASH,  KC_DLR, KC_PERC, 					         KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TD(TD_BASE_ESC), KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT,		     KC_GT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_ENT,

		   QMK_BASE_LAYER, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_KP_MINUS, KC_DQUO, KC_PIPE, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 OSM(MOD_LSFT), TO(1), OSM(MOD_LGUI), OSM(MOD_LALT)
		   ),

    [2] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, KC_NO, KC_NO,		                     KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_NO, KC_ESC, KC_ESC, KC_UP, KC_SPC, KC_NO,						 	             KC_1, KC_3, KC_5, KC_7, KC_9, KC_BSPC, 

		   TD(TD_BASE_ESC), KC_ENT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, 				KC_2, KC_4, KC_6, KC_8, KC_0, KC_ENT,

		   QMK_BASE_LAYER, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_LT,				 KC_GT, KC_NO, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO,

		    					LT(5,KC_PSCR), TO(3), TO(0), KC_SPC,		 OSM(MOD_LSFT), OSL(1), OSM(MOD_LGUI), OSM(MOD_LALT)
		   ),

    [3] = LAYOUT(
		    KC_GRV, KC_VOLD, KC_VOLU, KC_BRID, KC_BRIU, QK_BOOT,		            KC_NO, KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		    KC_NO, KC_BTN1, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO,				 		        KC_NO, KC_BTN1, KC_WH_U, KC_BTN2, KC_BTN1, KC_NO,

		    TD(TD_BASE_ESC), KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,				 KC_NO, KC_WH_L, KC_WH_D, KC_WH_R, KC_NO, KC_NO,

		    KC_NO, DT_UP, DT_DOWN, DT_PRNT, KC_NO, KC_PSCR, KC_NO,		 		 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

		    					LT(5,KC_PSCR), TO(3), TO(1), KC_SPC,		 OSM(MOD_LSFT), OSL(1), OSM(MOD_LGUI), OSM(MOD_LALT)
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

		    TD(TD_BASE_ESC), KC_1, KC_2, KC_3, KC_4, KC_5, 							        KC_6, KC_7, KC_8, KC_9, KC_0, KC_ENT,

		    QMK_BASE_LAYER, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LT,					KC_GT,	KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(5,KC_PSCR), TO(3), TO(1), KC_SPC,		 OSM(MOD_LSFT), OSL(1), OSM(MOD_LGUI), OSM(MOD_LALT)

		   ),

    [6] = LAYOUT(
		   KC_GRV, KC_NO, KC_DQUO, KC_QUOT, TO(2), KC_NO,		        			KC_NO, TO(5), OSM(MOD_LALT), OSM(MOD_LGUI), KC_NO, QK_LEAD,

		   KC_GRV, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC, 					  KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_SCLN, KC_BSPC,

		   TD(TD_BASE_ESC),  KC_LPRN, KC_LCBR, KC_LBRC, KC_EQL, KC_LT,				      KC_GT,   KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_ENT,

		   KC_ESC, KC_BSLS, KC_TILD, KC_QUOT, KC_COLN, KC_PIPE, KC_PIPE,			KC_QUES, KC_QUES, KC_KP_MINUS, KC_COMM, KC_DOT, KC_SLSH, QMK_BASE_LAYER,

		    					LT(3,KC_PSCR), TO(3), TO(1), KC_SPC,		 OSM(MOD_LSFT), OSL(1), OSM(MOD_LGUI), OSM(MOD_LALT)
		   ),

};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C
