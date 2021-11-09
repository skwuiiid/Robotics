// Unit 1 Digital Sandbox
// Tutorial 1.06 Data Storage with Variables

// Can you make the LED fade from HIGH to LOW? 
// (Hint: You may need to change the setup value of fade, and change the + to a -.)

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
