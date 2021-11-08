// Unit 1 Digital Sandbox
// Tutorial 1.08 If/Else & digitalRead

// Create a program where your choice of LED fades up or down for as long as the button is pressed. 
// The light can start at any brightness, and the fade should stop when the button is released.

int buttonPin = 12;
int testLED = 13;
int fade = 0;
int number;

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(11, OUTPUT);
}

void loop() 
{
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
