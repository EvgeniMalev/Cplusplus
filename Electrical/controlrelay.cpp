const int startButtonPin = 2;
const int stopButtonPin = 3;
const int relayPin = 4;
const unsigned long delayTime = 2500;
bool isRunning = false;

void setup() {
  pinMode(startButtonPin, INPUT_PULLUP);
  pinMode(stopButtonPin, INPUT_PULLUP);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);
}

void loop() {
  if (digitalRead(startButtonPin) == LOW && !isRunning) {
    isRunning = true;
    delay(delayTime);
    digitalWrite(relayPin, HIGH);
  }

  if (digitalRead(stopButtonPin) == LOW && isRunning) {
    isRunning = false;
    digitalWrite(relayPin, LOW);
  }
}
