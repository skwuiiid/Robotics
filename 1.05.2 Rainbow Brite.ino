void setup()
{
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT);   
  pinMode(11, OUTPUT);   
}

void loop()
{
  // Red
  analogWrite(9,255);
  analogWrite(10,0);
  analogWrite(11,0);
  delay(500);
  
  // Orange
  analogWrite(9,255);
  analogWrite(10,162);
  analogWrite(11,0);
  delay(500);
  
  // Yellow
  analogWrite(9,255);
  analogWrite(10,255);
  analogWrite(11,0);
  delay(500);
  
  // Green
  analogWrite(9,0);
  analogWrite(10,255);
  analogWrite(11,0);
  delay(500);
  
  // Blue
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11,255);
  delay(500);
  
  // Indigo
  analogWrite(9,251);
  analogWrite(10,0);
  analogWrite(11,255);
  delay(500);
  
  // Violet
  analogWrite(9,158);
  analogWrite(10,0);
  analogWrite(11,255);
  delay(500);
}
