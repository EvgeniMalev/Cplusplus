const int pirPin = 2;    
const int ledPin = 13;    

int motionDetected = 0;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Motion Sensor Control Initialized");
}

void loop() {
  motionDetected = digitalRead(pirPin);

  if (motionDetected == HIGH) {
    Serial.println("Motion detected!");
    digitalWrite(ledPin, HIGH); 
  } else {
    Serial.println("No motion");
    digitalWrite(ledPin, LOW); 
  }

  delay(100);
}
