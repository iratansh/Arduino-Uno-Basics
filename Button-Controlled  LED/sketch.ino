#define LED_PIN 3
void setup() {
    pinMode(LED_PIN, OUTPUT);
}
void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(1000); 
    // digitalWrite(LED_PIN, LOW);
    // delay(1000);
}

// Notes: Add a button before the resistor and connect it to pin 3
// Current will continue to flow into the LED while the button is pressed