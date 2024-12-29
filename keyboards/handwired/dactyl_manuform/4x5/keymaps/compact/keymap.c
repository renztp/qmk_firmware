/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// #define _BASE 0
// #define _RAISE 1
// #define _LOWER 2

// #define SFT_ESC  SFT_T(KC_ESC)
// #define CTL_BSPC CTL_T(KC_BSPC)
// #define ALT_SPC  ALT_T(KC_SPC)
// #define SFT_ENT  SFT_T(KC_ENT)
//
// #define KC_ML KC_MS_LEFT
// #define KC_MR KC_MS_RIGHT
// #define KC_MU KC_MS_UP
// #define KC_MD KC_MS_DOWN
// #define KC_MB1 KC_MS_BTN1
// #define KC_MB2 KC_MS_BTN2

// #define RAISE MO(_RAISE)
// #define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0 (Base)
     * ,----------------------------------,                             ,----------------------------------,
     * |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   '  |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        |  [   |   ]  |                                                         |   -  |   =  |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      | ESC  |  BS  |                             | SPACE|ENTER |
     *                      |  +   |   +  |                             |  +   |  +   |
     *                      | SHIFT| CTRL |                             | ALT  |SHIFT |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    | TAB  | HOME | | END  | DEL  |
     *                                    '------+------' '------+------'
     *                                    | Raise|  ~   | | GUI  | Lower|
     *                                    '------+------' '------+------'
     */
    [0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    MT(MOD_LALT ,KC_C),    MT(MOD_LCTL, KC_V),    KC_B,             KC_N,    MT(MOD_LCTL, KC_M),    MT(MOD_LALT ,KC_COMM), KC_DOT,  KC_SLASH,
                          KC_LCTL, MO(4),                                                        KC_LEFT, KC_RIGHT,
                                    MO(1), KC_LSFT,                                     KC_SPC, MO(2),
                                                     KC_LGUI,  _______,  _______,  KC_LALT,
                                                     KC_LCTL,   KC_LALT,   KC_LALT, KC_LCTL
    ),

    /* Layer 1 (Commands)
     * ,----------------------------------,                             ,----------------------------------,
     * |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   '  |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        |  [   |   ]  |                                                         |   -  |   =  |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      | ESC  |  BS  |                             | SPACE|ENTER |
     *                      |  +   |   +  |                             |  +   |  +   |
     *                      | SHIFT| CTRL |                             | ALT  |SHIFT |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    | TAB  | HOME | | END  | DEL  |
     *                                    '------+------' '------+------'
     *                                    | Raise|  ~   | | GUI  | Lower|
     *                                    '------+------' '------+------'
     */
    [1] = LAYOUT(
        KC_ESC, LGUI(KC_1), LGUI(KC_2),   LGUI(KC_3), LGUI(KC_4),                         _______, KC_INS, KC_DEL,   _______, KC_BSPC,
        KC_TAB, LGUI(KC_7), LGUI(KC_8),   LGUI(KC_9), LGUI(KC_0),                         KC_LEFT ,KC_DOWN, KC_UP, KC_RIGHT, KC_ENT,
        MO(4), KC_LALT, KC_LALT, KC_LCTL, _______,                                      KC_HOME, KC_LCTL ,KC_LALT, KC_END, MO(4),
                 KC_LCTL, MO(4),                                                                          QK_BOOT,  QK_BOOT,
                                    MO(1), KC_LSFT,                                     KC_SPC, MO(3),
                                                     KC_LGUI,  _______,  _______,  KC_LALT,
                                                     KC_LCTL,   KC_LALT,   KC_LALT, KC_LCTL
    ),

    /* Lower
     * ,----------------------------------,                             ,----------------------------------,
     * | F1   | F2   | F3   | F4   | F5   |                             |  F6  | F7   |  F8  |  F9  |  F10 |
     * |------+------+------+------+------|                             |-------------+------+------+------|
     * |  1   |  2   |  3   |  4   |  5   |                             |  6   |  7   |  8   |  9   |  0   |
     * |------+------+------+------+------|                             |------|------+------+------+------|
     * |  !   |  @   |  #   |  $   |  %   |                             |  ^   |  &   |  *   |  (   |  )   |
     * |------+------+------+-------------,                             ,-------------+------+------+------,
     *        | F11  | F12  |                                                         |  -   |  =   |
     *        '------+------'-------------'                             '-------------'------+------'
     *                      |      |      |                             |      |      |
     *                      |      |      |                             |      |      |
     *                      |      |      |                             |      |      |
     *                      '------+------'                             '------+------'
     *                                    '------+------' '------+------'
     *                                    |      |      | |      |      |
     *                                    '------+------' '------+------'
     *                                    |      |      | |      |      |
     *                                    '------+------' '------+------'
     */
    [2] = LAYOUT(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                                        KC_6,   KC_7,   KC_8,   KC_9,   KC_0,
        KC_BSLS,    KC_GRV,    KC_LBRC,    KC_RBRC,    KC_MINS,                      KC_EQL,    KC_COMMA,    KC_DOT,    KC_SLASH,    KC_QUOT,
        _______, KC_LALT,   KC_LALT, KC_LCTL,  _______,                                      _______, KC_LCTL, KC_LALT, KC_LALT, _______,
                 KC_F11,  KC_F12,                                                                           KC_DOWN, KC_UP,
                                    MO(3), KC_LSFT,                                     KC_SPC, MO(2),
                                                     KC_LGUI,  _______,  _______,  KC_LALT,
                                                     KC_LCTL,   KC_LALT,   KC_LALT, KC_LCTL
    ),

    [3] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_F11,                                         KC_F12,    KC_7,    KC_8,    KC_9,    MO(4),
        QK_BOOT, KC_LALT,   KC_LALT, KC_LCTL,  QK_BOOT,                                      QK_BOOT, KC_LCTL, KC_LALT, KC_LALT, QK_BOOT,
                 KC_F11,  KC_F12,                                                                           _______, _______,
                                    MO(3), KC_LSFT,                                     KC_SPC, MO(2),
                                                     KC_LGUI,  _______,  _______,  KC_LALT,
                                                     KC_LCTL,   KC_LALT,   KC_LALT, KC_LCTL
    ),


    [4] = LAYOUT(
        _______, KC_7, KC_8,    KC_9,   _______,                   LGUI(KC_6), LGUI(KC_7),   LGUI(KC_8), LGUI(KC_9),   KC_PSCR,
        _______,    KC_4,    KC_5,    KC_6,    KC_5,                                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        _______, KC_1,   KC_2, KC_3,  _______,                                      QK_BOOT, QK_BOOT, QK_BOOT, QK_BOOT, QK_BOOT,
                 KC_F11,  KC_0,                                                                           _______, _______,
                                   _______, _______,                                      _______, _______,
                                                     _______, _______,  _______, _______,
                                                     _______, _______,  _______, _______
    ),
};
