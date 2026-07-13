#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

DeviceAddress sensor0, sensor1, sensor2, sensor3;

void setup()
{
  Serial.begin(115200);

  sensors.begin();

  if (sensors.getDeviceCount() < 4)
  {
    Serial.println("Не са открити 4 сензора!");
    while (1);
  }

  sensors.getAddress(sensor0, 0);
  sensors.getAddress(sensor1, 1);
  sensors.getAddress(sensor2, 2);
  sensors.getAddress(sensor3, 3);

  sensors.setResolution(sensor0, 12);
  sensors.setResolution(sensor1, 12);

  sensors.setResolution(sensor2, 9);
  sensors.setResolution(sensor3, 9);

  Serial.println("Сензорите са инициализирани.");
}

void loop()
{
  sensors.requestTemperatures();

  Serial.print("Sensor 0 (12 bit): ");
  Serial.print(sensors.getTempC(sensor0));
  Serial.println(" C");

  Serial.print("Sensor 1 (12 bit): ");
  Serial.print(sensors.getTempC(sensor1));
  Serial.println(" C");

  Serial.print("Sensor 2 (9 bit): ");
  Serial.print(sensors.getTempC(sensor2));
  Serial.println(" C");

  Serial.print("Sensor 3 (9 bit): ");
  Serial.print(sensors.getTempC(sensor3));
  Serial.println(" C");

  Serial.println("------------------------");

  delay(1000);
}
