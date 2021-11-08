int ledOn = 4; // Initializing the variable and making it start off at D4
int dspee; // Initialized the delay in between each loop

void setup(){ // Setting up all the LEDs and buttons
pinMode(2, INPUT);
pinMode(12, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop(){
if (digitalRead(12) == HIGH) { // if button is pressed, keep LED on
digitalWrite(ledOn, HIGH);
}

else { // if button isn't pressed, keep LED off
digitalWrite (ledOn, LOW);
ledOn = ledOn + 1; // switches the LED to the next to it

if (ledOn == 9) { // checks whether or not it passes D8
ledOn = 4; // if it does, it switches back to the beginning at D4
}
}
digitalWrite(ledOn, HIGH); // turned on each LED

if (digitalRead(2) == HIGH) { // checks the difficulty the person wanted the program in
dspee = 50; // faster leds for the harder difficulty
}

else {
dspee = 150; // slower leds for the easier difficulty
}

delay(dspee); // the interval in between each LED
}
