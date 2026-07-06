#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const int relay1 = 8;
const int relay2 = 9;
const int relay3 = 10;

float temp1On = 25.0;
float temp2On = 35.0;
float temp3On = 45.0;

void setup() {
  Serial.begin(9600);
  sensors.begin();

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
}

void loop() {
  sensors.requestTemperatures();

  float t1 = sensors.getTempCByIndex(0);
  float t2 = sensors.getTempCByIndex(1);
  float t3 = sensors.getTempCByIndex(2);

  Serial.print("T1=");
  Serial.print(t1);
  Serial.print("  T2=");
  Serial.print(t2);
  Serial.print("  T3=");
  Serial.println(t3);

  if (t1 >= temp1On)
    digitalWrite(relay1, LOW);
  else
    digitalWrite(relay1, HIGH);

  if (t2 >= temp2On)
    digitalWrite(relay2, LOW);
  else
    digitalWrite(relay2, HIGH);

  if (t3 >= temp3On)
    digitalWrite(relay3, LOW);
  else
    digitalWrite(relay3, HIGH);

  delay(1000);
}
