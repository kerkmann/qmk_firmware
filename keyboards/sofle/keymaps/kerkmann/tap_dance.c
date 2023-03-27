#include "action.h"
#include "keycodes.h"
#include "process_tap_dance.h"
#include "quantum_keycodes.h"

#include "tap_dance.h"

tap_dance_action_t tap_dance_actions[] = {
    [TD_MOD] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LSFT(KC_ENT)),
};
