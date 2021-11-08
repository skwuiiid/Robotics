int fade = 0;

void setup()
{
pinMode(10, OUTPUT);
}

void loop()
{
fade = fade + 1;

if (fade > 255)
{
fade = 0;
}

analogWrite(10, fade);
delay(10);
}
