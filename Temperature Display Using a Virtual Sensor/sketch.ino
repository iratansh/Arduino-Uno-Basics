#include <dht.h> 
#include <LiquidCrystal_I2C.h>

#define dataPin 2
dht DHT;
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
}

void loop() {
  int readData = DHT.read22(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;

  lcd.backlight();
  lcd.clear();

  char buffer[20];
  
  sprintf(buffer, "Temperature: %dC", (int)t);
  lcd.setCursor(0, 0);
  lcd.print(buffer);

  sprintf(buffer, "Humidity: %d%%", (int)h);
  lcd.setCursor(0, 1);
  lcd.print(buffer);

  delay(2000);
}

