#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
bool firstTime = true;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);   // 16 col, 2 rows
  

}

void loop() {
  lcd.setCursor(0,0);
  /*
  if (firstTime == true) {
    lcd.print("LCD WORKING!");
    delay(2000);
    lcd.clear();
    firstTime = false;
    } 
*/
  lcd.print(" HAPPY BIRTHDAY");
  delay(1000);
  lcd.clear();
  /*
  for (int i=1; i<=10; i++) {
  lcd.setCursor(0,1);
  lcd.print(i);    
      delay(500);
      }
  lcd.clear();
  */
  lcd.setCursor(0,1);
  lcd.print("     LILY !");
  delay(1000);
  lcd.clear();
}
