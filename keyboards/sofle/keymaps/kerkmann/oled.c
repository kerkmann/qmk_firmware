#include <stdbool.h>
#include <stdio.h>

#include QMK_KEYBOARD_H

#include "feature_state.h"
#include "oled_driver.h"
#include "process_auto_shift.h"
#include "quantum_keycodes.h"
#include "wpm.h"

#include "bongo.h"
#include "layers.h"

#define OLED_NEW_LINE() oled_write_P(PSTR("\n"), false)
#define OLED_FEATURE_LINE(cond, text)      \
    if ((cond)) {                          \
        oled_write_P(PSTR((text)), false); \
    } else {                               \
        oled_write_P(PSTR("\n"), false);   \
    }

#ifdef AUTOCORRECT_ENABLE
    #define FEATURE_AUTO_CORRECT_ENABLED autocorrect_is_enabled()
#else
    #define FEATURE_AUTO_CORRECT_ENABLED false
#endif
#ifdef AUTO_SHIFT_ENABLE
    #define FEATURE_AUTO_SHIFT_ENABLED get_autoshift_state()
#else
    #define FEATURE_AUTO_SHIFT_ENABLED false
#endif
#define FEATURE_CAPS_LOCK_ENABLED host_keyboard_led_state().caps_lock
#ifdef CAPS_WORD_ENABLE
    #define FEATURE_CAPS_WORD_ENABLED is_caps_word_on()
#else
    #define FEATURE_CAPS_WORD_ENABLED false
#endif
#define FEATURE_KEY_LOCK_ENABLED key_lock_active

static void print_status_narrow(void) {
    oled_write_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _RAISE:
            oled_write_P(PSTR("Raise"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Lower"), false);
            break;
        case _ADJUST:
            oled_write_ln_P(PSTR("Adj."), false);
            break;
        case _NUMPAD:
            oled_write_ln_P(PSTR("Num."), false);
            break;
        default:
            oled_write_ln_P(PSTR("Base"), false);
    }

    oled_write_P(PSTR("\n\n"), false);
    oled_write_P(PSTR("Feat:"), false);

    OLED_FEATURE_LINE(FEATURE_CAPS_LOCK_ENABLED, "CAPS\n");
    OLED_FEATURE_LINE(FEATURE_AUTO_CORRECT_ENABLED, "CORR\n");
    OLED_FEATURE_LINE(FEATURE_KEY_LOCK_ENABLED, "LOCK\n");
    OLED_FEATURE_LINE(FEATURE_AUTO_SHIFT_ENABLED, "SHIFT");
    OLED_FEATURE_LINE(FEATURE_CAPS_WORD_ENABLED, "WORD\n");

    oled_write_P(PSTR("\n\n"), false);

    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);

    oled_write_P(PSTR("\n\n"), false);

    oled_write_P(is_keyboard_left() ? PSTR("LEFT\n") : PSTR("RIGHT\n"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        draw_bongo();
    }
    return false;
}
