#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

#define TFT_CS     10  // Chip select pin
#define TFT_RST    9   // Reset pin
#define TFT_DC     8   // Data/Command pin

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
    tft.initR(INITR_BLACKTAB);  
    tft.fillScreen(ST77XX_BLACK); 
}

void loop() {
    tft.fillScreen(ST77XX_BLACK);
    tft.setTextColor(ST77XX_RED);
    tft.setTextSize(1);
    tft.setCursor(10, 5);
    tft.print("Hello, World!");
    
    tft.setTextColor(ST77XX_GREEN);
    tft.setCursor(10, 15);
    tft.print("Arduino Display");
    
    tft.fillRect(20, 25, 40, 10, ST77XX_BLUE); 
    tft.fillCircle(60, 15, 5, ST77XX_YELLOW); 
    
    delay(2000); 
}
