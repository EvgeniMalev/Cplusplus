#include <SPI.h>
#include <SD.h>

const int chipSelect = 10;
const int sensorPin = A0;

File dataFile;

void setup() {

  Serial.begin(9600);

  if (!SD.begin(chipSelect)) {
    Serial.println("SD Card initialization failed!");
    while (1);
  }

  Serial.println("SD Card Ready");

  dataFile = SD.open("temp.csv", FILE_WRITE);

  if (dataFile) {
    dataFile.println("Time(s),Temperature(C)");
    dataFile.close();
  }
}

void loop() {

  int sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * (5.0 / 1023.0);

  float temperatureC = (voltage - 0.5) * 100.0;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  dataFile = SD.open("temp.csv", FILE_WRITE);

  if (dataFile) {

    dataFile.print(millis() / 1000);
    dataFile.print(",");
    dataFile.println(temperatureC);

    dataFile.close();

  } else {
    Serial.println("Error opening file");
  }

  delay(1000);
}
