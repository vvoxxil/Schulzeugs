#define LED_STM32 D13

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_STM32, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_STM32, HIGH);
  delay(2000);
  digitalWrite(LED_STM32, LOW);
  delay(2000);
}
