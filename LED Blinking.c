#define LED_PIN 13
void setup() {
    pinMode(LED_PIN, OUTPUT);
}
void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}

// Notes:
// Connect the resistor to the long end of the LED (anode)
// Connect the short leg of the LED to GND
// The other side of the resistor should be connected to the 5V pin
