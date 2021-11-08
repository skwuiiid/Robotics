// Unit 1 Digital Sandbox
// Tutorial 1.07 If This Then That

// Can you make the fade work the other way? Start at 0, fade up to 255, and then go back to 0.

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
