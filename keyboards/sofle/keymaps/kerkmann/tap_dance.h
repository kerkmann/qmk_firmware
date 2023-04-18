#pragma once

#include "action.h"
#include "keycodes.h"
#include "process_tap_dance.h"
#include "quantum_keycodes.h"

enum {
    TD_MOD,
    TD_PGDN,
    TD_PGUP,
};

tap_dance_action_t tap_dance_actions[] = {
    [TD_MOD]  = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LSFT(KC_ENT)),
    [TD_PGDN] = ACTION_TAP_DANCE_DOUBLE(KC_PGDN, LSFT(KC_HOME)),
    [TD_PGUP] = ACTION_TAP_DANCE_DOUBLE(KC_PGUP, LSFT(KC_END)),
};
