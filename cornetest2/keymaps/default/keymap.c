#include QMK_KEYBOARD_H
#include "keymap_danish.h"

enum layers { BASE, NUM, SYM };

#define A_LT LGUI_T(DK_A)
#define S_LT LALT_T(DK_S)
#define D_LT LCTL_T(DK_D)
#define F_LT LSFT_T(DK_F)
#define J_LT LSFT_T(DK_J)
#define K_LT LCTL_T(DK_K)
#define L_LT LALT_T(DK_L)
#define HASH_LT LGUI_T(DK_HASH)

#define OS_GUI OSM(MOD_LGUI)
#define OS_ALT OSM(MOD_LALT)
#define OS_CTL OSM(MOD_LCTL)
#define OS_SFT OSM(MOD_LSFT)

#define INS_MODE LSA(KC_INS)
#define IJ_RUN C(S(KC_F11))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(SYM),  KC_SPC,     KC_ENT,   MO(NUM), KC_LALT
                                      //`--------------------------'  `--------------------------'

  ),

    [NUM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                      KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PRINT_SCREEN, KC_DELETE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_F6,    KC_F7,  KC_F8,     KC_F9, KC_F10,                      KC_F11, KC_F12, DK_ARNG, XXXXXXX, XXXXXXX, KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, XXXXXXX,  KC_SPC,     KC_ENT, _______, KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

    [SYM] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM, DK_DQUO, KC_HASH,  DK_DLR, KC_PERC,                   DK_AMPR, DK_SLSH, DK_LPRN, DK_RPRN, DK_ASTR, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                     ------+--------+--------+--------+--------+--------|
      KC_LSFT, DK_LABK, DK_RABK, DK_AT, DK_DIAE, DK_BSLS,                       DK_QUES,  DK_EQL, DK_LCBR, DK_RCBR, DK_QUOT,  DK_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_AUDIO_MUTE, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, XXXXXXX,
                                                                                DK_TILD, DK_PLUS, DK_LBRC, DK_RBRC, DK_PIPE, KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, XXXXXXX, KC_LALT
                                      //`--------------------------'  `--------------------------'
  )
};
