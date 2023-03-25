enum combo_events { EM_EMAIL, COMBO_LENGTH };
// TODO: Do I really need that part?
//uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM email_combo[] = {KC_E, KC_M, COMBO_END};

combo_t key_combos[] = {
    [EM_EMAIL] = COMBO_ACTION(email_combo),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case EM_EMAIL:
            if (pressed) {
                SEND_STRING("daniel@kerkmann.dev");
            }
            break;
    }
}
