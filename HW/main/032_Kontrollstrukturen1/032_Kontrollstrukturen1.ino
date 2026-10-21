#define LED D13 //--- WICHTIG! NIEMALS ; 

char new_value;
char buchstabe;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  if (Serial.available() > 0)  // Prüft, ob Daten im seriellen Puffer verfügbar sind
  {
    new_value = Serial.read();
    
    if (new_value != '\n')  // Prüft, ob das nächste Zeichen kein Zeilenumbruch (ENTER) ist  ---> (ob es eine neues zeichen ist)
    { 
       buchstabe = new_value;
       Serial.println(buchstabe, DEC);
       
      switch (buchstabe) {
        case 'a': 
          digitalWrite(LED, HIGH);
          break;
        // -- nicht aufgabe, nur für erklärung/style
        default:
          digitalWrite(LED, LOW);
          break;
      }
    }
  }
}