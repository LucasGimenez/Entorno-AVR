#ifndef F_CPU
#define F_CPU 16000000UL
#endif

// Libraries Includes
#include "arduino.h"


// Self Inlude
#include "main.h"

// Variables


char buffer [20];


// User Funtions Prototypes



// Main
int main(void) {
								init();
								serialBegin();
								pinMode(B,5,OUTPUT);
								


// Main Loop

								while (1) {
/*digitalWrite(B,5,HIGH);
//_delay_ms(1);
digitalWrite(B,5,LOW);
//_delay_ms(1);
*/
PORTB = 1<<5;
_delay_ms(250);
PORTB = 0<<5;
_delay_ms(25);


								}
								return 0;

}

// User Funtiones
