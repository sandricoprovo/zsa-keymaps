#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(13, KC_F2)
#define DUAL_FUNC_1 LT(13, KC_F17)
#define DUAL_FUNC_2 LT(11, KC_F20)
#define DUAL_FUNC_3 LT(14, KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_CAPS,        LGUI(KC_A),     LGUI(KC_V),     LGUI(KC_C),     KC_MS_BTN1,     KC_NO,                                          CW_TOGG,        LGUI(KC_Z),     LGUI(KC_Y),     LGUI(KC_S),     LGUI(KC_GRAVE), LGUI(LSFT(KC_4)),
    KC_TAB,         KC_Q,           ALL_T(KC_W),    KC_E,           LT(1, KC_R),    KC_T,                                           KC_Y,           LT(1, KC_U),    KC_I,           ALL_T(KC_O),    KC_P,           KC_SLASH,       
    OSL(4),         MT(MOD_LCTL, KC_A),LT(2, KC_S),    LT(3, KC_D),    MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),LT(3, KC_K),    LT(2, KC_L),    MT(MOD_RCTL, KC_QUOTE),KC_MINUS,       
    KC_SPACE,       KC_Z,           MT(MOD_LALT, KC_X),MT(MOD_LGUI, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RGUI, KC_COMMA),MT(MOD_RALT, KC_DOT),KC_QUES,        KC_ENTER,       
                                                    KC_BSPC,        KC_ESCAPE,                                      LGUI(KC_SPACE), KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F11,         KC_F10,         KC_F9,          KC_TRANSPARENT,                                 KC_COLN,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LCTL, KC_F8),KC_F7,          LT(3, KC_F6),   MT(MOD_LSFT, KC_F5),KC_TRANSPARENT,                                 KC_DOT,         KC_1,           KC_2,           KC_3,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F4,          MT(MOD_LALT, KC_F3),MT(MOD_LGUI, KC_F2),KC_F1,          KC_TRANSPARENT,                                 KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_LABK,        KC_RABK,        KC_MINUS,       KC_UNDS,                                        KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_DQUO,        KC_BSLS,        
    KC_TRANSPARENT, KC_COLN,        KC_PLUS,        KC_EXLM,        KC_EQUAL,       KC_AMPR,                                        KC_AT,          KC_LPRN,        KC_RPRN,        KC_SCLN,        KC_QUOTE,       KC_CIRC,        
    KC_TRANSPARENT, KC_TILD,        KC_ASTR,        KC_LBRC,        KC_RBRC,        KC_PERC,                                        KC_HASH,        KC_SLASH,       KC_COMMA,       KC_DOT,         KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT,                                 KC_PAGE_UP,     LALT(LGUI(KC_LEFT)),KC_UP,          LALT(LGUI(KC_RIGHT)),KC_HOME,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    LGUI(LSFT(KC_E)),                                KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_MINUS), DUAL_FUNC_3,    LGUI(LSFT(KC_L)),KC_TRANSPARENT,                                 TD(DANCE_0),    LALT(LCTL(KC_L)),LGUI(KC_SLASH), LGUI(LSFT(KC_V)),LCTL(KC_SPACE), KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_TOG,        TOGGLE_LAYER_COLOR,LGUI(LCTL(KC_Q)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_EXLM, KC_EQUAL, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_SLASH, KC_COMMA, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TT(3)),
    COMBO(combo1, ST_MACRO_4),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_R):
            return TAPPING_TERM -30;
        case LT(2, KC_S):
            return TAPPING_TERM -30;
        case LT(3, KC_D):
            return TAPPING_TERM -30;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -30;
        case KC_G:
            return TAPPING_TERM -30;
        case KC_V:
            return TAPPING_TERM -30;
        case LT(1, KC_U):
            return TAPPING_TERM -30;
        case KC_H:
            return TAPPING_TERM -30;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -30;
        case LT(3, KC_K):
            return TAPPING_TERM -30;
        case LT(2, KC_L):
            return TAPPING_TERM -30;
        case KC_M:
            return TAPPING_TERM -30;
        case KC_F9:
            return TAPPING_TERM -30;
        case LT(3, KC_F6):
            return TAPPING_TERM -30;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {36,255,255}, {152,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {84,218,204}, {84,218,204}, {152,255,255}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {84,218,204}, {84,218,204}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {129,255,255}, {129,255,255}, {16,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {129,255,255}, {129,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {129,255,255}, {129,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {152,255,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {36,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {41,255,255}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {41,255,255}, {208,255,255}, {41,255,255}, {142,103,255}, {0,0,0}, {142,103,255}, {208,255,255}, {208,255,255}, {208,255,255}, {142,103,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {36,255,255}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {233,64,244}, {233,64,244}, {233,64,244}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_P))SS_DELAY(100)  SS_LSFT(SS_TAP(X_3)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_P))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_E)))SS_DELAY(100)  SS_LALT(SS_LGUI(SS_LSFT(SS_TAP(X_C))))SS_DELAY(100)  SS_LGUI(SS_TAP(X_B)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_K))SS_DELAY(100)  SS_LGUI(SS_TAP(X_Q)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_9))SS_DELAY(50)  SS_LSFT(SS_TAP(X_0))SS_DELAY(50)  SS_TAP(X_EQUAL)SS_DELAY(50)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(50)  SS_LSFT(SS_TAP(X_LBRC))SS_DELAY(50)  SS_LSFT(SS_TAP(X_RBRC))SS_DELAY(50)  SS_TAP(X_SCLN));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_D));
        } else {
          unregister_code16(LGUI(KC_D));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_C));
        } else {
          unregister_code16(LGUI(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_V));
        } else {
          unregister_code16(LGUI(KC_V));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_MINUS)));
        } else {
          unregister_code16(LCTL(LSFT(KC_MINUS)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT)))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT)))));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT))))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_LEFT))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT)))));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT))))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_LEFT))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_RIGHT))))); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
