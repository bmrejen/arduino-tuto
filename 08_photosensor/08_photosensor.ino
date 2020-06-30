int red=13;
int green=12;
int sensor=A0;
int voltage;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {



  voltage=analogRead(sensor);
  Serial.println(voltage);
  if (voltage > 800) {
      digitalWrite(red, HIGH);
    } else {
        digitalWrite(green, HIGH);
      }
  
  delay(250);
  digitalWrite(green, LOW);
  digitalWrite(red,LOW);
}
