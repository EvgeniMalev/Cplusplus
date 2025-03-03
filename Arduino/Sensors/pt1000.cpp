#include <SPI.h>
#include <Adafruit_MAX31865.h>

#define MAX_CS 10  // Chip Select (CS) pin
#define MAX_MISO 12  // Master In Slave Out (MISO)
#define MAX_MOSI 11  // Master Out Slave In (MOSI)
#define MAX_SCK 13   // Serial Clock (SCK)

Adafruit_MAX31865 max31865 = Adafruit_MAX31865(MAX_CS);

#define USE_PT1000 true

void setup() {
  Serial.begin(115200);
  SPI.begin();
  max31865.begin(MAX31865_2WIRE);  
}

void loop() {
  float temperature = max31865.temperature(1000.0, 430.0);  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  delay(1000); 
}
