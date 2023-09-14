/*
 * app.h
 *
 * Created: 10/7/2022 3:33:49 PM
 *  Author: SHERIF
 */ 


#ifndef APP_H_
#define APP_H_

// car state enum
enum States {
	GREEN,
	YELLOW_TO_RED,
	RED,
	YELLOW_TO_GREEN
};

// including libraries 
#include "..\EUCAL\Button Driver\button.h"
#include "..\EUCAL\LED Driver\LED.h"
#include "..\MCAL\Interrupt\interrupt.h"
#include "..\MCAL\Timer\timer.h"

// APP function prototypes
void App_init();
void NormalMode();


#endif /* APP_H_ */