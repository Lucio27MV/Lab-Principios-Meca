int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
// outside leads to ground and +5V
int val = 0; // variable to store the value read
void setup() {
	Serial.begin(9600); // setup serial
	pinMode(13, OUTPUT);
}

void loop() {
	val = analogRead(analogPin); // read the input pin
	float volt;
	volt=(val*5.0)/1023.0;
	if(val>= 613){
		Serial.print ("Aquí si prende con este voltaje ");
		Serial.println(volt); // debug value
		delay(1000);
		digitalWrite(13, HIGH);
	}
	else{
		digitalWrite(13, LOW);
		Serial.print ("Aquí No prende con este voltaje ");
		Serial.println(volt); // debug value
		delay(1000);
	}
}