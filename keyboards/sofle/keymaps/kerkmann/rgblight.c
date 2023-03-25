void keyboard_post_init_user(void) {
    rgb_matrix_disable();
    rgb_matrix_set_speed(10);
    rgb_matrix_enable();
    rgb_matrix_sethsv(10, 10, 10);
    rgb_matrix_set_speed(10);
    rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON);
}
