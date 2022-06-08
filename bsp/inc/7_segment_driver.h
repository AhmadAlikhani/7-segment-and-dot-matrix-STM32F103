#ifndef _7_SEGMENT_DRIVER
#define _7_SEGMENT_DRIVER

#include <stdint.h>
/*  GPIO A
 *   __
 *    5
 * |6    |4
 *   __
 *    7
 * |2    |3
 *   __   .
 *    1   0
 */

static uint16_t segment_number_pins[10] = {
0x7E,	 // number 0
0x18,	 // number 1
0xB6,	 // number 2
0xBA,	 // number 3
0xD8,	 // number 4
0xEA,	 // number 5
0xEE,	 // number 6
0x38,	 // number 7
0xFE,	 // number 8
0xFA	 // number 9
};

void set_segment_number(uint32_t value);



#endif
