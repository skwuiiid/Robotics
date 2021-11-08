// Unit 1 Digital Sandbox
// Tutorial 1.07 If This Then That

// Make the LED fade smoothly up and smoothly down in the same sketch: from 0 to 255, then 255 to 0, then 0 to 255, then back again.

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
