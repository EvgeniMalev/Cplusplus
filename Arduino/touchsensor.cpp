#include <Arduino.h>

const int touchSensorPin = 7; 

void setup() {
    pinMode(touchSensorPin, INPUT);

    Serial.begin(9600);
    Serial.println("Touch sensor test initialized.");
}

void loop() {
    int touchState = digitalRead(touchSensorPin);

    if (touchState == HIGH) {
        Serial.println("Touch detected!");
    } else {
        Serial.println("No touch detected.");
    }

    delay(500);
}
