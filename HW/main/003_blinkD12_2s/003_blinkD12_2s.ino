#define LED_STM32 D13

void setup() {
  // put your setup code here, to run once:
  pinMode(D12, OUTPUT); 
  pinMode(D13, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D12, HIGH);
  digitalWrite(D13, LOW);
  delay(2000);
  digitalWrite(D12, LOW);
  digitalWrite(D13, HIGH);
  delay(2000);
}
