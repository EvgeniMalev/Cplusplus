#include <avr/io.h>
#include <avr/interrupt.h>

#define LED_PIN PB5  

void setup() {
    
    DDRB |= (1 << LED_PIN);

    
    EICRA |= (1 << ISC01);   
    EICRA &= ~(1 << ISC00);  

    EIMSK |= (1 << INT0);    

    sei(); 
}

void loop() {
  
}


ISR(INT0_vect) {
 
    PORTB ^= (1 << LED_PIN);
}
