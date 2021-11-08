int potentPin = 3, currentLight, potentRead, previousLight = 4;

void setup() {
pinMode(potentPin, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(previousLight, LOW);

potentRead = analogRead(potentPin);
currentLight = map(potentRead, 0, 1023, 4, 8);

Serial.print("Current LED being lit up is: ");
Serial.println(currentLight);

digitalWrite(currentLight, HIGH);
previousLight = currentLight;

delay(50);
}
