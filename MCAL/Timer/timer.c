/*
 * timer.c
 *
 * Created: 10/7/2022 4:48:25 PM
 *  Author: SHERIF
 */ 
#include "timer.h"



void Timer_t0_init(){
	// set timer t0 mode to normal mode
	TCCR0 = 0x00;
	// set initial value of timer t0 to 0
	TCNT0 = 0 ;
}
void Timer_t0_delay(float mSec){
	
	uint32_t OverFlow = 0 ;
	//initialize timer t0
	Timer_t0_init();
	
	while (OverFlow < (mSec*500 / 256.0)){
		//stop after one overflow
		while ((TIFR ^= (1 << 0)) == 0);
		//clear the overflow flag
		TIFR |= (1<<0) ;
		OverFlow++ ;
	}
	//stop timer
	TCCR0 = 0x00;
	
}
void Timer_t2_init(){
	// Set timer t2 mode to normal mode
	TCCR2 = 0x00;
	// set initial value of timer t2 to 0
	TCNT2 = 0 ;
	
}
void Timer_t2_delay(float mSec){

		uint32_t OverFlow = 0 ;
		//initialize timer t2
		Timer_t2_init();
		
		while (OverFlow < (mSec*500 / 256.0)){
			//stop after one overflow
			while ((TIFR ^= (1 << 6)) == 0);
			//clear the overflow flag
			TIFR  |= (1<<6) ;
			OverFlow++ ;
		}
		//stop timer
		TCCR2 = 0x00;
		
	
}