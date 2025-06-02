#include <LiquidCrystal.h>

const int SensorUmi = A0;
const int motor = 11;
const int LedVerde = 12;


void setup() {
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  delay(2000);
}

void loop() {
  digitalWrite(LedVerde, LOW);
  int value = analogRead(SensorUmi);
  
  int UmidadePercentual = map(value, 1023, 0, 0, 100);
  

  if (UmidadePercentual < 40) { 
    digitalWrite(motor, HIGH);
    digitalWrite(LedVerde, HIGH);
  } else {
    digitalWrite(motor, LOW);
    digitalWrite(LedVerde, LOW);
  }

  delay(1000);
}
