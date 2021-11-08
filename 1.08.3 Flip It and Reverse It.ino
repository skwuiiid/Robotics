void setup() {
pinMode(12, INPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(2, INPUT);
}

void loop() {

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
