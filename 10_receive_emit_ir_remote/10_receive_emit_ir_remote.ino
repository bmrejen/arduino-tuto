#include <IRremote.h>
const int RECV_PIN = 4;
const int switchPin = 7;
int buttonState = 0;
#define codeToSend "Ox25AE7EE0"

IRrecv irrecv(RECV_PIN);
IRsend irsend;
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();

  pinMode(switchPin, INPUT);
}

void loop() {
  /*
  buttonState = !digitalRead(switchPin);
  if (buttonState == HIGH){
    irsend.sendNEC(codeToSend, 32);
    Serial.println("Code sent:");
    Serial.println(codeToSend);
    }
*/
  if(irrecv.decode(&results)){
    Serial.println("Code received:");
    Serial.println(results.value, HEX);
    Serial.println(results.decode_type);
    Serial.println(results.bits);
    irrecv.resume();
    }

  delay(500);
}
