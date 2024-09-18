const int hallSensorPin = 2; 
const int ledPin = 13;        

void setup() {
  pinMode(hallSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(hallSensorPin);
  
  if (sensorValue == LOW) {
    digitalWrite(ledPin, HIGH);
    
    Serial.println("Magnetic field detected!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("No magnetic field detected.");
  }
  
  delay(500);
}
