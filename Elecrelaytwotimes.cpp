const int relayPin = 8; 


unsigned long onTime = 5000;  
unsigned long offTime = 3000; 

unsigned long previousMillis = 0;
bool relayState = false;

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW); 
}

void loop() {
  unsigned long currentMillis = millis();

  if (relayState && (currentMillis - previousMillis >= onTime)) {
    
    relayState = false;
    previousMillis = currentMillis;
    digitalWrite(relayPin, LOW);
  } 
  else if (!relayState && (currentMillis - previousMillis >= offTime)) {
  
    relayState = true;
    previousMillis = currentMillis;
    digitalWrite(relayPin, HIGH);
  }
}
