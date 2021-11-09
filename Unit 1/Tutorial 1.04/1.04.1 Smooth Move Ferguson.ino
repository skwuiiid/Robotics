// Unit 1 Digital Sandbox
// Tutorial 1.04 Dimming the Lights

// Can you add more brightness levels to the sketch to make it ramp up more smoothly?
// Get your copy/paste engines roaring!

void setup()
{
  pinMode(11,OUTPUT); 
}

void loop()
{
  // First 25% , going up by 5% because why not
  analogWrite(11, 0); 
  delay(250); 
  analogWrite(11, 12); 
  delay(250); 
  analogWrite(11, 25); 
  delay(250);   
  analogWrite(11, 38); 
  delay(250);   
  analogWrite(11, 51); 
  delay(250);  
  analogWrite(11, 63); 
  delay(250);  
  
  // Going up to 50% now :)
  analogWrite(11, 76); 
  delay(250);   
  analogWrite(11, 89); 
  delay(250);  
  analogWrite(11, 102); 
  delay(250);    
  analogWrite(11, 114); 
  delay(250);   
  analogWrite(11, 127); 
  delay(250);   
  
  // 75% !!!
  analogWrite(11, 140);
  delay(250); 
  analogWrite(11, 153); 
  delay(250);    
  analogWrite(11, 165); 
  delay(250);  
  analogWrite(11, 178); 
  delay(250);  
  analogWrite(11, 191); 
  delay(250);    
  
  // 100% super bright :O
  analogWrite(11, 204); 
  delay(250);    
  analogWrite(11, 229); 
  delay(250);  
  analogWrite(11, 242); 
  delay(250);  
  analogWrite(11, 255); 
  delay(250); 
}
