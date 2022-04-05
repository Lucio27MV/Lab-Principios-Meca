#include<LiquidCrystal.h>    // include the library code:
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);    // initialize the interface pins

void setup() {
	lcd.begin(16, 2);    // set up the LCD's number of columns and rows:
}

void loop() {
//  lcd.setCursor(1, 0);
//  lcd.print("Principios de");// Print a message to the LCD.
//  lcd.setCursor(2, 1);
//  lcd.print("Mecatronica");
//
////Texto parpadee
//  lcd.setCursor(1, 0);
//  lcd.print("Principios de");// Print a message to the LCD.
//  lcd.setCursor(2, 1);
//  lcd.print("Mecatronica");
//  delay(750);
//  lcd.clear();
//  delay(250);

	//Imprimir el nombre
	lcd.clear();
	lcd.setCursor(15,0);
	lcd.print("A");
	lcd.setCursor(15,1);
	lcd.print("B");
	delay(250);

	lcd.clear();
	lcd.setCursor(14,0);
	lcd.print("Al");
	lcd.setCursor(14,1);
	lcd.print("Be");
	delay(250);

	lcd.clear();
	lcd.setCursor(13,0);
	lcd.print("Ale");
	lcd.setCursor(13,1);
	lcd.print("Ber");
	delay(250);

	lcd.clear();
	lcd.setCursor(12,0);
	lcd.print("Alej");
	lcd.setCursor(12,1);
	lcd.print("Berm");
	delay(250);

	lcd.clear();
	lcd.setCursor(11,0);
	lcd.print("Aleja");
	lcd.setCursor(11,1);
	lcd.print("Bermu");
	delay(250);

	lcd.clear();
	lcd.setCursor(10,0);
	lcd.print("Alejan");
	lcd.setCursor(10,1);
	lcd.print("Bermud");
	delay(250);

	lcd.clear();
	lcd.setCursor(9,0);
	lcd.print("Alejand");
	lcd.setCursor(9,1);
	lcd.print("Bermude");
	delay(250);

	lcd.clear();
	lcd.setCursor(8,0);
	lcd.print("Alejandr");
	lcd.setCursor(8,1);
	lcd.print("Bermudez");
	delay(250);

	lcd.clear();
	lcd.setCursor(7,0);
	lcd.print("Alejandro");
	lcd.setCursor(7,1);
	lcd.print("Bermudez");
	delay(250);
}