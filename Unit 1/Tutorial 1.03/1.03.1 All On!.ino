// Unit 1 Digital Sandbox
// Tutorial 1.03 Multi-Blink

// Try turning on more than one LED at a time OR have them all blink ON (and shield your eyes) and OFF at the same time.

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);       
  digitalWrite(5, HIGH);    
  digitalWrite(6, HIGH);        
  digitalWrite(7, HIGH);  
  digitalWrite(8, HIGH);      
  digitalWrite(13, HIGH);       

  delay(200);
  
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);       
  digitalWrite(6, LOW);     
  digitalWrite(7, LOW);       
  digitalWrite(8, LOW);     
  digitalWrite(13, LOW);   
  
  delay(200);
}
