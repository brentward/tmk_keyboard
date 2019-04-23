#include "keymap_common.h"


/*
 * ,---.   ,---------------. ,---------------. ,---------------. ,-----------.             ,---.
 * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau|             |Pwr|
 * `---'   `---------------' `---------------' `---------------' `-----------'             `---'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backspa| |Ins|Hom|PgU| |NmL|  =|  /|  *|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |Del|End|PgD| |  7|  8|  9|  -|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |               |  4|  5|  6|  +|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shif|\  |  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /|Shift     |     |Up |     |  1|  2|  3|   |
 * |-----------------------------------------------------------| ,-----------. |-----------|Ent|
 * |Ctrl |Opt |Cmd |         Space           |     |Opt |Ctrl  | |Lef|Dow|Rig| |      0|  .|   |
 * `-----------------------------------------------------------' `-----------' `---------------'
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = KEYMAP(
    ESC, F16, F17, F18, F19, F5,  F6, MRWD,MPLY,MFFD,MUTE,VOLD,VOLU,          PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,NO,
    FN0, 1,   2,   3,   4,   5,   6,  7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,  U,   I,   O,   P,   LBRC,RBRC,FN1,      DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,  J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,  N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LALT,LGUI,          SPC,                         RGUI,RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    [1] = KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6, F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,NO,
    FN2, 1,   2,   3,   4,   5,   6,  7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,  U,   I,   O,   P,   LBRC,RBRC,FN3,      DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,  J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,  N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LALT,LGUI,          SPC,                         RGUI,RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    [2] = KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,NO,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LGUI,LALT,          SPC,                          RGUI,RGUI,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    [3] = KEYMAP(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,    VOLD,VOLU,MUTE,NO,
    GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    P7,  P8,  P9,  PMNS,
    LCAP,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
    LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,          UP,           P1,  P2,  P3,
    LCTL,LALT,LGUI,          SPC,                          RGUI,RALT,RCTL,     LEFT,DOWN,RGHT,    P0,       PDOT,PENT
    ),
    [4] = KEYMAP(
    TRNS,F16, F17, F18, F19, F5,  F6,  MRWD,MPLY,MFFD,MUTE,VOLD,VOLU,       TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,                       TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            TRNS,      TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,          TRNS,                         TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS, TRNS,     TRNS,TRNS
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_GRV),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_BSLS),
    [2] = ACTION_LAYER_TAP_KEY(4, KC_GRV),
    [3] = ACTION_LAYER_TAP_KEY(4, KC_BSLS),
};
