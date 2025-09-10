const int VRx = A0;   
const int VRy = A1;  
const int SW  = 2;    

int xValue = 0;  
int yValue = 0;  
int swState = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  xValue = analogRead(VRx); 
  yValue = analogRead(VRy);
  swState = digitalRead(SW); 

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | SW: ");
  Serial.println(swState == LOW ? "Pressed" : "Released");

  delay(200); 
}
