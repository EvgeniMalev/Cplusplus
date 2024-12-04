#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define CE_PIN 9
#define CSN_PIN 10

RF24 radio(CE_PIN, CSN_PIN);

const byte address[6] = "00001";

#define LED_PIN_1 5
#define LED_PIN_2 6

struct DataPacket {
  bool button1;
  bool button2;
};

DataPacket receivedData;

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);

  Serial.begin(9600);

  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_LOW);
  radio.startListening();
}

void loop() {
  if (radio.available()) {
    radio.read(&receivedData, sizeof(receivedData)); 

    digitalWrite(LED_PIN_1, receivedData.button1 ? HIGH : LOW); 
    digitalWrite(LED_PIN_2, receivedData.button2 ? HIGH : LOW);
  }
}
