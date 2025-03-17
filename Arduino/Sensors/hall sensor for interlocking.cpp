#define SENSOR_1 2
#define SENSOR_2 3
#define SENSOR_3 4
#define SENSOR_4 5
#define SENSOR_5 6
#define LOCK_PIN 7

void setup() {
    pinMode(SENSOR_1, INPUT);
    pinMode(SENSOR_2, INPUT);
    pinMode(SENSOR_3, INPUT);
    pinMode(SENSOR_4, INPUT);
    pinMode(SENSOR_5, INPUT);
    pinMode(LOCK_PIN, OUTPUT);
    
    Serial.begin(9600);
}

void loop() {
    int s1 = digitalRead(SENSOR_1);
    int s2 = digitalRead(SENSOR_2);
    int s3 = digitalRead(SENSOR_3);
    int s4 = digitalRead(SENSOR_4);
    int s5 = digitalRead(SENSOR_5);
    
    if (s1 == LOW && s2 == LOW && s3 == LOW && s4 == LOW && s5 == LOW) {
        Serial.println(" Unlocked - All magnets detected!");
        digitalWrite(LOCK_PIN, HIGH);
    } else {
        Serial.println(" Locked - Waiting for all magnets...");
        digitalWrite(LOCK_PIN, LOW);
    }

    delay(500);
}
