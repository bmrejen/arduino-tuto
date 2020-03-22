int readPin = A2;
int readVal;
float V2;
int waitTime = 250;

void setup() {
  Serial.begin(9600);

}

void loop() {
  readVal = analogRead(readPin);
  V2 = 5./1023.*readVal;
  Serial.println(V2);
  delay(waitTime);
}
