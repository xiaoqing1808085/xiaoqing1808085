#include "motor.h"

void motor_init()
{
	HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN3_Pin|IN4_Pin,GPIO_PIN_RESET);
}

void motor_close()
{
		int i;
		for(i = 0; i <512;i++) {
		HAL_GPIO_WritePin(GPIOA,IN2_Pin|IN3_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN1_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN3_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN2_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN3_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN4_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
	}
	HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN3_Pin|IN4_Pin,GPIO_PIN_RESET);

}


void motor_open()
{
		int i;
		for(i = 0; i <512;i++) {
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN4_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN3_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
		HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN3_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN2_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);						
		HAL_GPIO_WritePin(GPIOA,IN2_Pin|IN3_Pin|IN4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, IN1_Pin, GPIO_PIN_RESET);
	    HAL_Delay(2);
	}
	HAL_GPIO_WritePin(GPIOA,IN1_Pin|IN2_Pin|IN3_Pin|IN4_Pin,GPIO_PIN_RESET);

}





