int piezo=13;
int sensor=A0;
float voltage;

void setup() {
  pinMode(piezo, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(piezo, HIGH);
  voltage=analogRead(sensor);
  
  Serial.println(voltage);
  delay(250);

}
