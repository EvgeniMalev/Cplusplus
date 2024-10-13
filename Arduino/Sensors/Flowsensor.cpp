volatile int flowPulseCount;  
float flowRate;               
float litersPerHour;
unsigned long oldTime;

int flowSensorPin = 2;  

void setup() {
  Serial.begin(9600);

  pinMode(flowSensorPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, FALLING);

  flowPulseCount = 0;
  flowRate = 0;
  oldTime = millis(); 
}

void loop() {
  unsigned long currentTime = millis();
  
  if (currentTime - oldTime >= 1000) {
    detachInterrupt(digitalPinToInterrupt(flowSensorPin));
    flowRate = (flowPulseCount / 7.5);  
    litersPerHour = flowRate * 60;

    Serial.print("Flow rate: ");
    Serial.print(flowRate, 2);  
    Serial.print(" L/min\t");
    
    Serial.print("Flow in Liters/hour: ");
    Serial.print(litersPerHour, 2); 
    Serial.println(" L/h");

    flowPulseCount = 0;

    oldTime = currentTime;

    attachInterrupt(digitalPinToInterrupt(flowSensorPin), pulseCounter, FALLING);
  }
}

void pulseCounter() {
  flowPulseCount++;
}
