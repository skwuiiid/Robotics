int buttonPin = 2;
int testLED = 13;

void setup() {
pinMode(buttonPin, INPUT);
pinMode(testLED, OUTPUT);
}

void loop() {

if (digitalRead(buttonPin) == LOW)
{
digitalWrite(testLED, HIGH);
}

else
{
digitalWrite(testLED, LOW);
}

}
