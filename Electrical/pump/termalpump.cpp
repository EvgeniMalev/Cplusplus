const int relayPin = 8;      
const int thermalPin = 2;    

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(thermalPin, INPUT_PULLUP);

  digitalWrite(relayPin, LOW); 
  Serial.begin(9600);
}

void loop() {

 
  if (digitalRead(thermalPin) == HIGH) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Помпата работи");
  }
  else {
    digitalWrite(relayPin, LOW);  
    Serial.println("ПРЕТОВАРВАНЕ! Помпата е спряна.");
  }

  delay(500);
}
