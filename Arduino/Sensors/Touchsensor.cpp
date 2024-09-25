const int touchSensorPin = 2;   
const int ledPin = 13;          

void setup() {
  
  pinMode(touchSensorPin, INPUT);   
  pinMode(ledPin, OUTPUT);          

  Serial.begin(9600);
}

void loop() {
  int touchValue = digitalRead(touchSensorPin);

  Serial.println(touchValue);

  if (touchValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(50);
}
