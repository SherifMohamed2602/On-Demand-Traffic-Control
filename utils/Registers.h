/*
 * Registers.h
 *
 * Created: 9/20/2022 4:03:44 PM
 *  Author: SHERIF
 */ 
#include "types.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_


// PORTA Registers 
#define PORTA *((volatile uint8_t*) 0x3B)
#define DDRA *((volatile uint8_t*) 0x3A)
#define PINA *((volatile uint8_t *) 0x39)

// PORTB Registers
#define PORTB *((volatile uint8_t*) 0x38)
#define DDRB *((volatile uint8_t*) 0x37)
#define PINB *((volatile uint8_t *) 0x36)

// PORTC Registers
#define PORTC *((volatile uint8_t*) 0x35)
#define DDRC *((volatile uint8_t*) 0x34)
#define PINC *((volatile uint8_t *) 0x33)

// PORTD Registers
#define PORTD *((volatile uint8_t*) 0x32)
#define DDRD *((volatile uint8_t*) 0x31)
#define PIND *((volatile uint8_t*) 0x30)

//Timer Registers
#define TIFR *((volatile uint8_t*) 0x58)
#define TIMSK *((volatile uint8_t*)0x59)

//Timer t0 Registers
#define TCCR0 *((volatile uint8_t*) 0x53)
#define TCNT0 *((volatile uint8_t*) 0x52)

//Timer t1 Registers
#define TCCR1A *((volatile uint8_t*) 0x4F) 
#define TCCR1B *((volatile uint8_t*) 0x4E) 
#define TCNT1H *((volatile uint8_t*) 0x4D) 
#define TCNT1L *((volatile uint8_t*) 0x4C)

//Timer t2 Registers
#define TCCR2 *((volatile uint8_t*) 0x45) 
#define TCNT2 *((volatile uint8_t*) 0x4)

//Interrupt Registers
#define SREG *((volatile uint8_t*) 0x5F) 
#define MCUCR *((volatile uint8_t*) 0x55) 
#define MCUCSR *((volatile uint8_t*) 0x54) 
#define GICR *((volatile uint8_t*) 0x5B)


#endif /* REGISTERS_H_ */