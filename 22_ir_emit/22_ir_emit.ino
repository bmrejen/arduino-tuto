#include <IRremote.h>
#include <IRremoteInt.h>

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  irsend.sendRC5(0x49B0F626, 32); 
  Serial.println("Code sent:");
  delay(5000);
}
