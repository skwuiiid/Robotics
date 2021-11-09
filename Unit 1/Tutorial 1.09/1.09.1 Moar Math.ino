// Unit 1 Digital Sandbox
// Tutorial 1.09 Serial Print

// Add to the code so that it will also subtract and divide your choice of the 3 variables.
// Note that since the variable type is int, Arduino will truncate (remove anything after the decimal) the result.

int a = 5;
int b = 10;
int c = 20;

void setup()
{
  Serial.begin(9600);
}

void loop(){
  Serial.println("Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a - b = ");
  Serial.println(a - b);

  Serial.print("c / a = ");
  Serial.println(c / a);

  delay(500);
}
