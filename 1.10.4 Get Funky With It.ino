// Unit 1 Digital Sandbox
// Tutorial 1.10 Do the Analog Slide!

// Change the program so that the button cycles through which color is on the RGB LED (pins 9-11), and the potentiometer adjusts the brightness of whichever pin is active.
// The monitor should print the active color and current brightness.

int potentPin = 3, potentRead, currentBright, currentLight = 9;

void setup() {
  pinMode(potentPin, INPUT);
  pinMode(12, INPUT);
  
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(12) == HIGH){
    currentLight += 1;
  }

  if (currentLight == 12){
    currentLight = 9;
  }

  potentRead = analogRead(potentPin);
  currentBright = map(potentRead, 0, 1023, 0, 255);
  
  Serial.print("Current brightness is: ");
  Serial.println(currentBright);

  Serial.print("Current Light is: ");
  Serial.println(currentBright); 
  
  if (currentLight == 9){
    Serial.println("Red");
  }

  if (currentLight == 10){
    Serial.println("Green");
  }

  if (currentLight == 11){
    Serial.println("Blue");
  }

  analogWrite(currentLight, currentBright);
  
  delay(100);
}
