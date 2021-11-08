// Unit 1 Digital Sandbox
// Tutorial 1.06 Data Storage with Variables

// Referring to Challenge 2, make at least 2 colors from the RGB (i.e. R+G or G+B OR R+G+B) cycle through a variety of colors using variable(s).
// You may choose to add a second or third variable, but it is possible to do it with just 1… using math!

int fade9;
int fade10;
int fade11;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  fade9 = 18;
  fade10 = 163;
  fade11 = 154;
}

void loop()
{
  analogWrite(9, fade9);
  analogWrite(10, fade10);
  analogWrite(11, fade11);

  if (fade9 >= 208) {
    fade9 = 18;
  }

  else {
    fade9 = fade9 + 1;
  }


  if (fade10 >= 94) {
    fade10 = 163;
  }

  else {
    fade10 = fade10 - 1;
  }


  if (fade11 >= 189) {
    fade11 = 154;
  }

  else {
    fade11 = fade11 + 1;
  }

  delay(40);
}
