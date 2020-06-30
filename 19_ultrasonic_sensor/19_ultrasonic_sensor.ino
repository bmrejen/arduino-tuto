int signalPin = 7;
float duration;

void setup() {
Serial.begin(9600);
}

void loop() {
  pinMode(signalPin, OUTPUT);
  digitalWrite(signalPin, LOW);
  delayMicroseconds(2);
  digitalWrite(signalPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(signalPin, LOW);

  pinMode(signalPin, INPUT);
  duration=pulseIn(signalPin, HIGH);
  Serial.println(duration / 58);
  delay(500);

}
