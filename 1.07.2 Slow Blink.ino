int fade = 0;
int number;

void setup()
{
pinMode(10, OUTPUT);
}

void loop()
{
if (fade == 0) {
number = 1;
}

if (fade == 255) {
number = -1;
}

fade = fade + number;
analogWrite(10, fade);
delay(10);
}
