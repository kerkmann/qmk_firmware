#include <stdio.h>

#include QMK_KEYBOARD_H

#include "process_tap_dance.h"

#ifdef TAP_DANCE_ENABLE
#    include "tap_dance.h"
#endif

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * QWERTY
     * .-----------------------------------------------------------.                        .-----------------------------------------------------------.
     * | ESC     | 1       | 2       | 3       | 4       | 5       |                        | 6       | 7       | 8       | 9       | 0       | NUMPAD  |
     * |---------+---------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------+---------|
     * | TAB     | Q       | W       | E       | R       | T       |                        | Y       | U       | I       | O       | P       | \ |     |
     * |---------+---------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------+---------|
     * | LCtrl   | A       | S       | D       | F       | G       |---------.   ,----------| H       | J       | K       | L       | ; :     | ' "     |
     * |---------+---------+---------+---------+---------+---------| MUTE    |   |Play/Pause|---------+---------+---------+---------+---------+---------|
     * | LShift  | Z       | X       | C       | V       | B       |---------|   |----------| N       | M       | , <     | . >     | / ?     | RShift  |
     * `-----------------------------------------------------------/        /     \          \----------------------------------------------------------'
     *           | PDown   | LAlt   | Space    | Lower   |        / Super  /       \ Enter    \       | Raise   | Backsp. | RAlt    | PUP     |
     *           `--------------------------------------------------------'         '---------------------------------------------------------/
     */
    [_QWERTY] = LAYOUT(
    // .-----------------------------------------------------------.                        .-----------------------------------------------------------.
         KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                          KC_6    , KC_7    , KC_8    , KC_9    , KC_0    ,TG(_NUMPAD),
    // |---------+---------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------+---------|
         KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    ,                          KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSLS ,
    // |---------+---------+---------+---------+---------+---------|                        |---------+---------+---------+---------+---------+---------|
         KC_LCTL , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    ,                          KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_QUOT ,
    // |---------+---------+---------+---------+---------+---------|=========|    |=========|---------+---------+---------+---------+---------+---------|
         KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_MUTE ,      KC_MPLY , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
    // |---------+---------+---------+---------+---------+---------|=========|    |=========|---------+---------+---------+---------+---------+---------|
                   KC_PGDN , KC_LALT , KC_SPC  , KC_LOWER,TD(TD_MOD),                         KC_ENT  , KC_RAISE, KC_BSPC , KC_RALT , KC_PGUP
    //           \---------+---------+---------+---------+---------|--------/      \--------|---------+---------+--------+---------+---------/
    ),

    /*
     * LOWER
     * .-----------------------------------------------------------.                         .-----------------------------------------------------------.
     * |         | F1      | F2      | F3      | F4      | F5      |                         | F6      | F7      | F8      | F9      | F10     |         |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         | !       | @       | #       | $       | %       |----------.   ,----------| ^       | &       | *       | (       | )       |         |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         | <       | [       | {       | (       | _       |----------|   |----------| =       | )       | }       | ]       | >       |         |
     * |---------+---------+---------+---------+---------+---------|          |   |          |---------+---------+---------+---------+---------+---------|
     * |         |         |         | /       | ~       | -       |                         | +       | `       | \       |         |         |         |
     * `-----------------------------------------------------------/         /     \          \----------------------------------------------------------'
     *           |         |         |         |         |        /         /       \          \       |         | Del     |         |         |
     *           `---------------------------------------------------------'         '---------------------------------------------------------/
     */
    [_LOWER] = LAYOUT(
    // .-----------------------------------------------------------.                         .-----------------------------------------------------------.
         XXXXXXX , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                           KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC , XXXXXXX ,       XXXXXXX , KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , KC_LT   , KC_LBRC , KC_LCBR , KC_LPRN , KC_UNDS ,                           KC_EQL  , KC_RPRN , KC_RCBR , KC_RBRC , KC_GT   , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , KC_SLSH , KC_TILD , KC_MINS ,                           KC_PLUS , KC_GRV  , KC_BSLS , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
                   XXXXXXX , XXXXXXX , XXXXXXX , _______ , XXXXXXX ,                           XXXXXXX , _______ , KC_DEL  , XXXXXXX , XXXXXXX
    //           \---------+---------+---------+---------+---------|--------/       \--------|---------+---------+---------+---------+---------/
    ),

    /* RAISE
     * .------------------------------------------------------------.                         .-----------------------------------------------------------.
     * | Caps    |         |         |         |          |         |                         |         |         |         |         |         |         |
     * |---------+---------+---------+---------+----------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |          |         |                         |         |         |         |         |         |         |
     * |---------+---------+---------+---------+----------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |          |         |----------.   ,----------| Left    | Down    | Up      | Right   |         |         |
     * |---------+---------+---------+---------+----------+---------|          |   |          |---------+---------+---------+---------+---------+---------|
     * |         | Undo    | Cut     | Copy    | Paste    |         |----------|   |----------|         |         |         |         |         |         |
     * `------------------------------------------------------------/         /     \          \----------------------------------------------------------'
     *           |         |         |         |          |        /         /       \          \       |         |         |         |         |
     *           `----------------------------------------------------------'         '---------------------------------------------------------/
     */
    [_RAISE] = LAYOUT(
    // .------------------------------------------------------------.                         .-----------------------------------------------------------.
         KC_CAPS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX ,                           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+---------+----------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX ,                           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+---------+----------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX ,                           KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+---------+----------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
         XXXXXXX , KC_UNDO , KC_CUT  , KC_COPY , KC_PASTE , XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+---------+----------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
                   XXXXXXX , XXXXXXX , XXXXXXX , _______  , XXXXXXX ,                           XXXXXXX , _______ , XXXXXXX , XXXXXXX , XXXXXXX
    //           \---------+---------+---------+----------+---------|--------/       \--------|---------+---------+---------+---------+---------/
    ),

    /* ADJUST
     * .---------------------------------------------------------------.                         .-----------------------------------------------------------.
     * |         |         |         | RGB Hue-  | RGB Hue+  |         |                         | NUMPAD  |         |         |         |         |         |
     * |---------+---------+---------+-----------+-----------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         | RGB Sat-  | RGB Sat+  |         |                         |AUTOSHIFT|         |         |         |         |         |
     * |---------+---------+---------+-----------+-----------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         | RGB Prev| RGB Value-| RGB Value+| RGB Next|----------.   ,----------|         |         |         |         |         |         |
     * |---------+---------+---------+-----------+-----------+---------|          |   |          |---------+---------+---------+---------+---------+---------|
     * |         |         |         | RGB Speed-| RGB Speed+|         |----------|   |----------|         |         |         |         |         |         |
     * `---------------------------------------------------------------/         /     \          \----------------------------------------------------------'
     *           |         |         |           |           |        /         /       \          \       |         |         |         |         |
     *           `-------------------------------------------------------------'         '---------------------------------------------------------/
     */
    [_ADJUST] = LAYOUT(
    // .---------------------------------------------------------------.                         .-----------------------------------------------------------.
         XXXXXXX , XXXXXXX , XXXXXXX , RGB_HUD   , RGB_HUI   , XXXXXXX ,                           KC_NUM  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+-----------+-----------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , RGB_SAD   , RGB_SAI   , XXXXXXX ,                           KC_T_AS , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+-----------+-----------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , RGB_RMOD, RGB_VAD   , RGB_VAI   , RGB_MOD ,                           XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+-----------+-----------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , RGB_SPD   , RGB_SPI   , XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    // |---------+---------+---------+-----------+-----------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
                   XXXXXXX , XXXXXXX , XXXXXXX   , _______   , XXXXXXX ,                           XXXXXXX , _______  , XXXXXXX, XXXXXXX , XXXXXXX
    //           \---------+---------+-----------+-----------+---------|--------/       \--------|---------+---------+---------+---------+---------/
    ),

    /* NUMPAD
     * .-----------------------------------------------------------.                         .-----------------------------------------------------------.
     * |         |         |         |         |         |         |                         | NUMPAD  |         |         |         |         | QWERTY  |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |                         | ^       | 7       | 8       | 9       | *       |         |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |----------.   ,----------| -       | 4       | 5       | 6       | =       |         |
     * |---------+---------+---------+---------+---------+---------|          |   |          |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |----------|   |----------| +       | 1       | 2       | 3       | \       |         |
     * `-----------------------------------------------------------/         /     \          \----------------------------------------------------------'
     *           |         |         |         |         |        /         /       \          \       | ,       | 0       | .       | Enter   |
     *           `---------------------------------------------------------'         '---------------------------------------------------------/
     */
    [_NUMPAD] = LAYOUT(
    // .-----------------------------------------------------------.                         .-----------------------------------------------------------.
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                           KC_NUM  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,TG(_NUMPAD),
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                           KC_CIRC , KC_P7   , KC_P8   , KC_P9   , KC_ASTR , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                           KC_MINS , KC_P4   , KC_P5   , KC_P6   , KC_EQL  , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,       XXXXXXX , KC_PLUS , KC_P1   , KC_P2   , KC_P3   , KC_SLSH , XXXXXXX ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
                   XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                           XXXXXXX , KC_COMMA, KC_P0   , KC_PDOT , KC_ENT
    //           \---------+---------+---------+---------+---------|--------/       \--------|---------+---------+---------+---------+---------/
    ),

    /*
     * TEMPLATE
     * .-----------------------------------------------------------.                         .-----------------------------------------------------------.
     * |         |         |         |         |         |         |                         |         |         |         |         |         |         |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |                         |         |         |         |         |         |         |
     * |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |----------.   ,----------|         |         |         |         |         |         |
     * |---------+---------+---------+---------+---------+---------|          |   |          |---------+---------+---------+---------+---------+---------|
     * |         |         |         |         |         |         |----------|   |----------|         |         |         |         |         |         |
     * `-----------------------------------------------------------/         /     \          \----------------------------------------------------------'
     *           |         |         |         |         |        /         /       \          \       |         |         |         |         |
     *           `---------------------------------------------------------'         '---------------------------------------------------------/
    [_TEMPLATE] = LAYOUT(
    // .-----------------------------------------------------------.                         .-----------------------------------------------------------.
         _______ , _______ , _______ , _______ , _______ , _______ ,                           _______ , _______ , _______ , _______ , _______ , _______ ,
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         _______ , _______ , _______ , _______ , _______ , _______ ,                           _______ , _______ , _______ , _______ , _______ , _______ ,
    // |---------+---------+---------+---------+---------+---------|                         |---------+---------+---------+---------+---------+---------|
         _______ , _______ , _______ , _______ , _______ , _______ ,                           _______ , _______ , _______ , _______ , _______ , _______ ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
         _______ , _______ , _______ , _______ , _______ , _______ , _______ ,       _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
    // |---------+---------+---------+---------+---------+---------|=========|     |=========|---------+---------+---------+---------+---------+---------|
                   _______ , _______ , _______, _______  , _______ ,                           _______  , _______  , _______, _______ , _______
    //           \---------+---------+---------+---------+---------|--------/       \--------|---------+---------+---------+---------+---------/
    ),
    */
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case KC_LOWER: {
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        }
        case KC_RAISE: {
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
        }
        case KC_D_MUTE: {
            if (record->event.pressed) {
                register_mods(mod_config(MOD_MEH));
                register_code(KC_UP);
            } else {
                unregister_mods(mod_config(MOD_MEH));
                unregister_code(KC_UP);
            }
            return false;
        }
#ifdef AUTO_SHIFT_ENABLE
        case KC_T_AS: {
            if (!record->event.pressed) {
                autoshift_toggle();
            }
            return false;
        }
#endif
    }
    return true;
}

#ifdef COMBO_ENABLE
#    include "combo.c"
#endif
#ifdef ENCODER_ENABLE
#    include "encoder.c"
#endif
#ifdef OLED_ENABLE
#    include "oled.c"
#endif
#ifdef RGBLIGHT_ENABLE
#    include "rgb_matrix.c"
#endif
#ifdef TAP_DANCE_ENABLE
#    include "tap_dance.c"
#endif
#ifdef UCIS_ENABLE
#    include "ucis.c"
#endif
