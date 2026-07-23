const int sensorPin = A0;
const int fan1 = 8;
const int fan2 = 9;

float temperature;

void setup() {
  pinMode(fan1, OUTPUT);
  pinMode(fan2, OUTPUT);

  digitalWrite(fan1, LOW);
  digitalWrite(fan2, LOW);

  Serial.begin(9600);
}

void loop() {

  int value = analogRead(sensorPin);

  float voltage = value * (5.0 / 1023.0);

  temperature = voltage * 100.0;   // LM35 -> 10mV/°C

  Serial.print("Температура: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= 40) {
      digitalWrite(fan1, HIGH);
      digitalWrite(fan2, HIGH);
  }
  else if (temperature >= 35) {
      digitalWrite(fan1, HIGH);
      digitalWrite(fan2, LOW);
  }
  else {
      digitalWrite(fan1, LOW);
      digitalWrite(fan2, LOW);
  }

  delay(1000);
}
