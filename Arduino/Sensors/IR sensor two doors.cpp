const int IR_Floor1_Entry = 2; 
const int IR_Floor1_Exit = 3;  
const int IR_Floor2_Entry = 4; 
const int IR_Floor2_Exit = 5;  

const int LED_Floor1 = 6;      
const int LED_Floor2 = 7;      

int countFloor1 = 0;
int countFloor2 = 0;

bool entry1Triggered = false;
bool exit1Triggered = false;
bool entry2Triggered = false;
bool exit2Triggered = false;

void setup() {
  pinMode(IR_Floor1_Entry, INPUT);
  pinMode(IR_Floor1_Exit, INPUT);
  pinMode(IR_Floor2_Entry, INPUT);
  pinMode(IR_Floor2_Exit, INPUT);
  

  pinMode(LED_Floor1, OUTPUT);
  pinMode(LED_Floor2, OUTPUT);


  Serial.begin(9600);
}

void loop() {

  if (digitalRead(IR_Floor1_Entry) == LOW && !entry1Triggered) {
    entry1Triggered = true;
    countFloor1++;
    Serial.println("Vehicle entered Floor 1");
  }
  if (digitalRead(IR_Floor1_Entry) == HIGH) {
    entry1Triggered = false;
  }


  if (digitalRead(IR_Floor1_Exit) == LOW && !exit1Triggered) {
    exit1Triggered = true;
    countFloor1 = max(0, countFloor1 - 1);
    Serial.println("Vehicle exited Floor 1");
  }
  if (digitalRead(IR_Floor1_Exit) == HIGH) {
    exit1Triggered = false;
  }


  if (digitalRead(IR_Floor2_Entry) == LOW && !entry2Triggered) {
    entry2Triggered = true;
    countFloor2++;
    Serial.println("Vehicle entered Floor 2");
  }
  if (digitalRead(IR_Floor2_Entry) == HIGH) {
    entry2Triggered = false;
  }

  if (digitalRead(IR_Floor2_Exit) == LOW && !exit2Triggered) {
    exit2Triggered = true;
    countFloor2 = max(0, countFloor2 - 1);
    Serial.println("Vehicle exited Floor 2");
  }
  if (digitalRead(IR_Floor2_Exit) == HIGH) {
    exit2Triggered = false;
  }

  if (countFloor1 > 0) {
    digitalWrite(LED_Floor1, HIGH);
  } else {
    digitalWrite(LED_Floor1, LOW);
  }

  if (countFloor2 > 0) {
    digitalWrite(LED_Floor2, HIGH);
  } else {
    digitalWrite(LED_Floor2, LOW);
  }


  Serial.print("Floor 1 Count: ");
  Serial.println(countFloor1);
  Serial.print("Floor 2 Count: ");
  Serial.println(countFloor2);
  delay(200); 
}
