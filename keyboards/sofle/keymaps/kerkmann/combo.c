#include "combo.h"

void process_combo_event(uint16_t combo_index, bool pressed) {
    switch (combo_index) {
        case EM_EMAIL:
            if (pressed) {
                SEND_STRING("daniel@kerkmann.dev");
            }
            break;
    }
}
