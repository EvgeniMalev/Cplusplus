const int RED_PIN   = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN  = 11;

void setColor(int r, int g, int b) {
  analogWrite(RED_PIN, r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN, b);
}

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {


  for (int g = 0; g <= 255; g++) {
    setColor(255, g, 0);
    delay(10);
  }


  for (int r = 255; r >= 0; r--) {
    setColor(r, 255, 0);
    delay(10);
  }


  for (int b = 0; b <= 255; b++) {
    setColor(0, 255, b);
    delay(10);
  }

  // Cyan -> Blue
  for (int g = 255; g >= 0; g--) {
    setColor(0, g, 255);
    delay(10);
  }


  for (int r = 0; r <= 255; r++) {
    setColor(r, 0, 255);
    delay(10);
  }

  for (int b = 255; b >= 0; b--) {
    setColor(255, 0, b);
    delay(10);
  }
}
