const int pwmPin = 9;        
const int analogBasePin = A0; 
const int analogCollectorPin = A1; 

const int R_B = 220;  
const int R_C = 1000; 

void setup() {
  Serial.begin(9600);
  pinMode(pwmPin, OUTPUT);
}

void loop() {
  for (int pwmValue = 0; pwmValue <= 255; pwmValue += 5) {
    analogWrite(pwmPin, pwmValue); 

    delay(100); 

    float V_B = analogRead(analogBasePin) * (5.0 / 1023.0);
    float V_CE = analogRead(analogCollectorPin) * (5.0 / 1023.0);

    float I_B = V_B / R_B;
    float I_C = (5.0 - V_CE) / R_C;

    // Print results
    Serial.print("PWM Value: ");
    Serial.print(pwmValue);
    Serial.print(" - V_B: ");
    Serial.print(V_B);
    Serial.print("V, I_B: ");
    Serial.print(I_B * 1e6); 
    Serial.print("µA, V_CE: ");
    Serial.print(V_CE);
    Serial.print("V, I_C: ");
    Serial.print(I_C * 1e3); 
    Serial.print("mA, Beta: ");
    Serial.println(I_C / I_B);
  }

  delay(1000); 
}
