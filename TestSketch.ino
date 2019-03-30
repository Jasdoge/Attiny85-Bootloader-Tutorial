bool high = false;
void setup(){
	pinMode(1, OUTPUT);
}

void loop(){
	high = !high;
	digitalWrite(1, high);
	delay(1000);
}