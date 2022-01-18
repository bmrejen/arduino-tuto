#define IRMP_INPUT_PIN 3
#define IRMP_PROTOCOL_NAMES 1
#include <irmpSelectMain15Protocols.h>
#include <irmp.c.h>
IRMP_DATA irmp_data;

void setup() {
  Serial.begin(9600);
  irmp_init();
  }

void loop() {

    if (irmp_get_data(&irmp_data)){
    
    Serial.println("Code received:");
    irmp_result_print(&irmp_data);
    Serial.println(irmp_data.command);
    Serial.println(irmp_data.address);
    }

  delay(500);
}
