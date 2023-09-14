/*
 * LED.c
 *
 * Created: 9/21/2022 3:26:03 PM
 *  Author: SHERIF
 */ 
#include "LED.h"

//function to initialize LEDs
void LED_init(uint8_t ledport , uint8_t ledPin ){
DIO_init(ledport , ledPin , OUT) ;

}
//function to set LED on
void LED_on(uint8_t ledport , uint8_t ledPin ){
	
DIO_write(ledport, ledPin , HIGH) ;	
}

//function to set LED off
void LED_off(uint8_t ledport , uint8_t ledPin ){
	
	DIO_write(ledport, ledPin , LOW) ;
}

//function to toggle LED
void LED_toggle(uint8_t ledport , uint8_t ledPin ){
	DIO_toggle(ledport, ledPin);
	
}