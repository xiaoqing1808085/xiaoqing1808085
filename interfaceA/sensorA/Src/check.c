#include "check.h"

static void key()
{
	static int sta = 0;
	if(!sta) {
		sta = 1;
		putchar('0');
	}	else {
		sta = 0;
		putchar('1');
	}
}


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{

	switch(GPIO_Pin) {
		case GPIO_PIN_3:{	//KEY
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_RESET);
						//	HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
							key();
							HAL_Delay(3000);
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_SET);
						//	HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);
			};break;
		case GPIO_PIN_5:{	//RAIN
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_RESET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
							putchar('3');
							HAL_Delay(3000);
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_SET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);			
			};break;
		case GPIO_PIN_6:{	//FRARED
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_RESET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
							putchar('5');
							HAL_Delay(3000);
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_SET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);			
			};break;
		case GPIO_PIN_7:{	//SMOKE
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_RESET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_RESET);
							putchar('6');
							HAL_Delay(3000);
							HAL_GPIO_WritePin(GPIOC,LED_Pin,GPIO_PIN_SET);
							HAL_GPIO_WritePin(BUZZER_GPIO_Port, BUZZER_Pin, GPIO_PIN_SET);			
			};break;		
		default:
			break;
	}
}
