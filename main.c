#include <LiquidCrystal.h>

const int SensorUmi = A0;
const int motor = 11;
const int LedVerde = 12;

LiquidCrystal LCD(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  LCD.begin(16, 2);
  LCD.print("Irriga");
  LCD.setCursor(0, 1);
  LCD.print("Facil!");
  pinMode(motor, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  delay(2000);
  LCD.clear();
  LCD.print("Umidade = ");
  LCD.setCursor(0, 1);
  LCD.print("Irrigador = ");
}

void loop() {
  digitalWrite(LedVerde, LOW);
  int value = analogRead(SensorUmi);
  
  int UmidadePercentual = map(value, 1023, 0, 0, 100);
  
  LCD.setCursor(11, 0);
  LCD.print(UmidadePercentual);
  LCD.print("% ");
  LCD.setCursor(12, 1);

  if (UmidadePercentual < 40) { 
    digitalWrite(motor, HIGH);
    digitalWrite(LedVerde, HIGH);
    LCD.print("ON ");
  } else {
    digitalWrite(motor, LOW);
    digitalWrite(LedVerde, LOW);
    LCD.print("OFF");
  }

  delay(1000);
}
