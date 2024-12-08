const int zeroCrossingPin = 2;  
const int thyristorGatePin = 3; 

volatile bool zeroCrossDetected = false;
int firingAngle = 90;  
const int pulseWidth = 100; 

void setup() {
  pinMode(zeroCrossingPin, INPUT);
  pinMode(thyristorGatePin, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(zeroCrossingPin), zeroCrossingISR, RISING);

  digitalWrite(thyristorGatePin, LOW);
}

void loop() {
  if (zeroCrossDetected) {
    zeroCrossDetected = false;

    int delayTime = angleToDelay(firingAngle);

    delayMicroseconds(delayTime);

    fireThyristor();
  }
}

void zeroCrossingISR() {
  zeroCrossDetected = true;
}

int angleToDelay(int angle) {

  const float cycleTime = 10000.0; 
  return (int)(angle / 180.0 * (cycleTime / 2.0));
}

void fireThyristor() {
  digitalWrite(thyristorGatePin, HIGH);
  delayMicroseconds(pulseWidth);       
  digitalWrite(thyristorGatePin, LOW); 
}
