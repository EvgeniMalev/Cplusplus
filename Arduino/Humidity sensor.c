#include "DHT.h"

#define DHTPIN 2

#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Humidity and Temperature Sensor\n\n");
  

  dht.begin();
}

void loop() {
  delay(2000);
  

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print(temperature);
  Serial.println(" *C");
}
