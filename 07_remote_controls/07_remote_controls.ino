#include <IRremote.h>
float value;
 
// Define sensor pin
const int RECV_PIN = 7;
 
// Define IR Receiver and Results Objects
// IRrecv irrecv(RECV_PIN);
// decode_results results;
 
 
void setup(){
  // Serial Monitor @ 9600 baud
  Serial.begin(9600);
  pinMode(RECV_PIN, INPUT);
  // Enable the IR Receiver
  // irrecv.enableIRIn();
}
 
void loop(){
  value = digitalRead(RECV_PIN);
  Serial.println(value);
  delay(500);
//    if (irrecv.decode(&results)){
  //      Serial.println(results.value, HEX);
    //    irrecv.resume();
  //}

}
