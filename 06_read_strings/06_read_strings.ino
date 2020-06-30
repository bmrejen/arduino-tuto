String name;

void setup() {
    Serial.begin(9600);  
}

void loop() {
  Serial.println("Name?");
  while (Serial.available() == 0) {}
  name = Serial.readString();
  Serial.print("Hello ") && Serial.println(name);
}
