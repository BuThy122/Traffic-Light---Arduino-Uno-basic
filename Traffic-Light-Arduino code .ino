const int RED = 13;       // Red LED is connected to pin 13
const int YELLOW = 12;    // Yellow LED is connected to pin 12
const int GREEN = 11;     // Green LED is connected to pin 11

void setup() {
  pinMode(RED, OUTPUT);       // Set Red LED pin as output
  pinMode(YELLOW, OUTPUT);    // Set Yellow LED pin as output
  pinMode(GREEN, OUTPUT);     // Set Green LED pin as output
}

void loop() {

  digitalWrite(GREEN, HIGH);    // Turn Green LED ON
  digitalWrite(YELLOW, LOW);    // Turn Yellow LED OFF
  digitalWrite(RED, LOW);       // Turn Red LED OFF
  delay(5000);                  // Wait for 5 seconds

  digitalWrite(GREEN, LOW);     // Turn Green LED OFF
  digitalWrite(YELLOW, HIGH);   // Turn Yellow LED ON
  digitalWrite(RED, LOW);       // Turn Red LED OFF
  delay(2000);                  // Wait for 2 seconds

  digitalWrite(GREEN, LOW);     // Turn Green LED OFF
  digitalWrite(YELLOW, LOW);    // Turn Yellow LED OFF
  digitalWrite(RED, HIGH);      // Turn Red LED ON
  delay(5000);                  // Wait for 5 seconds
}
