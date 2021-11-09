// Unit 1 Digital Sandbox
// Tutorial 1.05 Color Mixing

// Make a stop light blink from green, to yellow, to red and repeat.
// You’ll need some delay()’s and a handful of analogWrite() trios.

void setup()
{
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);    
  pinMode(11, OUTPUT);   
}

void loop()
{
  analogWrite(9, 0);
  analogWrite(10, 187);
  analogWrite(11, 50);
  delay(750);
  
  analogWrite(9,255);
  analogWrite(10, 255);
  analogWrite(11,0);
  delay(750);
  
  analogWrite(9, 255);
  analogWrite(10,0); 
  analogWrite(11, 0); 
  delay(750);
}
