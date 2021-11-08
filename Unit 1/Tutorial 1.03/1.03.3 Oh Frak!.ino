// Unit 1 Digital Sandbox
// Tutorial 1.03 Multi-Blink

// Modify your Challenge 2 to give the effect of a smooth, fading, back and forth light like a Cylon scanner (or a Larson Scanner, or KITT from Knight Rider).
// Hint: This involves having more than one LED on at a time as they “move” left or right.

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  digitalWrite(4, HIGH);
  delay (75);       
  digitalWrite(5, HIGH);   
  delay (75); 
  digitalWrite(4, LOW);   
  delay (75);
  digitalWrite(6, HIGH);    
  delay (75);   
  digitalWrite(5, LOW);     
  delay (75);   
  digitalWrite(7, HIGH);  
  delay (75);
  digitalWrite(6, LOW);    
  delay (75);    
  digitalWrite(8, HIGH);      
  delay (75);
  digitalWrite(7, LOW);     
  delay (75);  

  digitalWrite (7, HIGH);
  delay(75);
  digitalWrite(8, LOW);      
  delay (75);
  digitalWrite (6, HIGH);
  delay(75);  
  digitalWrite(7, LOW);      
  delay (75);
  digitalWrite(5, HIGH);   
  delay (75);
  digitalWrite(6, LOW);    
  delay (75);    
  digitalWrite(4, HIGH);
  delay (75);    
  digitalWrite(5, LOW);     
  delay (75);    
}
