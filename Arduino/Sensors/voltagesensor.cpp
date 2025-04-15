const int voltagePin = A0;
const int sampleCount = 1000; 
const float referenceVoltage = 5.0; 
const float calibrationFactor = 230.0 / 2.0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  float voltageRMS = getVoltageRMS();
  float acVoltage = voltageRMS * calibrationFactor;
  
  Serial.print("AC Voltage: ");
  Serial.print(acVoltage);
  Serial.println(" V");

  delay(1000);
}

float getVoltageRMS() {
  long sum = 0;
  for (int i = 0; i < sampleCount; i++) {
    int sensorValue = analogRead(voltagePin);
    float voltage = (sensorValue * referenceVoltage) / 1023.0;
    float centered = voltage - (referenceVoltage / 2.0); 
    sum += centered * centered;
  }
  float mean = sum / (float)sampleCount;
  return sqrt(mean);
}
