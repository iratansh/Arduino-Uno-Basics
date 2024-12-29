int GREEN = 2; // Pin for GREEN
int YELLOW = 3; // Pin for YELLOW
int RED = 4; // Pin for RED

// Makes each color stay on for a certain number of milliseconds
int DELAY_GREEN = 5000; 
int DELAY_YELLOW = 2000;
int DELAY_RED = 5000;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  green_light();
  delay(DELAY_GREEN);

  yellow_light();
  delay(DELAY_YELLOW);

  red_light();
  delay(DELAY_RED);

}

// Make GREEN become high and everything else low
void green_light() {
  digitalWrite(GREEN, HIGH); 
  digitalWrite(YELLOW, LOW); 
  digitalWrite(RED, LOW);
}

// Make YELLOW become high and everything else low
void yellow_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
}

// Make RED become high and everything else low
void red_light() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
}
