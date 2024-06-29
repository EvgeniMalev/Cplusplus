#include <avr/io.h>
#include <util/delay.h> 

void pwm_init() {
    DDRD |= (1 << PD6);
    TCCR0A |= (1 << WGM00) | (1 << WGM01); 
    TCCR0A |= (1 << COM0A1);               
    
    TCCR0B |= (1 << CS00) | (1 << CS01);
    
    OCR0A = 0;
}


void set_pwm_duty_cycle(uint8_t duty_cycle) {
    OCR0A = duty_cycle; 
}

int main() {

    pwm_init();
    
    while (1)  {
  
        for (uint8_t duty = 0; duty < 255; duty++)
        {
            set_pwm_duty_cycle(duty);
            _delay_ms(20); 
        }
    }

    return 0;
}
