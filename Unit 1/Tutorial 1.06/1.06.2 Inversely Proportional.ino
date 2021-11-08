// Unit 1 Digital Sandbox
// Tutorial 1.06 Data Storage with Variables

// Do the math to make the D6 LED fade in the direction opposite of our D5 LED. 
// Hint 1: Here’s a table of values you’d want for the value of D6 given the value of D5 (there’s math involved!)
// Hint 2: You can use 2 variables for this, but it’s more elegant to use ONE variable and a math equation!

int fade; 
int fades;

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT);
  
  fade = 0; 
  fades = 255;        
}

void loop()
{
  analogWrite(5, fade);
  analogWrite(6, fades);
  
  fade = fade + 3; 
  fades = fades - 3;
  
  delay(50);
}
