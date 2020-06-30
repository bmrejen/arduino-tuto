#include <Servo.h>
int servoPin=9;
int servoPos=0;

Servo myservo;
void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);

}

void loop() {
  Serial.println("Which position?");
  while (Serial.available() ==0){
    // do nothing
  }
    servoPos=Serial.parseInt();
    Serial.print("Position is:");
    Serial.println(servoPos);
    myservo.write(servoPos);
}
