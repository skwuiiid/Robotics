// Unit 1 Digital Sandbox
// Tutorial 1.10 Do the Analog Slide!

// Make the potentiometer control the brightness of your choice of analog-compatible LED. 
// The monitor should print the current brightness of your LED.
// Hint: Remember that the number of a pin can be a variable!

int potentPin = 3, potentRead, currentBright;

void setup() {
  pinMode(potentPin, INPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  potentRead = analogRead(potentPin);
  currentBright = map(potentRead, 0, 1023, 0, 255);
  
  Serial.print("Current brightness is: ");
  
  Serial.println(currentBright);
  analogWrite(11, currentBright);

  delay(50);
}
