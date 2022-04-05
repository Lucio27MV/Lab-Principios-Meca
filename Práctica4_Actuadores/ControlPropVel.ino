// Ejercicio 2.2: Control proporcional de velocidad

int val = 0;
int Pot = A0;

//int Enb = 13;
//int Izq = 12;
//int Der = 11;

void setup()
{
	pinMode(11, OUTPUT); //enb=11
	pinMode(12, OUTPUT); //izq=12
	pinMode(13, OUTPUT); //der=13
	digitalWrite(Izq, LOW);
	digitalWrite(Der, LOW);
}

void loop() {
	val = analogRead(Pot);
	digitalWrite(11, HIGH);
	if(val<512){
		digitalWrite(13, LOW);
		analogWrite(12, (512 - val)/2);
	} else if(val>512){
		digitalWrite(12, LOW);
		analogWrite(13, (val - 512)/2);
	} else{
		digitalWrite(12, LOW);
		digitalWrite(13, LOW);
	}
}