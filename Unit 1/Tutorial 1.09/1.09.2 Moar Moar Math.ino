// Unit 1 Digital Sandbox
// Tutorial 1.09 Serial Print

// Create a program with one variable.
// Every time you press the button, the LED at pin 13 should light up and the variable’s value should be squared and the new value printed. 

// If the button is held down, the value keeps squaring and printing, and the light stays on.
// When the button is released, the light turns off, the value of the variable stops changing, and nothing prints.

int a = 2;
int counter = 1;

void setup()
{
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}

void loop(){
  if (counter == 1){ // starting the program
    Serial.println("Press the button to square the number!");
    Serial.print("Starting number: ");
    Serial.println(a);
    counter = counter + 1;
  }
  
  if (a == 0){ // resets counter when it becomes weird
    Serial.println("Resetting the counter...");
    a = 2;
  }

  if (digitalRead(12)==HIGH){ // squares when pressed
    digitalWrite(13, HIGH);
    a = a * a;
    Serial.print("The current number is: ");
    Serial.println(a);
  }

  else{
    digitalWrite(13, LOW);
  }

  delay(250); // preventing constantly running when the button is held onto, but fast enough to detect several presses in a short amount of time
}
