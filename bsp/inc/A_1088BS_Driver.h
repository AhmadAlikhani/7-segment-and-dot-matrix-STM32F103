#ifndef _7_SEGMENT_DRIVER
#define _7_SEGMENT_DRIVER

#include <stdint.h>
#include <stdbool.h>
/*
x 0------------------->7 row
y
0
|
|
|
|
|
\/
7
*/
// anode pins connected to PB0 to PB7
// cathode pins connected to PB8 to PB15

void dot_matrix_display(bool  input_screen[8][8]);
void dot_matrix_led_on(uint16_t x_value , uint16_t y_value);
void dot_matrix_led_off(uint16_t x_value , uint16_t y_value);
void clear_all_leds();
void dot_matrix_display_alpha(char input);

#endif
