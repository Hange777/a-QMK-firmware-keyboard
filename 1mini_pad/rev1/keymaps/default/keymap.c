#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		RGB_MODE_FORWARD, KC_PSLS, KC_PAST, KC_PMNS, 
		KC_P7, KC_P8, KC_P9, KC_PPLS, 
		KC_P4, KC_P5, KC_P6, 
		KC_P1,KC_P2, KC_P3, KC_PENT, 
		KC_P0, KC_PDOT),
	
    };


led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0,  1, 2, 3 },
  { 4,  5, 6, 7 },
  { 8,  9,10, NO_LED },
  {11,12,13,14 },
  {15,NO_LED,16,NO_LED }
}, {
  // LED Index to Physical Position
  { 0,  0 }, { 75,  0 }, { 149,  0 }, { 224,  0 },
  { 0,  56 }, { 75,  56 }, { 149,  56 }, { 224,  56 },
  { 0,  112 }, { 75,  112 }, { 149,  112 }, 
  { 0,  168 }, { 75,  168 }, { 149,  168 }, { 224,  168 },
  { 0,  224 },                    { 149,  224 }
}, {
  // LED Index to Flag
  4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4
} };


