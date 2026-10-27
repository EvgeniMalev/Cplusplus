const int pirPin = 2;
const int ledPin = 13;

int pirState = LOW;
int lastState = LOW;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("PIR sensor is starting...");

  // Време за стабилизиране на сензора
  delay(30000);

  Serial.println("PIR sensor is ready.");
}

void loop() {
  pirState = digitalRead(pirPin);

  if (pirState == HIGH) {
    digitalWrite(ledPin, HIGH);

    if (lastState == LOW) {
      Serial.println("Movement detected!");
      lastState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);

    if (lastState == HIGH) {
      Serial.println("No movement.");
      lastState = LOW;
    }
  }

  delay(100);
}
