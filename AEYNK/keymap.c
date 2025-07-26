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




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_CAPS,        ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT,                                 CW_TOGG,        LGUI(KC_Z),     LGUI(KC_Y),     LGUI(KC_S),     LGUI(LSFT(KC_4)),KC_MEDIA_PLAY_PAUSE,
    KC_TAB,         KC_Q,           ALL_T(KC_W),    KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           ALL_T(KC_O),    KC_P,           KC_SLASH,       
    KC_TRANSPARENT, MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_QUOTE),KC_MINUS,       
    KC_SPACE,       KC_Z,           MT(MOD_LGUI, KC_X),MT(MOD_LCTL, KC_C),KC_V,           KC_B,                                           KC_N,           KC_M,           MT(MOD_RCTL, KC_COMMA),MT(MOD_RGUI, KC_DOT),KC_QUES,        LGUI(KC_SPACE), 
                                                    KC_BSPC,        KC_ESCAPE,                                      KC_ENTER,       KC_SPACE
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
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -30;
        case MT(MOD_RSFT, KC_J):
            return TAPPING_TERM -30;
        default:
            return TAPPING_TERM;
    }
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


