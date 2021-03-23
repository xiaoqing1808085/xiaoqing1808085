#ifndef __LED_H__
#define __LED_H__

#include "main.h"
#include "gpio.h"


typedef enum led {
	key,rain,infrared,smoke
}led_num;

typedef enum sta {
	open,
	close
}station;

extern void led_init(void);
extern void led_station(led_num,station);

#endif
