#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _LOWER   1
#define _RAISE   2
#define _NAV     3
#define _MOUSE   4
#define _MEDIA   5
#define _GAME1   6
#define _GAME2   7
#define _SWITCH  8

#define MS_SCRL DRAG_SCROLL

#define LAYOUT_CHARYBDIS_NANO(...) LAYOUT_split_3x5_3(__VA_ARGS__, KC_NO)

#define HR_MODS_LEFT_wrapper(k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,...) \
        k1,k2,k3,k4,k5,k6,k7,k8,k9,k10, \
        GUI_T(k11),ALT_T(k12),CTL_T(k13),SFT_T(k14),__VA_ARGS__

#define HR_MODS_wrapper(k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,...) \
        HR_MODS_LEFT( \
          k1,k2,k3,k4,k5,k6,k7,k8,k9,k10, \
          k11,k12,k13,k14,k15,k16,SFT_T(k17),CTL_T(k18),ALT_T(k19),GUI_T(k20), \
          __VA_ARGS__)

#define LAYER_TAP_MODS_wrapper(k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11,k12,k13,k14,k15,k16,k17,k18,k19,k20,k21,k22,k23,k24,k25,k26,k27,k28,k29,k30,k31,k32,k33,k34,k35) \
        k1,k2,k3,k4,k5,k6,k7,k8,k9,k10, \
        k11,k12,k13,k14,k15,k16,k17,k18,k19,k20, \
        LT(_MOUSE,k21),k22,k23,k24,k25,k26,k27,k28,k29,LT(_MOUSE,k30), \
        LT(_SWITCH,k31),LT(_LOWER,k32),LT(_NAV,k33),LT(_MEDIA,k34),LT(_RAISE,k35)

#define HR_MODS_LEFT(...)   HR_MODS_LEFT_wrapper(__VA_ARGS__)
#define HR_MODS(...)        HR_MODS_wrapper(__VA_ARGS__)
#define LAYER_TAP_MODS(...) LAYER_TAP_MODS_wrapper(__VA_ARGS__)


// Modifiers + Layers (hold)
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │     │     │     │     │     │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ GUI │ ALT │ CTL │ SFT │     │                        │     │ SFT │ CTL │ ALT │ GUI │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │MOUSE│     │     │     │     │                        │     │     │     │     │MOUSE│
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴───┬─┴─────┴─────┴─────╯
//                      │SWTCH│LOWER│ NAV │      │MEDIA│RAISE│ DEEZ │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────┤ NUTT │
//                                                           ╰──────╯

// DEFAULT
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │  Q  │  W  │  E  │  R  │  T  │                        │  Y  │  U  │  I  │  O  │  P  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  A  │  S  │  D  │  F  │  G  │                        │  H  │  J  │  K  │  L  │  ;  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  Z  │  X  │  C  │  V  │  B  │                        │  N  │  M  │  ,  │  .  │  /  │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ TAB │ SPC │ ENT │      │ DEL │ BSP │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_DEFAULT \
  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,         KC_Y,  KC_U,  KC_I,     KC_O,    KC_P,    \
  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,         KC_H,  KC_J,  KC_K,     KC_L,    KC_SCLN, \
  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,         KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH, \
          KC_TAB,  KC_SPC,  KC_ENT,         KC_DEL,  KC_BSPC


// LOWER
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │ F1  │ F2  │ F3  │ F4  │     │                        │  +  │  7  │  8  │  9  │  *  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ F5  │ F6  │ F7  │ F8  │     │                        │  -  │  4  │  5  │  6  │  /  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ F9  │ F10 │ F11 │ F12 │     │                        │  0  │  1  │  2  │  3  │  .  │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ --- │ --- │ --- │      │ --- │ --- │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_LOWER \
  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_NO,        KC_PPLS,  KC_7,  KC_8,  KC_9,  KC_PAST, \
  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_NO,        KC_PMNS,  KC_4,  KC_5,  KC_6,  KC_PSLS, \
  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO,        KC_0,     KC_1,  KC_2,  KC_3,  KC_DOT,  \
                 _______, _______, _______,        _______, _______


// RAISE
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │  !  │  @  │  +  │  =  │  :  │                        │  `  │  {  │  }  │  |  │  \  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  &  │  #  │  -  │  _  │  ,  │                        │  ~  │  (  │  )  │  '  │  "  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  *  │  %  │  ^  │  $  │  .  │                        │  ?  │  [  │  ]  │  <  │  >  │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ --- │ --- │ --- │      │ --- │ --- │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_RAISE \
  KC_EXLM,  KC_AT,    KC_PLUS,  KC_EQL,   KC_COLN,       KC_GRV,   KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_BSLS, \
  KC_AMPR,  KC_HASH,  KC_MINS,  KC_UNDS,  KC_COMM,       KC_TILD,  KC_LPRN,  KC_RPRN,  KC_QUOT,  KC_DQUO, \
  KC_ASTR,  KC_PERC,  KC_CIRC,  KC_DLR,   KC_DOT,        KC_QUES,  KC_LBRC,  KC_RBRC,  KC_LABK,  KC_RABK, \
                        _______, _______, _______,       _______, _______


// NAV
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │ ESC │     │     │     │     │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ GUI │ ALT │ CTL │ SFT │ APP │                        │     │  ←  │  ↓  │  ↑  │  →  │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ UND │ CUT │ CPY │ PST │ RDO │                        │     │ HME │ PDN │ PUP │ END │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ --- │ --- │ --- │      │ --- │ --- │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_NAV \
  KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   \
  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_APP,        KC_NO,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT, \
  C(KC_Z),  C(KC_X),  C(KC_C),  C(KC_V),  C(KC_Y),       KC_NO,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,  \
                        _______, _______, _______,       _______, _______


// MOUSE + HR MODS
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │ ESC │     │     │     │     │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ GUI │ ALT │ CTL │ SFT │     │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ --- │SCRLL│     │     │     │                        │     │ BT1 │ BT2 │ BT3 │ --- │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ BT2 │ BT1 │ BT3 │      │ --- │ --- │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_MOUSE \
  KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,       KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   \
  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,       KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,   \
  _______,  MS_SCRL,  KC_NO,    KC_NO,    KC_NO,       KC_NO,  KC_BTN1,  KC_BTN2,  KC_BTN3,  _______, \
                      KC_BTN2,  KC_BTN1,  KC_BTN3,     _______, _______


// MEDIA (+SYS)
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │PAUSE│ INS │     │     │     │                        │     │     │ BRI-│ BRI+│ SCR │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ GUI │ ALT │ CTL │ SFT │     │                        │ PP  │ RWN │ PRV │ NXT │ FRW │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ HUE │ SAT │ VAL │ SPD │     │                        │ MUT │     │ VOL-│ VOL+│     │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ MOD<│ MOD>│ TOG │      │ --- │ --- │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_MEDIA \
  KC_PAUS,  KC_INS,   KC_NO,    KC_NO,    KC_NO,        KC_NO,    KC_NO,    KC_BRID,  KC_BRIU,  KC_PSCR, \
  KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,        KC_MPLY,  KC_MRWD,  KC_MPRV,  KC_MNXT,  KC_MFFD, \
  RGB_HUI,  RGB_SAI,  RGB_VAI,  RGB_SPI,  KC_NO,        KC_MUTE,  KC_NO,    KC_VOLD,  KC_VOLU,  KC_NO,   \
                    RGB_RMOD,  RGB_MOD,  RGB_TOG,       _______, _______


// GAME 1 - WASD
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │ TAB │  Q  │  W  │  E  │  R  │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ SFT │  A  │  S  │  D  │  F  │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ CTL │  Z  │  X  │  C  │  V  │                        │     │     │     │     │     │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ ESC │ SPC │ ENT │      │     │     │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_GAME_WASD \
  KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  KC_LSFT,  KC_A,  KC_S,  KC_D,  KC_F,        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  KC_LCTL,  KC_Z,  KC_X,  KC_C,  KC_V,        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  LT(_SWITCH, KC_ESC),  KC_SPC,  KC_ENT,      KC_NO,  KC_NO


// GAME 2 - QWERT
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │  Q  │  W  │  E  │  R  │  T  │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  A  │  S  │  D  │  F  │  G  │                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │  Z  │  X  │  C  │  V  │  B  │                        │     │     │     │     │     │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ ESC │ SPC │ ENT │      │     │     │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_GAME_QWERT \
  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  LT(_SWITCH, KC_ESC),  KC_SPC,  KC_ENT,     KC_NO,  KC_NO


// LAYER SWITCH
// ╭─────┬─────┬─────┬─────┬─────╮                        ╭─────┬─────┬─────┬─────┬─────╮
// │ ESC │     │     │     │GWASD│                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │ GUI │ ALT │     │     │GQWER│                        │     │     │     │     │     │
// ├─────┼─────┼─────┼─────┼─────┤                        ├─────┼─────┼─────┼─────┼─────┤
// │G-TAB│A-TAB│     │     │ DEF │                        │     │     │     │     │     │
// ╰─────┴─────┴─────┴──┬──┴──┬──┴──┬─────╮      ╭─────┬──┴──┬──┴─────┴─────┴─────┴─────╯
//                      │ --- │     │     │      │     │     │
//                      ╰─────┴─────┴─────╯      ╰─────┴─────╯
#define LAYER_SWITCH \
  KC_ESC,     KC_NO,      KC_NO,  KC_NO,  DF(_GAME1),          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  KC_LGUI,    KC_LALT,    KC_NO,  KC_NO,  DF(_GAME2),          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
  G(KC_TAB),  A(KC_TAB),  KC_NO,  KC_NO,  DF(_DEFAULT),        KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
                               _______,  KC_NO,  KC_NO,        KC_NO,  KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_CHARYBDIS_NANO(HR_MODS(LAYER_TAP_MODS(LAYER_DEFAULT))),
  [_LOWER]   = LAYOUT_CHARYBDIS_NANO(HR_MODS(LAYER_LOWER)),
  [_RAISE]   = LAYOUT_CHARYBDIS_NANO(LAYER_RAISE),
  [_NAV]     = LAYOUT_CHARYBDIS_NANO(HR_MODS_LEFT(LAYER_NAV)),
  [_MOUSE]   = LAYOUT_CHARYBDIS_NANO(HR_MODS_LEFT(LAYER_MOUSE)),
  [_MEDIA]   = LAYOUT_CHARYBDIS_NANO(HR_MODS_LEFT(LAYER_MEDIA)),
  [_GAME1]   = LAYOUT_CHARYBDIS_NANO(LAYER_GAME_WASD),
  [_GAME2]   = LAYOUT_CHARYBDIS_NANO(LAYER_GAME_QWERT),
  [_SWITCH]  = LAYOUT_CHARYBDIS_NANO(LAYER_SWITCH)
};
