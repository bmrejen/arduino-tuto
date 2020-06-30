float voltage;
float V2;

void setup()
{
  pinMode(A7, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  voltage = analogRead(A7);
  V2 = voltage/1023.*255.;
  
  Serial.println(V2);
  analogWrite(13, V2);
  delay(1000);
}
