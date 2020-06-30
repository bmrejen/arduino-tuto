#include <Servo.h>

Servo servo;

int Xpin=A0;
int Ypin=A1;
int switchPin=2;
int Xval;
int Yval;
int switchVal;
int servoPin = 7;
float angle;

void setup() {
  Serial.begin(9600);
  pinMode(Xpin, INPUT);
  pinMode(Ypin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH); // to make a pull-up resistor
  servo.attach(servoPin);

}

void loop() {

 // read the joystick movement 
 Xval=analogRead(Xpin);
 Yval=analogRead(Ypin);
 switchVal=digitalRead(switchPin);
 delay(200);

 // print the values
 Serial.print(" X = ");
 Serial.print(Xval);
 Serial.print(" Y = ");
 Serial.print(Yval);
 Serial.print(" Switch= ");
 Serial.println(switchVal);

 // move the servo
 angle = Xval /1023.*180.;
 servo.write(angle);
 Serial.println(angle);
}
