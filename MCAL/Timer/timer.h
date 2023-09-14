/*
 * timer.h
 *
 * Created: 10/7/2022 4:48:38 PM
 *  Author: SHERIF
 */ 


#ifndef TIMER_H_
#define TIMER_H_

// including libraries
#include "../../utils/Registers.h"
#include "../../utils/types.h"

// Driver functions prototypes
void Timer_t0_init();
void Timer_t0_delay(float mSec);
void Timer_t2_init();
void Timer_t2_delay(float mSec);

#endif /* TIMER_H_ */