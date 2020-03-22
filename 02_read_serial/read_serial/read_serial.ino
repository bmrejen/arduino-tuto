int j=1;
int waitT = 750;
String myString = "j= ";

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.print(myString);
  Serial.println(j);
  j=j+1;
  delay(waitT);

}
