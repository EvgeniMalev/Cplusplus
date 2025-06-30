const int vibrationPin = 2;
const int ledPin = 13;  

void setup() {
  pinMode(vibrationPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Vibration Sensor Test");
}

void loop() {
  int vibrationState = digitalRead(vibrationPin);

  if (vibrationState == LOW) {
   
    digitalWrite(ledPin, HIGH);
    Serial.println("Vibration detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);  
}
