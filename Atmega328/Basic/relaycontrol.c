#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void pwm_init(void) {
    DDRB |= (1 << PB1);

    TCCR1A |= (1 << WGM10) | (1 << WGM11);
    TCCR1B |= (1 << WGM12);

    TCCR1A |= (1 << COM1A1);

    TCCR1B |= (1 << CS11) | (1 << CS10);
}

void set_pwm_duty(uint16_t duty) {
    if (duty > 1023) duty = 1023;
    OCR1A = duty;
}

int main(void) {
    pwm_init();

    while (1) {
        for (uint16_t i = 0; i <= 1023; i += 10) {
            set_pwm_duty(i);
            _delay_ms(5);
        }

        for (uint16_t i = 1023; i >= 10; i -= 10) {
            set_pwm_duty(i);
            _delay_ms(5);
        }
    }
}
