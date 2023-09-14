/*
 * button.h
 *
 * Created: 9/21/2022 3:49:52 PM
 *  Author: SHERIF
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
// Including libraries

#include "..\..\MCAL\DIO Drivers\dio.h"
// Driver functions prototypes
void Button_init (uint8_t ledport , uint8_t ledPin);
void Button_read(uint8_t ledport , uint8_t ledPin , uint8_t* value);




#endif /* BUTTON_H_ */