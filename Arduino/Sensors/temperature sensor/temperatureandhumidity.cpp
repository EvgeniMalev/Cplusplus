#include <DHT.h>

#define DHTPIN 2        
#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("Старт на измерването...");
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Грешка при четене на сензора!");
  } else {

    Serial.print("Температура: ");
    Serial.print(temperature);
    Serial.print(" °C");

    Serial.print("   Влажност: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(2000);
}
