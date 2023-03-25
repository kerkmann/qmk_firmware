#include "bongo.h"

static void print_status_narrow(void) {
    oled_write_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _RAISE:
            oled_write_P(PSTR("raise"), false);
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

    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);

    oled_write_P(PSTR("\n\n\n\n\n\n\n\n\n\n\n"), false);
    oled_write_P(PSTR("WPM: "), false);
}

static void print_settings_master(void) {
    char mode[4];
    char val[4];
    char hue[4];
    char sat[4];
    char speed[4];
    sprintf(mode, "%d", rgb_matrix_get_mode());
    sprintf(val, "%d", rgb_matrix_get_val());
    sprintf(hue, "%d", rgb_matrix_get_hue());
    sprintf(sat, "%d", rgb_matrix_get_sat());
    sprintf(speed, "%d", rgb_matrix_get_speed());

    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln(mode, false);
    oled_write_P(PSTR("VALUE"), false);
    oled_write_ln(val, false);
    oled_write_ln_P(PSTR("HUE"), false);
    oled_write_ln(hue, false);
    oled_write_ln_P(PSTR("SAT"), false);
    oled_write_ln(sat, false);
    oled_write_P(PSTR("SPEED"), false);
    oled_write(speed, false);
}

static void print_settings_slave(void) {
    oled_write_ln_P(PSTR("NUM"), false);
    oled_write_ln_P(PSTR("???"), false);
    //if (get_num_state()) {
    //    oled_write_ln_P(PSTR("ON "), false);
    //} else {
    //    oled_write_ln_P(PSTR("OFF"), false);
    //}

    oled_write_P(PSTR("\n\n"), false);

    oled_write_P(PSTR("SHIFT"), false);
    if (get_autoshift_state()) {
        oled_write_ln_P(PSTR("ON "), false);
    } else {
        oled_write_ln_P(PSTR("OFF"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            case _ADJUST: {
                print_settings_master();
            } break;
            default: {
                print_status_narrow();
            } break;
        }
    } else {
        switch (get_highest_layer(layer_state)) {
            case _ADJUST: {
                print_settings_slave();
            } break;
            default: {
                draw_bongo();
            } break;
        }
    }
    return false;
}


