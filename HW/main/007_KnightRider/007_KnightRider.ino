void setup() {
  // put your setup code here, to run once:
  for (int i=2;i<=9;i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int d = 250;
  // put your main code here, to run repeatedly:
  for(int i=2;i<=9;i++) {
    digitalWrite(9,LOW); //debugging
    digitalWrite(i, HIGH);
    if (i>0) digitalWrite(i-1, LOW);
    delay(d);
  }
  for(int i=9;i>=2;i--) {
    digitalWrite(i+1, LOW);
    digitalWrite(i, HIGH);
    delay(d);
  }
}
