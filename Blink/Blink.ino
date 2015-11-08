int ledPin9 = 9;
int ledPin11 = 11;
int ledPin10 = 10;
int ledPower = 13;

void blink(int pin, int onDuration, int offDuration) {
  digitalWrite(pin, HIGH);
  delay(onDuration);
  digitalWrite(pin, LOW);
  delay(offDuration);
}

void setup() {
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPower, OUTPUT);

  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin10, LOW);
  digitalWrite(ledPin11, LOW);
  
  digitalWrite(ledPower, HIGH);
}

void loop() {
    digitalWrite(ledPin9, LOW);   // green
    digitalWrite(ledPin10, HIGH); // blue
    digitalWrite(ledPin11, HIGH); // red
//  blink(ledPin10, 100, 100);
//  blink(letPin11, 100, 100);
//  blink(ledPin12, 200, 200);
}

