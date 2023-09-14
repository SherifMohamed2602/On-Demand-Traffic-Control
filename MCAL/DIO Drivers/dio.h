/*
 * dio.h
 *
 * Created: 9/20/2022 4:13:16 PM
 *  Author: SHERIF
 */ 


#ifndef DIO_H_
#define DIO_H_
// Including libraries
#include "..\..\utils\types.h"
#include "..\..\utils\Registers.h"

// direction and value defines
#define IN 0
#define OUT 1
#define LOW 0
#define HIGH 1
// Driver functions prototypes
void DIO_init(uint8_t portNumber , uint8_t pinNumber ,uint8_t direction);
void DIO_write(uint8_t portNumber , uint8_t pinNumber , uint8_t value );
void DIO_toggle(uint8_t portNumber , uint8_t pinNumber );
void DIO_read(uint8_t portNumber , uint8_t pinNumber , uint8_t* value);



#endif /* DIO_H_ */