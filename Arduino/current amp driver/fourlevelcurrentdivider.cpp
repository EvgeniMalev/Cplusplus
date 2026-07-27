const int GREEN_LED = 2;
const int YELLOW_LED = 3;
const int RED_LED = 4;
const int BUZZER = 5;
const int RELAY = 6;

float current;

void setup()
{
    pinMode(GREEN_LED, OUTPUT);
    pinMode(YELLOW_LED, OUTPUT);
    pinMode(RED_LED, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(RELAY, OUTPUT);

    digitalWrite(RELAY, HIGH);   

    Serial.begin(9600);
}

void loop()
{
    current = readCurrent();   

    Serial.print("Current: ");
    Serial.print(current);
    Serial.println(" A");

   
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
    noTone(BUZZER);

    if(current < 5.0)
    {
        
        digitalWrite(GREEN_LED, HIGH);
        digitalWrite(RELAY, HIGH);
    }
    else if(current < 8.0)
    {
        
        digitalWrite(YELLOW_LED, HIGH);
        digitalWrite(RELAY, HIGH);
    }
    else if(current < 10.0)
    {
       
        digitalWrite(RED_LED, HIGH);
        tone(BUZZER, 1000);
        delay(300);
        noTone(BUZZER);
        delay(300);
        digitalWrite(RELAY, HIGH);
    }
    else
    {
        
        digitalWrite(RELAY, LOW);

        digitalWrite(RED_LED, HIGH);
        tone(BUZZER, 2500);

        delay(150);
        digitalWrite(RED_LED, LOW);
        delay(150);
    }

    delay(200);
}

float readCurrent()
{
    
    return analogRead(A0) * 0.02;
}
