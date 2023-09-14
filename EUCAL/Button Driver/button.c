/*
 * button.c
 *
 * Created: 9/21/2022 3:50:03 PM
 *  Author: SHERIF
 */ 
#include "button.h" 
//function to initialize the button
void Button_init (uint8_t buttonport , uint8_t buttonPin){
	
DIO_init( buttonport , buttonPin , IN ) ; 	
}
//function to read value from button
void Button_read(uint8_t buttonport , uint8_t buttonPin , uint8_t* value){
	
	DIO_read(buttonport , buttonPin , value) ;
}