/*
 * app.c
 *
 * Created: 10/7/2022 3:33:36 PM
 *  Author: SHERIF
 */ 
#include "app.h"

uint8_t carState ;
//function to blink yellow car led for 5 sec
void CarBlinkY(){
	for (uint8_t i = 0 ; i < 10 ; i++){
		LED_toggle('A' , 1) ;
		Timer_t0_delay(500);
	}
	LED_off('A', 1);
}
//function to blink yellow pedestrian led for 5 sec
void PedestrianBlinkY(){
	for (uint8_t i = 0 ; i < 10 ; i++){
		LED_toggle('B' , 1) ;
		Timer_t0_delay(500);
	}
	LED_off('B', 1);
}
//function to blink yellow led of both car and pedestrian for 5 sec

void BothBlinkY(){
	for (uint8_t i = 0 ; i < 10 ; i++){
		LED_toggle('A' , 1) ;
		LED_toggle('B' , 1) ;
		Timer_t0_delay(500);
	}
	LED_off('A', 1);
	LED_off('B', 1);
}
//initializing my peripherals 
void App_init(){
	
	//initialize car LEDs
	LED_init('A', 0);
	LED_init('A', 1);
	LED_init('A', 2);

	//initialize pedestrian LEDs
	LED_init('B', 0);
	LED_init('B', 1);
	LED_init('B', 2);

	//initialize the button
	Button_init('D', 2);
	
	//initialize interrupt 0
	
	Interrupt_init();
	
}
void NormalMode(){
  
  //set green car led on for 5 sec then set it off
  carState = GREEN ;
  LED_on('A', 2);
  Timer_t0_delay(5000);
  LED_off('A', 2) ;
  
  // blink car yellow led
  carState = YELLOW_TO_RED ;
  CarBlinkY();
  
  //set red car led on for 5 sec then set it off
  carState = RED ;
  LED_on('A' , 0);
  Timer_t0_delay(5000);
  LED_off('A', 0);
  // blink car yellow led
  carState = YELLOW_TO_GREEN ;
  CarBlinkY();
 	
}


void PedestrianMode(){
	// set interrupt off for ignoring double presses
   InterruptOFF();
   
   //check if car led is red or green/yellow
     if (carState == RED)
	 //set green pedestrian led on for 5 sec then set it off
	 {LED_on('B' , 2);
	 Timer_t2_delay(5000);}
	 
	 else {
		 //set red pedestrian led and blink both yellow LEDs for 5 sec
		 LED_on('B' , 0);
		 LED_off('A' , 1);
		 
		BothBlinkY();
		//set both red pedestrian led and green car led off , and set both green pedestrian led and red car led on for 5 sec  
		LED_off('B' , 0);
		LED_off('A' , 2);
		LED_on('A' , 0);
		LED_on('B' , 2);
		Timer_t2_delay(5000);
		 
	 }
	 	 //set red car led off and blink both yellow LEDs 
 LED_off('A' , 0);
 BothBlinkY() ;
 //set red pedestrian led and green car led on
 LED_off('B' , 2);
 LED_on('B', 0);

// switch from pedestrian mode to normal mode
 switch (carState) {
	 // Interrupted while green state
	 case GREEN:
	 LED_on('A', 2);
	 Timer_t2_delay(5000);
	 LED_off('B', 0);
	 break;

	 // Interrupted while yellow to red state
	 case YELLOW_TO_RED:
	  LED_on('A', 2);
	 Timer_t2_delay(5000);
	 LED_off('B', 0);
	 LED_off('A', 2);
	 CarBlinkY();
	 break;

	 // Interrupted while red state
	 case RED:
	  LED_on('A', 2);
	 Timer_t2_delay(5000);
	  LED_off('A', 2);
	  LED_off('B', 0);
	 CarBlinkY();
	 LED_on('A', 0);
	 Timer_t2_delay(5000);
	 break;

	 // Interrupted while yellow to green state
	 case YELLOW_TO_GREEN: LED_off('B', 0);
	 break;
	 
 }
 // reinitialize interrupt 0 
 Interrupt_init();
}

// external interrupt
ISR (EXT_INT_0) {
	PedestrianMode();
}