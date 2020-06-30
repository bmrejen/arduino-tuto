int numBlinks;
String msg = "Type a number: ";
String msg2 = "You typed: ";
int j;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  }
  
void loop() {
  Serial.println(msg);
  while (Serial.available() == 0) { 
      // do nothing, wait for user input
    }
  numBlinks = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(numBlinks);

  for (j=1; j<= numBlinks; j++) {
      digitalWrite(8, HIGH);
      delay(200);
      digitalWrite(8, LOW);
      delay(200);
    }
  }
