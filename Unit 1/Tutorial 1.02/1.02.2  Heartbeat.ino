// Unit 1 Digital Sandbox
// Tutorial 1.02 Lights On! Lights Off! (Blink LED)

// Modify and repeat the blink sequence (HIGH → delay → LOW → delay) to mimic a heartbeat or show a "pitter-patter" beat. 
// (Bum-bump...Bum-bump -- Here's a hint, you'll need at least two full blink sequences to make this work!).
// Play around with the delays until you have a realistic heartbeat.

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
// faster beat
  digitalWrite(13, HIGH);
  delay(400); 
  digitalWrite(13, LOW);
  delay(250);

// Slower Beat
  digitalWrite(13, HIGH); 
  delay(900);
  digitalWrite(13, LOW);
  delay(300);
}
