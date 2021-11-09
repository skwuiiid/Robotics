// Unit 1 Digital Sandbox
// Tutorial 1.02 Lights On! Lights Off! (Blink LED)

// Modify and repeat the blink sequence (HIGH → delay → LOW → delay) to spell out S-O-S, or a single word (no phrases/sentences).
// Hint: Try working on one letter at a time!

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  delay(1000);    

  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(200);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
     
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
 
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
 
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(500);
 
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(500);
}
