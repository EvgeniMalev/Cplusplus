const byte sensorPin = A0;

const unsigned long interval = 600000UL;   
unsigned long previousMillis = 0;

const byte samples = 10;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;

    float sumTemperature = 0;

    for (int i = 0; i < samples; i++)
    {
      int adcValue = analogRead(sensorPin);

      float voltage = adcValue * (5.0 / 1023.0);

      float temperature = voltage * 100.0;

      sumTemperature += temperature;

      delay(100); 
    }

    float averageTemperature = sumTemperature / samples;

    Serial.print("Средна температура: ");
    Serial.print(averageTemperature, 2);
    Serial.println(" °C");
  }
}
