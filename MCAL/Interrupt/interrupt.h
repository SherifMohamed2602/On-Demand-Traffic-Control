/*
 * interrupt.h
 *
 * Created: 10/7/2022 5:10:28 PM
 *  Author: SHERIF
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_

// Including libraries

#include "../../utils/types.h"
#include "../../utils/registers.h"

//Interrupts vectors definition
#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3

#define ISR(INT_VECT) void INT_VECT(void) __attribute__ ((signal, used));\
void INT_VECT(void)

// Driver functions prototypes
void Interrupt_init();
void InterruptOFF();



#endif /* INTERRUPT_H_ */