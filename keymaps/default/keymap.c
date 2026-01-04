#include QMK_KEYBOARD_H

#ifdef OLED_ENABLE
#    include <stdio.h>
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 1 │ 2 │ 3 │ 4 │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4
    ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;  // Normal orientation
}

bool oled_task_user(void) {
    // Display keyboard name
    oled_write_P(PSTR("temu_sayo"), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Rhythm Game\n"), false);
    oled_write_P(PSTR("Keyboard\n"), false);
    oled_write_P(PSTR("---------\n"), false);
    
    // Display layer info
    oled_write_P(PSTR("Layer: "), false);
    char layer_str[8];
    snprintf(layer_str, sizeof(layer_str), "%d", get_highest_layer(layer_state));
    oled_write(layer_str, false);
    oled_write_P(PSTR("\n"), false);
    
    // Display RGB status
    oled_write_P(PSTR("RGB: "), false);
    oled_write_P(rgblight_is_enabled() ? PSTR("ON ") : PSTR("OFF"), false);
    
    return false;
}
#endif
