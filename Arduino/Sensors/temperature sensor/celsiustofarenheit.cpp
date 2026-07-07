const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("LM35 Temperature Sensor");
  Serial.println("------------------------");
}

void loop() {

  int sensorValue = analogRead(sensorPin);


  float voltage = sensorValue * (5.0 / 1023.0);


  float celsius = voltage * 100.0;


  float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;


  Serial.print("Temperature: ");
  Serial.print(celsius, 2);
  Serial.print(" °C  |  ");
  Serial.print(fahrenheit, 2);
  Serial.println(" °F");

  delay(1000); 
}
