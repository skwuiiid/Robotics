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