void setup()
{
Serial.begin(9600);
pinMode(11, OUTPUT);
pinMode(2, INPUT);
}

void loop(){
if (digitalRead(2) == HIGH){
Serial.println("The light is on.");
digitalWrite(11, HIGH);
}

else{
Serial.println("The light is off.");
digitalWrite(11, LOW);
}

delay(250);
}
