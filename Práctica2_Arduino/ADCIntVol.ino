int analogPin =A0;
float val = 0.0;
float v=0.0;

void setup() {
	Serial.begin(9600);
	pinMode(13, OUTPUT); 
}

void loop() {
	val=analogRead(analogPin);
	v=(val*5.0)/1023.0;
	analogWrite(13, val/4.0);    //como va de 0 a 1023 y el otro de 0 a 255 lo dividimos
	Serial.print(v);
}
