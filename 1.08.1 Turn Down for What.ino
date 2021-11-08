int buttonPin = 12;
int testLED = 13;
int fade = 0;
int number;

void setup() {
pinMode(buttonPin, INPUT);
pinMode(11, OUTPUT);
}

void loop() {

if (digitalRead(buttonPin) == HIGH)
{

if (fade == 0) {
number = 1;
}

if (fade == 255) {
number = -1;
}

fade = fade + number;
analogWrite(11, fade);
delay(10);
}

else
{
analogWrite(11,LOW);
}

}
