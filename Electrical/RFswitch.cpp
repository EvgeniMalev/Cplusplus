const int RF_CTRL_PIN = 7;

void setup() {
    pinMode(RF_CTRL_PIN, OUTPUT);
}

void rfOn() {
    digitalWrite(RF_CTRL_PIN, HIGH);
}

void rfOff() {
    digitalWrite(RF_CTRL_PIN, LOW);
}

void loop() {
    rfOn();   
    delay(2000);

    rfOff();  
    delay(2000);
}
