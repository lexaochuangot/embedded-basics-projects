// C++ code
//
const int buttonPin = 2;
const int LED = 3;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
if (digitalRead(buttonPin) == LOW) 
    digitalWrite(LED, HIGH);
else
    digitalWrite(LED, LOW);
}
