const int doorSwitchPin = 2;
const int bulbPin = 9;       

void setup() {
  pinMode(doorSwitchPin, INPUT_PULLUP); 
  pinMode(bulbPin, OUTPUT);

  digitalWrite(bulbPin, LOW);
}

void loop() {

  int doorState = digitalRead(doorSwitchPin);

  if (doorState == HIGH) {
    digitalWrite(bulbPin, HIGH); 
  } 
  else {
    digitalWrite(bulbPin, LOW); 
  }
}
