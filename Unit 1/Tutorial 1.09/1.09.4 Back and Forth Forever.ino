// Unit 1 Digital Sandbox
// Tutorial 1.09 Serial Print

// Create a program where when you press the button at D12 once, your choice of LED turns on and stays on (and the monitor prints “Light is on.”).
// The light remains on until the button is pressed again, at which point the light turns off and stays off (and the monitor prints “Light is off.”) until the button is pressed again.

// HINT: You may want to create a variable called onState (or something similar) that toggles any time the button is pressed.

int onState = 0; // initializing
int remainder;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
}

void loop(){
  if (digitalRead(12) == HIGH){ // checks when the button is pressed
    onState += 1;
  }

  remainder = onState % 2; // figures out whether or not the # of times is even/odd

  if (remainder == 1){ // if odd, light on
    digitalWrite(11, HIGH);
    Serial.println("The light is on.");
  }

  else {
    digitalWrite(11, LOW);
    Serial.println("The light is off.");
  }

  delay(250);
}
