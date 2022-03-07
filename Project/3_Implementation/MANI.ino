
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 3, en = 2, d4 = 7, d5 = 6, d6 = 5, d7 = 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);


  pinMode(A4,INPUT);  //sensor
  pinMode(9,OUTPUT);  //LED
  pinMode(A2,OUTPUT); //Alarm
  pinMode(A5,OUTPUT); //servo
  analogWrite(A5,0);
}

void loop() {


  if(analogRead(A4)>200){//0 to 1024
  digitalWrite(9,HIGH);
  analogWrite(A2,HIGH);
  analogWrite(A5,1024);
    // Print a message to the LCD.
    lcd.clear();
  lcd.print("FIRE DETECTED!!!");
  delay(10);
    
  }
  else {
      digitalWrite(9,LOW);
  analogWrite(A2,LOW);
  analogWrite(A5,0);
    // Print a message to the LCD.
    lcd.clear();
  lcd.print("YOU ARE SAFE");
  delay(10);

  }
  
}
