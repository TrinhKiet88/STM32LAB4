/*
 * task.c
 *
 *  Created on: Nov 29, 2024
 *      Author: USER
 */
#include "task.h"

void toggle_led(void) {
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}
