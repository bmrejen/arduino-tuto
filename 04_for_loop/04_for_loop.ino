int redLed = 13;
int greenLed = 8;
int j;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  for (j=1; j<=5; j++) {
      blink(redLed);
    }
  for (j=1; j<=3; j++) {
      blink(greenLed);
    }
}

int blink(int led) {
      digitalWrite(led, HIGH);
      delay(250);
      digitalWrite(led, LOW);
      delay(250);
  }
