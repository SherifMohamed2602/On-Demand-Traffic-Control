/*
 * LED.h
 *
 * Created: 9/21/2022 3:26:17 PM
 *  Author: SHERIF
 */ 


#ifndef LED_H_
#define LED_H_
// Including libraries

#include "..\..\MCAL/DIO Drivers\dio.h"

// Driver functions prototypes
void LED_init(uint8_t ledport , uint8_t ledPin );
void LED_on(uint8_t ledport , uint8_t ledPin );
void LED_off(uint8_t ledport , uint8_t ledPin );
void LED_toggle(uint8_t ledport , uint8_t ledPin );

#endif /* LED_H_ */