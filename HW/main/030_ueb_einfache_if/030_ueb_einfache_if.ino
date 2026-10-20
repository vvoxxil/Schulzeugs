#define LED D13
#define BTN PC13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BTN, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BTN) == LOW) {
    Serial.print(BTN);
    digitalWrite(LED, HIGH);
  } 
  else {
    digitalWrite(LED, LOW);
  }
}
