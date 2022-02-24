void loop() {
//  for (int i = 0; i <= 180; i++)
//  {
//    myservo.write(i);// sets the servo position according to the scaled value
//    delay(20);// waits for the servo to get there
//  }
//  for (int i = 180; i >= 0; i--)
//  {
//    myservo.write(i);// sets the servo position according to the scaled value
//    delay(20);// waits for the servo to get there
//  }
 
 
 //Seguir al potenciómetro
 
  val = analogRead(analogPin);
  ang = map(val, 0, 1023, 0, 180);
  myservo.write(ang);
  delay(20);

  //Mostrar en LCD
  lcd.clear();
//  V = map(val, 0, 1023, 0, 5);
V = (val*5.0)/1023.0;
  lcd.setCursor(0, 0);
  lcd.print ("Voltaje: ");
  lcd.setCursor(9, 0);
  lcd.print(V);
  lcd.setCursor(2, 1);
  lcd.print ("Angulo: ");
  lcd.setCursor(8, 1);
  lcd.println(ang);
}