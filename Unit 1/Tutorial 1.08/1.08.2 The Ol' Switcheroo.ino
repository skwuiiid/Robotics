// Unit 1 Digital Sandbox
// Tutorial 1.08 If/Else & digitalRead

// Change the code so that the switch at pin 2 turns the light at pin 13 on and off (instead of the button).

int buttonPin = 2;
int testLED = 13;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(testLED, OUTPUT);
}

void loop() 
{
  if (digitalRead(buttonPin) == LOW)
  {
    digitalWrite(testLED, HIGH);
  }

  else
  {
    digitalWrite(testLED, LOW);
  }
}
