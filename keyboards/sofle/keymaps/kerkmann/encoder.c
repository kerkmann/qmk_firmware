bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Flip direction to fix clockwise/counterclockwise
        clockwise = !clockwise;
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
    } else if (index == 1) {
        if (clockwise) {
            rgblight_increase_val();
        } else {
            rgblight_decrease_val();
        }
    }
    return true;
}
