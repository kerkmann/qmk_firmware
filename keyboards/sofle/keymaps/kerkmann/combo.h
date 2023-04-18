#pragma once

#include "process_combo.h"

enum combo_events { EM_EMAIL, COMBO_LENGTH };
// TODO: Do I really need that part?
//uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM email_combo[] = {KC_E, KC_M, COMBO_END};

combo_t key_combos[] = {
    [EM_EMAIL] = COMBO_ACTION(email_combo),
};
