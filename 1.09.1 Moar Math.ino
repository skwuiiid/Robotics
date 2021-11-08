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
