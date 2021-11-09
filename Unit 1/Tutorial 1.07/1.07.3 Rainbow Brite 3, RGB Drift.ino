// Unit 1 Digital Sandbox
// Tutorial 1.07 If This Then That

// Using your newfound if skills, make any 2 colors from the RGB (i.e. R+G or G+B or R+B) fade from one to the other.
// (Like… red starts on, green starts off. As red fades to off, green fades to on. It will be yellow at some point in the middle!).
// At no point should all three colors be off.

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

  if (fade9 > 207) {
    fade9 = 18;
  }

  else {
    fade9 = fade9 + 1;
  }


  if (fade10 > 93) {
    fade10 = 163;
  }

  else {
    fade10 = fade10 - 1;
  }


  if (fade11 > 188) {
    fade11 = 154;
  }

  else {
    fade11 = fade11 + 1;
  }

  delay(40);
}
