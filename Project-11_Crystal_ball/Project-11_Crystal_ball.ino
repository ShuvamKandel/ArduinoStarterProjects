#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {

  lcd.begin(16,2);
  pinMode(switchPin, INPUT);
  lcd.print("Ask the");
  lcd.setCursor(0,1);
  lcd.print("Crystal Ball!");
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState){
    if (switchState == LOW){
      reply = random(8);
      lcd.clear();
      switch(reply){
        case 0:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Yes");
        break;

        case 1:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Most likely");
        break;   

        case 2:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Certainly");
        break;   

        case 3:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Outlook good");
        break;

        case 4:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Unsure");
        break;

        case 5:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Ask again");
       break;

        case 6:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("Doubtful");
        break;

        case 7:
        lcd.setCursor(0,0);
        lcd.print("The ball says: ");
        lcd.setCursor(0,1);
        lcd.print("No");
        break;
      }
      delay(5000);
      lcd.clear();
      lcd.print("Ask the");
      lcd.setCursor(0,1);
      lcd.print("Crystal Ball!");
    }
  }
  prevSwitchState = switchState;

}
