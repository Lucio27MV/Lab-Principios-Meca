void setup()
{
  pinMode(13, OUTPUT); //verde semaforo 1
  pinMode(12, OUTPUT);//amarillo semaforo 1
  pinMode(11, OUTPUT);// ROJO semaforo 1
  pinMode(10, OUTPUT);//verde semaforo 2
  pinMode(9, OUTPUT);//amarillo semaforo 2
  pinMode(8, OUTPUT);//rojo semaforo 2
}

void loop()
{
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(5000);
 
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1000);
 
  digitalWrite(11, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(5000);
 
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
