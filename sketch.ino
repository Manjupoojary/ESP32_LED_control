#define LED_PIN 2      // LED connected to GPIO 2
#define BUTTON_PIN 4   // Button connected to GPIO 4

void setup() {
  pinMode(LED_PIN, OUTPUT);           // Set LED pin as output
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // Set button pin with internal pull-up
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {  // Button pressed (active low)
    digitalWrite(LED_PIN, HIGH);  // Turn LED ON
  } 
  else 
  {
    digitalWrite(LED_PIN, LOW);   // Turn LED OFF
  }
}

