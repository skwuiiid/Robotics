// Unit 1 Digital Sandbox
// Tutorial 1.03 Multi-Blink

// Add to or modify your code so that the lights turn on one by one from right to left (until they’re all on) and then turn off from left back to right (until they’re all off).

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
  delay (100);       
  digitalWrite(5, HIGH);   
  delay (100); 
  digitalWrite(6, HIGH);    
  delay (100);    
  digitalWrite(7, HIGH);  
  delay (100);
  digitalWrite(8, HIGH);     

  delay(200);
  
  digitalWrite(8, LOW);   
  delay (100);    
  digitalWrite(7, LOW);     
  delay (100);
  digitalWrite(6, LOW);    
  delay (100);   
  digitalWrite(5, LOW);     
  delay (100);
  digitalWrite(4, LOW);   
  
  delay(200);
}
