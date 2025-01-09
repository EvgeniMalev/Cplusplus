const int startButtonPin = 2;  
const int stopButtonPin = 3;   
const int contactorPin = 4;    
const int overloadPin = 5;     

bool motorRunning = false;

void setup() {

  pinMode(startButtonPin, INPUT_PULLUP); 
  pinMode(stopButtonPin, INPUT_PULLUP);  
  pinMode(contactorPin, OUTPUT);         
  pinMode(overloadPin, INPUT_PULLUP);    

  digitalWrite(contactorPin, LOW);
  Serial.begin(9600);
}

void loop() {
 
  if (digitalRead(startButtonPin) == LOW && digitalRead(overloadPin) == HIGH) {
    motorRunning = true;  
    digitalWrite(contactorPin, HIGH); 
    Serial.println("Motor started.");
    delay(300); 
  }

  if (digitalRead(stopButtonPin) == LOW) {
    motorRunning = false; 
    digitalWrite(contactorPin, LOW);  
    Serial.println("Motor stopped.");
    delay(300);
  }


  if (digitalRead(overloadPin) == LOW) {
    motorRunning = false; 
    digitalWrite(contactorPin, LOW);  
    Serial.println("Overload detected! Motor stopped.");
  }

  delay(10);
}
