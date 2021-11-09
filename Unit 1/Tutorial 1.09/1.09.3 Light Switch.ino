// Unit 1 Digital Sandbox
// Tutorial 1.09 Serial Print

// Create a program where when the switch at D2 is on, your choice of LED turns on, and the monitor prints “The light is on.”
// When the switch at D2 is off, the LED is off, and the monitor prints “The light is off.” 

// It’s fine if the monitor continues printing whatever state the light is in.

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
