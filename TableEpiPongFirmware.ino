#include <SPI.h>
#include <Wire.h>
#include <WString.h>
#include "headers/Config.hpp"
#include "headers/Game.hpp"
//Stepper motor(29, 30);         // STEP pin: 2, DIR pin: 3 -> mot 4
//StepControl<> controller;    // Use default settings

void setup()
{
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  pinMode(13, OUTPUT); // ?
  pinMode(28, OUTPUT); // ?

  Serial.println("SALUT ");
  Game();
  //Motor mot1(29, 30 ,28); //bloquant wtf
  //mot1.GotoAbsolutePos(1000);
}

void loop()
{
}
