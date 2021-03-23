#include "led.h"

void led_init()
{
	HAL_GPIO_WritePin(GPIOA,LED1_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA,LED2_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA,LED3_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA,LED4_Pin, GPIO_PIN_RESET);
	HAL_Delay(1000);
	HAL_GPIO_WritePin(GPIOA,LED4_Pin|LED3_Pin|LED2_Pin|LED1_Pin, GPIO_PIN_SET);
}


void led_station(led_num num,station sta)
{
	switch(num) {
	
		case 0:{
				if(sta == 0)HAL_GPIO_WritePin(GPIOA,LED1_Pin, GPIO_PIN_RESET);
				if(sta == 1)HAL_GPIO_WritePin(GPIOA,LED1_Pin, GPIO_PIN_SET);
				}
			break;
		case 1:{
				if(sta == 0)HAL_GPIO_WritePin(GPIOA,LED2_Pin, GPIO_PIN_RESET);
				if(sta == 1)HAL_GPIO_WritePin(GPIOA,LED2_Pin, GPIO_PIN_SET);
				}
			break;
		case 2:{
				if(sta == 0)HAL_GPIO_WritePin(GPIOA,LED3_Pin, GPIO_PIN_RESET);
				if(sta == 1)HAL_GPIO_WritePin(GPIOA,LED3_Pin, GPIO_PIN_SET);
				}
			break;
		case 3:{
				if(sta == 0)HAL_GPIO_WritePin(GPIOA,LED4_Pin, GPIO_PIN_RESET);
				if(sta == 1)HAL_GPIO_WritePin(GPIOA,LED4_Pin, GPIO_PIN_SET);
				}
			break;			
		default:
			break;
	};
}
