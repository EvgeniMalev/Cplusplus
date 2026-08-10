const int mq2Pin = A0;     
const int ledPin = 13;     

int gasValue = 0;
const int threshold = 400; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  gasValue = analogRead(mq2Pin);

  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    digitalWrite(ledPin, HIGH);
    Serial.println("WARNING: Gas detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}
