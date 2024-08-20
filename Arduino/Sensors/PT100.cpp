#include <Arduino.h>

const int adcPin = A0; 
const float R_REF = 1000.0; 
const float A = 3.9083e-3;  
const float B = -5.775e-7;  

float readResistance(int adcValue) {
    float Vout = (adcValue * 5.0) / 1023.0; 
    float R_PT100 = (Vout * R_REF) / (5.0 - Vout); 
    return R_PT100;
}


float resistanceToTemperature(float resistance) {
    float temperature = (-A + sqrt(A*A - 4*B*(1 - resistance/R_REF))) / (2*B);
    return temperature;
}

void setup() {
    Serial.begin(9600);
}

void loop() {
    int adcValue = analogRead(adcPin);  
    float resistance = readResistance(adcValue); 
    float temperature = resistanceToTemperature(resistance); 

    Serial.print("ADC Value: ");
    Serial.print(adcValue);
    Serial.print(" Resistance: ");
    Serial.print(resistance);
    Serial.print(" Ohms, Temperature: ");
    Serial.print(temperature);
    Serial.println(" C");

    delay(1000);  
}
