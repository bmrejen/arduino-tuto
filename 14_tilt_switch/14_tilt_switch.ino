const int pin=2;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
  digitalWrite(pin, HIGH);
}

void loop() {
  //value = digitalRead(pin);
  //Serial.println(value);
  //delay(250);
}
