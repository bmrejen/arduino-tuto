#include <LiquidCrystal.h>
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

float firstNum;
float secondNum;
float answer;
String op;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);   // 16 col, 2 rows
  Serial.begin(9600);
}

void loop() {
  // Ask for first number
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Type 1st number");
  while (Serial.available() == 0) {}
  firstNum = Serial.parseFloat();
  while (Serial.available() > 0) {
    Serial.read();
  }

  // Ask for second number
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Type 2nd number");
  while (Serial.available() == 0) {}
  secondNum = Serial.parseFloat();
  while (Serial.available() > 0) {
    Serial.read();
  }

  // Ask for operator
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Choose -+/*");
  while (Serial.available() == 0) {}
  op = Serial.readString()[0];
  while (Serial.available() > 0) {
    Serial.read();
  }

  // Choose operator
  if (op == "+") {
    answer = firstNum + secondNum;
  }
  if (op == "-") {
    answer = firstNum - secondNum;
  }
  if (op == "*") {
    answer = firstNum * secondNum;
  }
  if (op == "/") {
    answer = firstNum / secondNum;
  }

  // Clear screen
  lcd.clear();
  lcd.setCursor(0, 0);

  // Print answer
  lcd.print(firstNum);
  lcd.print(op);
  lcd.print(secondNum);
  lcd.print(" = ");
  lcd.print(answer);

  delay(3000);
}
