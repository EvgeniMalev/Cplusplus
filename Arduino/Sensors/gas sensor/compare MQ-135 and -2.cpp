const int sensor1 = A0;  
const int sensor2 = A1;  

void setup() {
  Serial.begin(9600);
}

void loop() {

  int gas1 = analogRead(sensor1);
  int gas2 = analogRead(sensor2);

  Serial.print("MQ-2: ");
  Serial.print(gas1);

  Serial.print(" | MQ-135: ");
  Serial.println(gas2);

  if (gas1 > gas2 + 50) {
    Serial.println("Преобладава газ, към който MQ-2 е по-чувствителен.");
  }
  else if (gas2 > gas1 + 50) {
    Serial.println("Преобладава газ, към който MQ-135 е по-чувствителен.");
  }
  else {
    Serial.println("Вероятно смес от сходни газове.");
  }

  delay(1000);
}
