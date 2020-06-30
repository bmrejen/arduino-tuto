int Xpin=A0;
int Ypin=A1;
int switchPin=2;
int Xval;
int Yval;
int switchVal;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH); // to make a pull-up resistor

}

void loop() {
 Xval=analogRead(Xpin);
 Yval=analogRead(Ypin);
 switchVal=digitalRead(switchPin);
 delay(200);
 Serial.print(" X = ");
 Serial.print(Xval);
 Serial.print(" Y = ");
 Serial.print(Yval);
 Serial.print(" Switch= ");
 Serial.println(switchVal);
}
