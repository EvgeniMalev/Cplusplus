#include <Wire.h>
#include "Adafruit_TCS34725.h"

Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_700MS, TCS34725_GAIN_1X);

void setup() {
  Serial.begin(9600);

  if (tcs.begin()) {
    Serial.println("TCS34725 found");
  } else {
    Serial.println("No TCS34725 found. Check your connections.");
    while (1); 
  }
}

void loop() {
  uint16_t r, g, b, c; 
  float colorTemp, lux;

  tcs.getRawData(&r, &g, &b, &c);

  colorTemp = tcs.calculateColorTemperature(r, g, b);
  lux = tcs.calculateLux(r, g, b);

  Serial.println("Raw Data:");
  Serial.print("R: "); Serial.print(r);
  Serial.print(" G: "); Serial.print(g);
  Serial.print(" B: "); Serial.print(b);
  Serial.print(" C: "); Serial.println(c);

  Serial.print("Color Temperature: "); Serial.print(colorTemp);
  Serial.println(" K");
  Serial.print("Lux: "); Serial.println(lux);
  Serial.println();

  delay(1000); 
}
