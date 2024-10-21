
volatile unsigned long previousTime = 0;
volatile unsigned long currentTime = 0;
volatile float rpm = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(2, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(2), calculateSpeed, RISING);
}

void loop() {
  Serial.print("Speed: ");
  Serial.print(rpm);
  Serial.println(" RPM");
  
  delay(500);
}

void calculateSpeed() {
  currentTime = millis();  
  unsigned long timeDifference = currentTime - previousTime;  
  
  if(timeDifference > 0) {
    rpm = 60000.0 / timeDifference;  
  }
  
  previousTime = currentTime;
}
