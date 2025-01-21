#define PWM1 9  
#define PWM2 10 
#define FREQ 50 


const int period = 1000000 / (2 * FREQ); 

void setup() {
    pinMode(PWM1, OUTPUT);
    pinMode(PWM2, OUTPUT);
}

void loop() {

    digitalWrite(PWM1, HIGH);
    digitalWrite(PWM2, LOW);
    delayMicroseconds(period); 

    digitalWrite(PWM1, LOW);
    digitalWrite(PWM2, HIGH);
    delayMicroseconds(period); 
}
