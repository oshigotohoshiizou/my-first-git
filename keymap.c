#include QMK_KEYBOARD_H
#include "combos.h"

enum custom_layers {
    _BASE,
    _TENKEY,
    _FN1,
    _FN2
};

// --- 自動展開システム ---
// combos.h の COMBOS_LIST からコンボ定義を生成
enum combos {
    #define AS_ENUM(name, key, ...) name,
    COMBOS_LIST(AS_ENUM)
    #undef AS_ENUM
    COMBO_COUNT
};

    #define AS_ARRAY(name, key, ...) const uint16_t PROGMEM name##_combo[] = {__VA_ARGS__, COMBO_END};
    COMBOS_LIST(AS_ARRAY)
    #undef AS_ARRAY

combo_t key_combos[] = {
    #define AS_COMBO(name, key, ...) [name] = COMBO(name##_combo, key),
    COMBOS_LIST(AS_COMBO)
    #undef AS_COMBO
};

/* * レイヤー位置ガイド
 * ,-----------------------.
 * |   1   |   2   |   3   |   
 * |-------+-------+-------|
 * |   4   |   5   |   6   |
 * |-------+-------+-------|
 * |   7   |   8   |   9   |
 * `-----------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // 0: ベースレイヤー
    [_BASE] = LAYOUT_9 (
        KC_E,    KC_U,    KC_I,
        KC_A,    KC_UP,   KC_O,
        KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    // テンキーレイヤー (Blender用)
    [_TENKEY] = LAYOUT_9 (
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3
    ),

    // ファンクション1 (OSLで1回発動、またはホールド)
    [_FN1] = LAYOUT_9 (
        KC_F1,   KC_F2,   KC_F3,
        KC_F4,   KC_F5,   KC_F6,
        KC_F7,   KC_F8,   KC_F9
    ),

    // ファンクション2 (OSLで1回発動、またはホールド)
    [_FN2] = LAYOUT_9 (
        KC_F10,   KC_F11,   KC_F12,
        KC_MUTE,  KC_MPLY,  KC_PSCR,
        KC_INS ,   KC_CAPS,    KC_NUM_LOCK
    )
};
