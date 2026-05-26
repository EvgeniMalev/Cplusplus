#define STEP_PIN 3
#define DIR_PIN 4
#define SENSOR_PIN 2

const int stepsPerRevolution = 200;

bool triggered = false;

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);

  digitalWrite(DIR_PIN, HIGH);

  Serial.begin(9600);
}

void loop() {

  int sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == HIGH && !triggered) {

    Serial.println("Object detected!");

    rotateOneRevolution();

    triggered = true;
  }

  if (sensorState == LOW) {
    triggered = false;
  }
}

void rotateOneRevolution() {

  for (int i = 0; i < stepsPerRevolution; i++) {

    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);

    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }
}
