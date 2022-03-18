// Ejercicio 2.1: Sentido de giro

void setup() {
	pinMode(6,OUTPUT);	//FORWARD led
	pinMode(7,OUTPUT);	//BACKWARDS LED
	pinMode(3,INPUT);	//FORWARD PUSHBUTTON
	pinMode(2,INPUT);	// BACKWARDS PUSHBUTTON
	pinMode(12,OUTPUT);	// BACWARDS MOTOR
	pinMode(13,OUTPUT);	//FORWARD MOTOR
	pinMode(11,OUTPUT);	//ENABLE
}

void loop() {
	int boton1 =digitalRead(3);	//forward
	int boton2=digitalRead(2);	//backwards
	digitalWrite(11,HIGH);		//ENABLE ON
 
	if(boton1=LOW){
		digitalWrite(6,LOW);
		digitalWrite(13,LOW);
	}

	if(boton1=HIGH){
		digitalWrite(6,HIGH);
		digitalWrite(13,HIGH);
	}

	if(boton2=LOW){
		digitalWrite(7,LOW);
		digitalWrite(12,LOW);
	}

	if(boton1=HIGH){   
		digitalWrite(7,HIGH);
		digitalWrite(12,HIGH);
	}
}