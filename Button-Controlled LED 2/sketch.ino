#define LED_PIN 13       // Pin for the LED
#define BUTTON_PIN 2     // Pin for the button

bool ledState = false;   // LED state 
bool buttonPressed = false; // Tracks button press state
unsigned long lastDebounceTime = 0; // Time of the last button state change
const unsigned long debounceDelay = 50; // Debounce delay in milliseconds

void setup() {
  pinMode(LED_PIN, OUTPUT);    // Set LED pin as OUTPUT
  pinMode(BUTTON_PIN, INPUT);  // Set button pin as INPUT
  digitalWrite(LED_PIN, LOW);  // Start with LED off
}

void loop() {
  // Read the current state of the button
  int buttonState = digitalRead(BUTTON_PIN);

  // Check if the button state has changed
  if (buttonState == HIGH && !buttonPressed) {
    unsigned long currentTime = millis();
    if (currentTime - lastDebounceTime > debounceDelay) {
      // Toggle the LED state
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState ? HIGH : LOW);

      // Update debounce and button state
      lastDebounceTime = currentTime;
      buttonPressed = true;
    }
  }

  // Reset buttonPressed when the button is released
  if (buttonState == LOW && buttonPressed) {
    buttonPressed = false;
  }
}
