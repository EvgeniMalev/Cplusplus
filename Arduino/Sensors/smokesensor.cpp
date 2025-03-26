#define MQ2_PIN A0  
#define BUZZER 9    
#define LED 8        
#define THRESHOLD 300  

void setup() {
    pinMode(MQ2_PIN, INPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int smokeLevel = analogRead(MQ2_PIN);  
    Serial.print("Smoke Level: ");
    Serial.println(smokeLevel);

    if (smokeLevel > THRESHOLD) {  
        digitalWrite(BUZZER, HIGH);  
        digitalWrite(LED, HIGH);  
        Serial.println("Warning! Smoke detected!");
    } else {
        digitalWrite(BUZZER, LOW);  
        digitalWrite(LED, LOW);  
    }

    delay(1000);  
}
