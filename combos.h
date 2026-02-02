// combos.h
#pragma once

/* * 物理キー配置とベースレイヤー(Layer 0)の対応
 * ,-----------------------.
 * |   1:E   |   2:U   |   3:I   |   
 * |---------+---------+---------|
 * |   4:A   |   5:Up  |   6:O   |
 * |---------+---------+---------|
 * |  7:Left |  8:Down | 9:Right |
 * `-----------------------'
 */

#define COMBOS_LIST(X) \
    /* --- 基本操作 (Space, Enter, BS) --- */ \
    X(C123_BS,       KC_BSPC,      KC_E, KC_U, KC_I) \
    X(C1239_DEL,     KC_DEL,       KC_E, KC_U, KC_I, KC_RIGHT) \
    X(C456_ENTER,    KC_ENTER,     KC_A, KC_UP, KC_O) \
    X(C789_SPACE,    KC_SPACE,     KC_LEFT, KC_DOWN, KC_RIGHT) \
    \
    /* --- アルファベット (Q-Z) --- */ \
    X(C14_Q,         KC_Q,         KC_E, KC_A) \
    X(C15_W,         KC_W,         KC_E, KC_UP) \
    X(C12_R,         KC_R,         KC_E, KC_U) \
    X(C13_T,         KC_T,         KC_E, KC_I) \
    X(C25_Y,         KC_Y,         KC_U, KC_UP) \
    X(C23_P,         KC_P,         KC_U, KC_I) \
    X(C17_S,         KC_S,         KC_E, KC_LEFT) \
    X(C24_D,         KC_D,         KC_U, KC_A) \
    X(C45_F,         KC_F,         KC_A, KC_UP) \
    X(C28_G,         KC_G,         KC_U, KC_DOWN) \
    X(C46_H,         KC_H,         KC_A, KC_O) \
    X(C56_J,         KC_J,         KC_UP, KC_O) \
    X(C26_K,         KC_K,         KC_U, KC_O) \
    X(C39_L,         KC_L,         KC_I, KC_RGHT) \
    X(C47_Z,         KC_Z,         KC_A, KC_LEFT) \
    X(C57_X,         KC_X,         KC_LEFT, KC_UP) \
    X(C78_C,         KC_C,         KC_LEFT, KC_DOWN) \
    X(C79_V,         KC_V,         KC_LEFT, KC_RGHT) \
    X(C58_B,         KC_B,         KC_UP, KC_DOWN) \
    X(C89_N,         KC_N,         KC_DOWN, KC_RGHT) \
    X(C69_M,         KC_M,         KC_O, KC_RGHT) \
    \
    /* --- 数字 (1-0) --- */ \
    X(C1245_ONE,     KC_1,         KC_E, KC_U, KC_A, KC_UP) \
    X(C2356_TWO,     KC_2,         KC_U, KC_I, KC_UP, KC_O) \
    X(C4578_THREE,   KC_3,         KC_A, KC_UP, KC_LEFT, KC_DOWN) \
    X(C5689_FOUR,    KC_4,         KC_UP, KC_O, KC_DOWN, KC_RGHT) \
    X(C2456_FIVE,    KC_5,         KC_U, KC_A, KC_UP, KC_O) \
    X(C145782_SIX,   KC_6,         KC_E, KC_A, KC_UP, KC_LEFT, KC_DOWN, KC_U) \
    X(C328596_SEV,   KC_7,         KC_I, KC_U, KC_DOWN, KC_UP, KC_RGHT, KC_O) \
    X(C123456_EGT,   KC_8,         KC_E, KC_U, KC_I, KC_A, KC_UP, KC_O) \
    X(C456789_NIN,   KC_9,         KC_A, KC_UP, KC_O, KC_LEFT, KC_DOWN, KC_RGHT) \
    X(C5798_ZERO,    KC_P0,        KC_UP, KC_LEFT, KC_RGHT, KC_DOWN) \
    \
    /* --- 記号・括弧 --- */ \
    X(C124_LPRN,     S(KC_8),      KC_E, KC_U, KC_A) \
    X(C245_RPRN,     S(KC_9),      KC_U, KC_A, KC_UP) \
    X(C235_LBRC,     KC_RBRC,      KC_U, KC_I, KC_UP) \
    X(C356_RBRC,     KC_BSLS,      KC_I, KC_UP, KC_O) \
    X(C457_SLBRC,    S(KC_RBRC),   KC_LEFT, KC_A, KC_UP) \
    X(C578_SRBRC,    S(KC_BSLS),   KC_UP, KC_LEFT, KC_DOWN) \
    X(C126_COMM,     KC_COMM,      KC_E, KC_U, KC_O) \
    X(C459_DOT,      KC_DOT,       KC_A, KC_UP, KC_RGHT) \
    X(C586_SCOMM,    S(KC_COMM),   KC_UP, KC_DOWN, KC_O) \
    X(C689_SDOT,     S(KC_DOT),    KC_O, KC_DOWN, KC_RGHT) \
    X(C368_COLN,     KC_QUOT,      KC_I, KC_O, KC_DOWN) \
    X(C257_SCLN,     KC_SCLN,      KC_U, KC_UP, KC_LEFT) \
    \
    /* --- 数学記号・その他特殊記号 --- */ \
    X(C56_MINUS,     KC_MINUS,     KC_LEFT, KC_UP, KC_O) \
    X(C489_UND,      S(KC_INT1),   KC_A, KC_DOWN, KC_RGHT) \
    X(C2468_PLUS,    KC_PLUS,      KC_U, KC_A, KC_O, KC_DOWN) \
    X(C4679_EQL,     KC_EQL,       KC_A, KC_O, KC_LEFT, KC_RGHT) \
    X(C35_PLUSS,     S(KC_SCLN),   KC_I, KC_UP) \
    X(C36_EQLL,      S(KC_MINUS),  KC_I, KC_O) \
    X(C68_ASTR,      S(KC_DQT),    KC_O, KC_DOWN) \
    X(C59_PERC,      S(KC_5),      KC_UP, KC_RGHT) \
    X(C48_AT,        KC_LBRC,      KC_A, KC_DOWN) \
    X(C453_EXLM,     KC_EXLM,      KC_A, KC_UP, KC_I) \
    X(C786_QUES,     KC_QUES,      KC_LEFT, KC_DOWN, KC_O) \
    X(C258_PIPE,     S(KC_INT3),   KC_U, KC_UP, KC_DOWN) \
    X(C357_SLSH,     KC_SLSH,      KC_I, KC_UP, KC_LEFT) \
    X(C159_BSLS,     KC_INT1,      KC_E, KC_UP, KC_RGHT) \
    X(C238_DQT,      S(KC_2),      KC_U, KC_I, KC_DOWN) \
    X(C128_QUOT,     S(KC_7),      KC_U, KC_E, KC_DOWN) \
    X(C579_GRV,      KC_GRAVE,     KC_LEFT, KC_UP, KC_RGHT) \
    X(C129_GRV_S,    S(KC_LBRC),   KC_E, KC_U, KC_RGHT) \
    X(C246_CIRC,     KC_EQL,       KC_U, KC_A, KC_O) \
    X(C125_TILD,     KC_PLUS,      KC_E, KC_UP, KC_I) \
    \
    /* --- ナビゲーション・機能キー --- */ \
    X(C27_HOME,      KC_HOME,      KC_U, KC_LEFT) \
    X(C18_END,       KC_END,       KC_E, KC_DOWN) \
    X(C29_PGUP,      KC_PGUP,      KC_U, KC_RGHT) \
    X(C38_PGDN,      KC_PGDN,      KC_I, KC_DOWN) \
    X(C16_TAB,       KC_TAB,       KC_E, KC_O) \
    X(C34_SHFTAB,    S(KC_TAB),    KC_I, KC_A) \
    X(C12459_ESC,    KC_ESC,       KC_E, KC_U, KC_A, KC_UP, KC_RGHT) \
    X(C369_HENK,     KC_INT4,      KC_I, KC_O, KC_RGHT) \
    X(C147_MHEN,     KC_INT5,      KC_E, KC_A, KC_LEFT) \
    X(C49_UNDO,      C(KC_Z),      KC_A, KC_RGHT) \
    X(C67_REDO,      C(KC_Y),      KC_O, KC_LEFT) \
    \
    /* --- 単体修飾キー (OSM: タップ専用) --- */ \
    X(C145_SFT,      OSM(MOD_LSFT), KC_E, KC_A, KC_UP) \
    X(C256_GUI,      OSM(MOD_LGUI), KC_U, KC_UP, KC_O) \
    X(C478_CTL,      OSM(MOD_LCTL), KC_A, KC_LEFT, KC_DOWN) \
    X(C589_ALT,      OSM(MOD_LALT), KC_UP, KC_DOWN, KC_RGHT) \
    \
    /* --- 修飾キーの組み合わせ (重ね掛け・全6種) --- */ \
    X(C12456_SFT_GUI, OSM(MOD_LSFT | MOD_LGUI), KC_E, KC_U, KC_A, KC_UP, KC_O) \
    X(C14578_SFT_CTL, OSM(MOD_LSFT | MOD_LCTL), KC_E, KC_A, KC_UP, KC_LEFT, KC_DOWN) \
    X(C1245689_SFT_ALT, OSM(MOD_LSFT | MOD_LALT), KC_E, KC_U, KC_A, KC_UP, KC_O, KC_DOWN, KC_RGHT) \
    X(C2345678_GUI_CTL, OSM(MOD_LGUI | MOD_LCTL), KC_U, KC_I, KC_A, KC_UP, KC_O, KC_LEFT, KC_DOWN) \
    X(C25689_GUI_ALT, OSM(MOD_LGUI | MOD_LALT), KC_U, KC_UP, KC_O, KC_DOWN, KC_RGHT) \
    X(C45789_CTL_ALT, OSM(MOD_LCTL | MOD_LALT), KC_A, KC_UP, KC_LEFT, KC_DOWN, KC_RGHT) \
    \
    /* --- レイヤー切り替え --- */ \
    X(C4268_TENKEY,  TG(_TENKEY),  KC_A, KC_U, KC_O, KC_DOWN) \
    X(C12457_FN1,    OSL(_FN1),    KC_E, KC_U, KC_A, KC_UP, KC_LEFT) \
    X(C23568_FN2,    OSL(_FN2),    KC_U, KC_I, KC_UP, KC_O, KC_DOWN)


