const int tempPin = A0;  

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int tempValue = analogRead(tempPin);  
  float millivolts = (tempValue / 1024.0) * 5000; 
  float temperatureC = millivolts / 10.0; 
  
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  
  delay(1000); 
}
