 #include <IRremote.h>
const int RECV_PIN = 4;

IRrecv irrecv(RECV_PIN);
IRsend irsend;
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {

  if(irrecv.decode(&results)){
    Serial.println("Code received:");
    Serial.println(results.value, HEX); // ABC123

    Serial.print("Decode type: ");
    Serial.println(results.decode_type);  // NEC, PANASONIC

    Serial.print("Bits :");
    Serial.println(results.bits); // 8, 16, 32

    Serial.print("Raw length: ");
    Serial.println(results.rawlen);
    Serial.println("--------------------------------------");
    irrecv.resume();
    }

  delay(500);
}
