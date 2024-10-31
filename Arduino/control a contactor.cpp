const int relayPin = 7;     
const int buttonPin = 2;   

bool contactorState = false;  
bool lastButtonState = LOW;   

void setup() {
  pinMode(relayPin, OUTPUT);     
  pinMode(buttonPin, INPUT_PULLUP); 
  digitalWrite(relayPin, LOW);  
  Serial.begin(9600);            
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState && buttonState == HIGH) {

    contactorState = !contactorState;
    digitalWrite(relayPin, contactorState ? HIGH : LOW); 

    Serial.print("Contactor turned ");
    Serial.println(contactorState ? "ON" : "OFF");
  }

  lastButtonState = buttonState;

  delay(50); 
}
