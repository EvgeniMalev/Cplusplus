#include <DHT.h>

#define DHTPIN 2        
#define DHTTYPE DHT11   
#define BUZZER 8        

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, LOW);
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Грешка при четене на сензора!");
    delay(2000);
    return;
  }

  Serial.print("Температура: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature > 35.0) {
    Serial.println("ВНИМАНИЕ! Висока температура!");

    tone(BUZZER, 1000);  
  } else {
    noTone(BUZZER);       
  }

  delay(2000);
}
