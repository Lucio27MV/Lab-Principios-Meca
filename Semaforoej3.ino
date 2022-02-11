
void setup() {
  // put your setup code here, to run once:
  //semaforo 1
  pinMode(11, OUTPUT);            //11 verde
  pinMode(LED_BUILTIN, OUTPUT);   //12 amarillo
  pinMode(13, OUTPUT);            //13 rojo
 
  //semaforo 2
  pinMode(3, OUTPUT);            //3 verde
  pinMode(4, OUTPUT);             //4 amarillo
  pinMode(5, OUTPUT);            //5 rojo
}


void loop() {
  //ESTADO 1
 
  //sem 1
  digitalWrite(13,HIGH);   // enciende el led y high es el nivel de voltaje
  delay(5000);                       // se espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led con el voltaje low
  delay(5000);
  digitalWrite(11, LOW);    // apaga el led con el voltaje low
  delay(5000);

  //sem 2
  digitalWrite(5, LOW);   // enciende el led y high es el nivel de voltaje
  delay(5000);                       // se espera un segundo
  digitalWrite(4, LOW);    // apaga el led con el voltaje low
  delay(5000);
  digitalWrite(3, HIGH);    // apaga el led con el voltaje low
  delay(5000);

    //ESTADO 2
 
  //sem 1
  digitalWrite(13, HIGH);   // enciende el led y high es el nivel de voltaje
  delay(1000);                       // se espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led con el voltaje low
  delay(1000);
  digitalWrite(11, LOW);    // apaga el led con el voltaje low
  delay(1000);

  //sem 2
  digitalWrite(5, LOW);   // enciende el led y high es el nivel de voltaje
  delay(1000);                       // se espera un segundo
  digitalWrite(4, HIGH);    // apaga el led con el voltaje low
  delay(1000);
  digitalWrite(3, LOW);    // apaga el led con el voltaje low
  delay(1000);

    //ESTADO 3
 
  //sem 1
  digitalWrite(13, LOW);   // enciende el led y high es el nivel de voltaje
  delay(5000);                       // se espera un segundo
  digitalWrite(LED_BUILTIN, LOW);    // apaga el led con el voltaje low
  delay(5000);
  digitalWrite(11, HIGH);    // apaga el led con el voltaje low
  delay(5000);

  //sem 2
  digitalWrite(5, HIGH);   // enciende el led y high es el nivel de voltaje
  delay(5000);                       // se espera un segundo
  digitalWrite(4, LOW);    // apaga el led con el voltaje low
  delay(5000);
  digitalWrite(3, LOW);    // apaga el led con el voltaje low
  delay(5000);

      //ESTADO 4
 
  //sem 1
  digitalWrite(13, LOW);   // enciende el led y high es el nivel de voltaje
  delay(1000);                       // se espera un segundo
  digitalWrite(LED_BUILTIN, HIGH);    // apaga el led con el voltaje low
  delay(1000);
  digitalWrite(11, LOW);    // apaga el led con el voltaje low
  delay(1000);

  //sem 2
  digitalWrite(5, HIGH);   // enciende el led y high es el nivel de voltaje
  delay(1000);                       // se espera un segundo
  digitalWrite(4, LOW);    // apaga el led con el voltaje low
  delay(1000);
  digitalWrite(3, LOW);    // apaga el led con el voltaje low
  delay(1000);
 }
