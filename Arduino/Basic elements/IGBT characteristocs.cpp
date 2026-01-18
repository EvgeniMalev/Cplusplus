const int pwmPin = 9;                
const int analogGatePin = A0;         
const int analogCollectorPin = A1;    

const int R_G = 220;                  
const int R_C = 1000;                 

void setup() {
  Serial.begin(9600);
  pinMode(pwmPin, OUTPUT);

  Serial.println("PWM,V_GE(V),V_CE(V),I_C(mA)");
}

void loop() {
  for (int pwmValue = 0; pwmValue <= 255; pwmValue += 5) {
    analogWrite(pwmPin, pwmValue);
    delay(100);   

    
    float V_GE = analogRead(analogGatePin) * (5.0 / 1023.0);
    float V_CE = analogRead(analogCollectorPin) * (5.0 / 1023.0);

   
    float I_C = (5.0 - V_CE) / R_C;   

    
    Serial.print(pwmValue);
    Serial.print(",");
    Serial.print(V_GE, 3);
    Serial.print(",");
    Serial.print(V_CE, 3);
    Serial.print(",");
    Serial.println(I_C * 1000.0, 3); 
  }

  delay(2000);  // wait before repeating sweep
}
