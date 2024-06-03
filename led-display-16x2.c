/*
    Code by : Projects_learner
    Project name : LCE Display 16x2 using Ardino UNO
    Modified Date : 03-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-lcd-16x2-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Print a message to the LCD.
  lcd.print("Circuit Digest!");
  delay(2000);

  // Scroll message to the right
  scrollMessageRight("Circuit Digest!", 150);

  // Clear the display
  lcd.clear();
  lcd.setCursor(6, 0);
  lcd.print("Count!");
}

void loop() {
  // Count from 0 to 9 and display on the LCD
  for (int i = 0; i < 10; i++) {
    lcd.setCursor(8, 1);
    lcd.print(i);
    delay(1000);
  }

  // After counting, clear the count and start over
  lcd.setCursor(8, 1);
  lcd.print(" ");
}

void scrollMessageRight(const String &message, int delayTime) {
  lcd.clear();
  lcd.print(message);

  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayRight();
    delay(delayTime);
  }
}
