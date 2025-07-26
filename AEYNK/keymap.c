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
};



enum tap_dance_codes {
  DANCE_0,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_CAPS,        ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT,                                 CW_TOGG,        LGUI(KC_Z),     LGUI(KC_Y),     LGUI(KC_S),     LGUI(LSFT(KC_4)),KC_MEDIA_PLAY_PAUSE,
    KC_TAB,         KC_Q,           ALL_T(KC_W),    KC_E,           LT(2, KC_R),    KC_T,                                           KC_Y,           KC_U,           KC_I,           ALL_T(KC_O),    KC_P,           KC_SLASH,       
    OSL(3),         MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),LT(1, KC_G),                                    KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_QUOTE),KC_MINUS,       
    KC_SPACE,       KC_Z,           MT(MOD_LGUI, KC_X),MT(MOD_LCTL, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RCTL, KC_COMMA),MT(MOD_RGUI, KC_DOT),KC_QUES,        KC_ENTER,       
                                                    KC_BSPC,        KC_ESCAPE,                                      LGUI(KC_SPACE), KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F11,         KC_F10,         LT(2, KC_F9),   KC_TRANSPARENT,                                 KC_COLN,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LCTL, KC_F8),MT(MOD_LALT, KC_F7),MT(MOD_LGUI, KC_F6),MT(MOD_LSFT, KC_F5),KC_TRANSPARENT,                                 KC_DOT,         KC_1,           KC_2,           KC_3,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F4,          KC_F3,          KC_F2,          KC_F1,          KC_TRANSPARENT,                                 KC_SLASH,       KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,         KC_TRANSPARENT,                                 KC_PAGE_UP,     LGUI(LSFT(KC_V)),KC_UP,          LCTL(KC_SPACE), LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       LALT(LGUI(KC_LEFT)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_CTRL,   LGUI(LSFT(KC_E)),KC_TRANSPARENT,                                 LALT(LCTL(KC_L)),LGUI(KC_D),     LGUI(KC_C),     LGUI(KC_V),     TD(DANCE_0),    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_TOG,        LGUI(LCTL(KC_Q)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
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


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_R):
            return TAPPING_TERM -30;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -30;
        case LT(1, KC_G):
            return TAPPING_TERM -30;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -30;
        case LT(2, KC_F9):
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
    [0] = { {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161}, {188,194,161} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {36,255,255}, {152,255,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {41,255,255}, {208,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {142,103,255}, {208,255,255}, {208,255,255}, {208,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {36,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
