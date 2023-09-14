/*
 * dio.c
 *
 * Created: 9/20/2022 4:12:24 PM
 *  Author: SHERIF
 */ 
#include "dio.h"
 
 //function to initialize the DIO port direction IN or OUT
void DIO_init(uint8_t portNumber ,uint8_t pinNumber , uint8_t direction){
	
	switch(portNumber){
		
	case 'A' :
	if (direction == IN)
	DDRA &= ~(1<<pinNumber)	;
	else if (direction == OUT)
	DDRA |= (1<< pinNumber) ;
	break;
	
	case 'B' :
	if (direction == IN)
	DDRB &= ~(1<<pinNumber)	;
	else if (direction == OUT)
	DDRB |= (1<< pinNumber) ;
	break;
	
	case 'C' :
	if (direction == IN)
	DDRC &= ~(1<<pinNumber)	;
	else if (direction == OUT)
	DDRC |= (1<< pinNumber) ;
	break;
	
	case 'D' :
	if (direction == IN)
	DDRD &= ~(1<<pinNumber)	;
	else if (direction == OUT)
	DDRD |= (1<< pinNumber) ;
	break;
	
	}
}

//function to write data on the DIO port HIGH or LOW
void DIO_write(uint8_t portNumber , uint8_t pinNumber , uint8_t value ){
	
	switch(portNumber){
	case 'A' :
	if (value == LOW)
	PORTA &= ~(1<<pinNumber)	;
	else if (value == HIGH)
	PORTA |= (1<< pinNumber) ;
	break;
	
	case 'B' :
	if (value == LOW)
	PORTB &= ~(1<<pinNumber)	;
	else if (value == HIGH)
	PORTB |= (1<< pinNumber) ;
	break;
	
	case 'C' :
	if (value == LOW)
	PORTC &= ~(1<<pinNumber)	;
	else if (value == HIGH)
	PORTC |= (1<< pinNumber) ;
	break;
	
	case 'D' :
	if (value == LOW)
	PORTD &= ~(1<<pinNumber)	;
	else if (value == HIGH)
	PORTD |= (1<< pinNumber) ;
	break;
	
	}
	
}

//function to toggle the value in DIO port between HIGH and LOW 
void DIO_toggle(uint8_t portNumber , uint8_t pinNumber ){
	
	switch(portNumber){
		
		case 'A' :
		PORTA ^= (1<<pinNumber)	;
		
		break;
		
		case 'B' :
		PORTB ^= (1<<pinNumber)	;
		break;
		
		case 'C' :
		PORTC ^= (1<<pinNumber)	;
		break;
		
		case 'D' :
        PORTD ^= (1<<pinNumber)	;		
		break;
		
	}
	
	
	
	
}

//function to read the value on the DIO port HIGH or LOW 
void DIO_read(uint8_t portNumber , uint8_t pinNumber , uint8_t* value){
	
	switch(portNumber){
		
		case 'A' :
		*value = (PINA & (1<<pinNumber))>>pinNumber	;
		
		break;
		
		case 'B' :
		*value = (PINB & (1<<pinNumber))>>pinNumber	;
		break;
		
		case 'C' :
		*value = (PINC&(1<<pinNumber))>>pinNumber;
		break;
		
		case 'D' :
		*value = (PIND & (1<<pinNumber))>>pinNumber	;
		break;
		
	}
	
}
