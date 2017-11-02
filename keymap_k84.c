#include "keymap_common.h"
// K84 key map
//https://github.com/kekstee/tmk_keyboard/tree/master/keyboard/nerd
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Psc|Pus|Del|
     * |---------------------------------------------------------------|
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |Hom|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|PgU|
     * |---------------------------------------------------------------|
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |PgD|
     * |---------------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |End|
     * |---------------------------------------------------------------|
     * |Ctrl|Win |Alt |          Space         |Alt|Fn |Ctr|Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    KEYMAP(
        ESC,F1,  F2, F3,   F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,PSCR,PAUS, DEL, \
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSPC,     HOME, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,LBRC,RBRC,     BSLS,PGUP, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT,       ENT,PGDN, \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,        RSFT, UP, END, \
        LCTL,LGUI,LALT,            SPC,                RALT, FN0,RCTL,LEFT,DOWN,RGHT),
    /* Keymap 1: FN Layer 2
     * ,---------------------------------------------------------------.
     * |   |   |   |   |   |   |   |Rev|Pau| FF|Mut|VoD|VoU|   |   |   |
     * |---------------------------------------------------------------|
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |   |
     * |---------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |   |
     * |---------------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |   |
     * |---------------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |   |
     * |---------------------------------------------------------------|
     * |    |    |    |                        |   |   |   |   |   |   |
     * `---------------------------------------------------------------'
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MRWD,MPLY,MFFD,MUTE,VOLD,VOLU,TRNS,TRNS, INS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS, TRNS,      TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,   TRNS,TRNS, TRNS,      TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,           TRNS,                TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};
const action_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_MOMENTARY(1),
};
