#include "headers/Config.hpp"
#include "headers/Motor.hpp"

Stepper motor(29, 30);         // STEP pin: 2, DIR pin: 3 -> mot 4
StepControl<> controller;    // Use default settings

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(28, OUTPUT);
  Serial.println("SALUT ");
  blink();
  Serial.println(Mot1Enable);
  blink();
  Motor mot1 = Motor(29, 30 ,28);
  blink();
  Serial.println("LES ");
  blink();
  mot1.GotoAbsolutePos(1000);
  blink();
  Serial.println("COPAINS ");
  blink();




}


void blink()
{
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  }

void loop()
{


}
