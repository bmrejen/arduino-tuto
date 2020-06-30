int num = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print(num, DEC);
  Serial.print(" = ");
  Serial.print(num, HEX);
  Serial.print(" = ");
  Serial.println(num, BIN);
  num+=1;
  delay(250);
}
