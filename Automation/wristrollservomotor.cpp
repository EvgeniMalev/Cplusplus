#include <Servo.h>

Servo wristRollServo;

const int servoPin = 9;

int currentAngle = 0;

void setup() {
  wristRollServo.attach(servoPin);
  
  wristRollServo.write(currentAngle);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    int newAngle = Serial.parseInt();
    if (newAngle >= 0 && newAngle <= 180) {
      wristRollServo.write(newAngle);
      
      currentAngle = newAngle;
      
      Serial.print("Wrist roll angle set to: ");
      Serial.println(currentAngle);
    } else {
      Serial.println("Error: Angle out of range (0-180).");
    }
  }

  delay(100);
}
