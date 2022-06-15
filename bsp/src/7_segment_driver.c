

#include "7_segment_driver.h"
#include "main.h"
void set_segment_number(uint32_t value)
{
	  HAL_GPIO_WritePin(GPIOA, 0x00FF , GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOA, segment_number_pins[value], GPIO_PIN_RESET);
}

