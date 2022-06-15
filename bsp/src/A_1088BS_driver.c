#include "a_1088BS_driver.h"
#include <cmsis_os2.h>
#include "main.h"
#include "stdbool.h"
#include "english_alpha_dot_matrix.h"

/*void dot_matrix_display_string(String input)
{
	for()
}*/

void dot_matrix_display_alpha(char input)
{
dot_matrix_display(english_alphabetic[(uint16_t)input - 97 ]);
}

void dot_matrix_display(bool  input_screen[8][8])
{
	for(int row = 0; row < 9; row++)
	{
		for(int col = 0; col < 9; col++)
		{
			if(input_screen[row][col] != 0)
			{
				dot_matrix_led_on(row , col);
			}
			clear_all_leds();
		}
	}
}

void dot_matrix_led_on(uint16_t x_value , uint16_t y_value)
{
	clear_all_leds();

	uint16_t row_pin =  0x1 << x_value;
	uint16_t col_pin =  0x1 << (y_value + 8);

	HAL_GPIO_WritePin(GPIOB, row_pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, col_pin, GPIO_PIN_RESET);

}

void dot_matrix_led_off(uint16_t y_value , uint16_t x_value)
{
	clear_all_leds();

	uint16_t row_pin =  0x1 << x_value;
	uint16_t col_pin =  0x1 << (y_value + 8);

	HAL_GPIO_WritePin(GPIOB, row_pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, col_pin, GPIO_PIN_SET);

}

void clear_all_leds()
{
	HAL_GPIO_WritePin(GPIOB, 0xFF, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, 0xFF00, GPIO_PIN_SET);
}
