#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
bool firstTime = true;
int mydelay=1000;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);   // 16 col, 2 rows
   lcd.setCursor(0,0);
  lcd.print("       3");
  delay(mydelay);
  lcd.clear();
  lcd.print("       2");
  delay(mydelay);
  lcd.clear();
  lcd.print("       1");
  delay(mydelay);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("  GOOD MORNING");
  lcd.setCursor(0,1);
  lcd.print("   HONGYING !");
  delay(mydelay * 2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("    IT'S A   ");
  lcd.setCursor(0,1);
  lcd.print("  SPECIAL DAY !");
  delay(mydelay * 2);
  lcd.clear();

}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("     HAPPY");
  delay(300);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("  
  BIRTHDAY !");
  delay(300);
}
