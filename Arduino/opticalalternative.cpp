#include <Arduino.h>

const int sensorPin = A0;
const int ledPin = 13;
const int detectionThreshold = 500;

void setup() {
    Serial.begin(9600);
    pinMode(sensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

void loop() {
    int sensorValue = analogRead(sensorPin);
    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);

    if (sensorValue > detectionThreshold) {
        Serial.println("Object detected!");
        digitalWrite(ledPin, HIGH);
    } else {
        Serial.println("No object detected.");
        digitalWrite(ledPin, LOW);
    }

    delay(500);
}
