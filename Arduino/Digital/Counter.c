const int ledPins[4] = {2, 3, 4, 5};

int counter = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i][j], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 4; i++) {
    if (counter & (1 << i)) {
      digitalWrite(ledPins[i], HIGH); 
    } else {
      digitalWrite(ledPins[i], LOW);  
    }
  }

  counter++;

  if (counter > 15) {
    counter = 0;
  }

  delay(1000);
}
