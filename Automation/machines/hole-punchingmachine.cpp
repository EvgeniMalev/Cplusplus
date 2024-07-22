#include <Stepper.h>

const int stepsPerRevolution = 200; 
Stepper stepper(stepsPerRevolution, 2, 3, 4, 5); 
const int relayPin = 8;
const int stepDelay = 500; 

void setup() {
  stepper.setSpeed(60); 
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    if (command == "PUNCH") {
      stepper.moveTo(100); 
      delay(stepDelay);
      digitalWrite(relayPin, HIGH); 
      delay(1000); 
      digitalWrite(relayPin, LOW); 
      stepper.moveTo(0); 
      delay(stepDelay);
      Serial.println("Punch operation completed.");
    } else {
      Serial.println("Invalid command.");
    }
  }
}
