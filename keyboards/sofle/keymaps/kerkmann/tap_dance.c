enum custom_tap_dances {
    TD_MOD,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_MOD] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LSFT(KC_ENT)),
};
