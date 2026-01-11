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
};



#define DUAL_FUNC_0 LT(15, KC_F15)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       KC_CAPS,        OSL(2),         OSL(1),         KC_ESCAPE,      KC_NO,                                          CW_TOGG,        KC_NO,          KC_LEFT,        KC_RIGHT,       LGUI(LSFT(KC_4)),LGUI(KC_GRAVE), 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           ALL_T(KC_R),    KC_T,                                           KC_Y,           ALL_T(KC_U),    KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    OSL(4),         KC_A,           LT(2, KC_S),    LT(3, KC_D),    LT(5, KC_F),    KC_G,                                           KC_H,           LT(5, KC_J),    LT(3, KC_K),    LT(2, KC_L),    KC_QUOTE,       KC_MINUS,       
    LGUI(KC_SPACE), KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_QUES,        KC_ENTER,       
                                                    KC_BSPC,        OSM(MOD_LGUI),                                  OSM(MOD_LSFT),  KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F11,         KC_F10,         KC_F9,          KC_TRANSPARENT,                                 KC_COLN,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_SLASH,       
    KC_TRANSPARENT, KC_F4,          KC_F3,          LT(3, KC_F2),   LT(5, KC_F1),   KC_TRANSPARENT,                                 KC_DOT,         KC_1,           KC_2,           KC_3,           KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F8,          KC_F7,          KC_F6,          KC_F5,          KC_TRANSPARENT,                                 KC_0,           KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_UNDS,        KC_MINUS,       KC_LABK,        KC_RABK,        KC_GRAVE,                                       KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_DQUO,        KC_CIRC,        
    KC_TRANSPARENT, KC_PERC,        KC_PLUS,        KC_EXLM,        LT(5, KC_EQUAL),KC_COLN,                                        KC_AT,          DUAL_FUNC_0,    KC_RPRN,        KC_SCLN,        KC_QUOTE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_ASTR,        KC_LBRC,        KC_RBRC,        KC_AMPR,                                        KC_HASH,        KC_SLASH,       KC_COMMA,       KC_DOT,         KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     LALT(LCTL(KC_UP)),                                KC_PAGE_UP,     LALT(LGUI(KC_LEFT)),KC_UP,          LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  LALT(LCTL(KC_DOWN)),                                KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_V)),LALT(LCTL(KC_H)),LGUI(KC_SLASH), LGUI(KC_Z),                                     LALT(LCTL(KC_L)),LGUI(KC_D),     LGUI(KC_C),     LGUI(KC_P),     KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, LGUI(KC_KP_0),  RGB_MODE_FORWARD,RGB_TOG,        TOGGLE_LAYER_COLOR,LGUI(LCTL(KC_Q)),                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_T),     LGUI(KC_A),     LGUI(KC_C),     LGUI(KC_V),     LGUI(KC_R),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_LEFT),  LGUI(KC_KP_MINUS),KC_SPACE,       LGUI(KC_KP_PLUS),LGUI(KC_RIGHT),                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_HYPR),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_HYPR),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  OSM(MOD_LSFT),  KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_LSFT),  OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LCTL),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_MEH),   KC_TRANSPARENT,                                 KC_TRANSPARENT, OSM(MOD_MEH),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 QK_LLCK,        KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_EXLM, LT(5, KC_EQUAL), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo2[] = { OSM(MOD_LSFT), KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo3[] = { OSM(MOD_LSFT), KC_MINUS, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TT(3)),
    COMBO(combo1, KC_BSLS),
    COMBO(combo2, KC_DQUO),
    COMBO(combo3, KC_UNDS),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ALL_T(KC_R):
            return TAPPING_TERM -30;
        case LT(2, KC_S):
            return TAPPING_TERM -30;
        case LT(3, KC_D):
            return TAPPING_TERM -30;
        case LT(5, KC_F):
            return TAPPING_TERM -30;
        case KC_G:
            return TAPPING_TERM -30;
        case KC_V:
            return TAPPING_TERM -30;
        case ALL_T(KC_U):
            return TAPPING_TERM -30;
        case KC_H:
            return TAPPING_TERM -30;
        case LT(5, KC_J):
            return TAPPING_TERM -30;
        case LT(3, KC_K):
            return TAPPING_TERM -30;
        case LT(2, KC_L):
            return TAPPING_TERM -30;
        case KC_M:
            return TAPPING_TERM -30;
        case KC_F9:
            return TAPPING_TERM -30;
        case LT(3, KC_F2):
            return TAPPING_TERM -30;
        case LT(5, KC_F1):
            return TAPPING_TERM -30;
        case KC_4:
            return TAPPING_TERM -30;
        case LT(5, KC_EQUAL):
            return TAPPING_TERM -30;
        case DUAL_FUNC_0:
            return TAPPING_TERM -30;
        case KC_SLASH:
            return TAPPING_TERM -30;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,237,200}, {0,237,200}, {0,237,200}, {0,237,200}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {16,255,255}, {0,0,0}, {36,255,255}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {152,255,255}, {84,218,204}, {84,218,204}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {84,218,204}, {84,218,204}, {16,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {42,255,255}, {42,255,255}, {16,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,255,255}, {42,255,255}, {42,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {42,255,255}, {42,255,255}, {16,255,255}, {194,255,255}, {0,0,0}, {16,255,255}, {152,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {0,0,0}, {36,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {41,255,255}, {208,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {142,103,255}, {208,255,255}, {208,255,255}, {208,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {36,255,255}, {0,0,0} },

    [4] = { {0,0,0}, {21,255,255}, {233,64,244}, {233,64,244}, {233,64,244}, {0,255,255}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {21,255,255}, {21,255,255}, {142,103,255}, {21,255,255}, {21,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,103,255}, {142,103,255}, {142,103,255}, {142,103,255}, {0,0,0}, {0,0,0}, {142,103,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_E)))SS_DELAY(100)  SS_LALT(SS_LGUI(SS_LSFT(SS_TAP(X_C))))SS_DELAY(100)  SS_LGUI(SS_TAP(X_B)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_P))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_K))SS_DELAY(100)  SS_LGUI(SS_TAP(X_Q)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LPRN);
        } else {
          unregister_code16(KC_LPRN);
        }
      } else {
        if (record->event.pressed) {
          layer_on(5);
        } else {
          if (!is_layer_locked(5)) {
          layer_off(5);
          }
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
