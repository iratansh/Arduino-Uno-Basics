#define LED_PIN 3
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
// For Making the LED remain on:
// Connect the resistor to the long end of the LED (anode)
// Connect the short leg of the LED to GND
// The other side of the resistor should be connected to the 5V pin


// For Making the LED flicker:
// Connect the resistor to the long end of the LED (anode)
// Connect the short leg of the LED to GND on the top of the uno
// The other side of the resistor should be connected to Pin 3
