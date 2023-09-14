#include "interrupt.h"

void Interrupt_init(void) {
//enable global interrupt
    SREG |= (1 << 7) ;
	// choose the external interrupt sense 
    MCUCR |= (1 << 0);
	MCUCR |= (1 << 1);
	
	//enable interrupt 0
	GICR |=( 1 << 6 ) ;
}

void InterruptOFF(){
	//disable global interrupt
	SREG &= ~(1 << 7) ;
	//disable interrupt 0
	GICR &= ~( 1 << 6 ) ;
	
}