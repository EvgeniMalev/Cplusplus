const int relayPin = 7;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  digitalWrite(relayPin, HIGH);
  delay(1000); 

  digitalWrite(relayPin, LOW);
  delay(1000); 
}
