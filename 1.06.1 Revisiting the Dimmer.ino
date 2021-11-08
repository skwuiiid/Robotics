int fade;

void setup()
{
pinMode(5, OUTPUT);
fade = 255;
}

void loop()
{
analogWrite(5, fade);
fade = fade - 3;
delay(50);
}
