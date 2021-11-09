// Unit 1 Digital Sandbox
// Tutorial 1.08 If/Else & digitalRead

// Create a program where:
//    - Pressing the button turns the light on (like in the tutorial) AND
//    - Changing the switch position changes which LED turns on (can be any 2)

void setup() {
  pinMode(12, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
}

void loop() 
{
  if (digitalRead(12) == LOW){
    analogWrite(10, 0);
  }

  else {
    analogWrite(10, 255);
  }

  
  if (digitalRead(2) == LOW){
    analogWrite(11, 255);
  }

  else{
    analogWrite(11,0);
  }
}
