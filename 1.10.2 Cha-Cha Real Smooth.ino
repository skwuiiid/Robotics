int ledOn = 4, dspee, potentRead, potentPin = A3;

void setup(){
pinMode(potentPin, INPUT);
pinMode(12, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop(){
potentRead = analogRead(potentPin);

if (digitalRead(12) == HIGH) {
digitalWrite(ledOn, HIGH);
}

else {
digitalWrite (ledOn, LOW);
ledOn = ledOn + 1;

if (ledOn == 9) {
ledOn = 4;
}
}

digitalWrite(ledOn, HIGH);
dspee = map(potentRead, 0, 1023, 150, 50);

delay(dspee);
}
