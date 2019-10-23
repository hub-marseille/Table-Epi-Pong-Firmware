/**
** GUIGUR 2018
*/

#include <SPI.h>
#include <Wire.h>
#include <WString.h>
//#include "headers/Game.hpp"
//#include "headers/Motor.hpp"
#include <AccelStepper.h>
AccelStepper _motorq(AccelStepper::DRIVER, 3, 4);
AccelStepper _motorW(AccelStepper::DRIVER, 29, 30);

void setup()
{
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  const int enableMot = 8;

  pinMode(2, INPUT); // ?
  
  pinMode(3, OUTPUT); // ?
  pinMode(4, OUTPUT); // ?
  
  pinMode(29, OUTPUT); // ?
  pinMode(30, OUTPUT); // ?
  
  pinMode(8, INPUT); // ?

  pinMode(enableMot, OUTPUT);
  digitalWrite(enableMot, LOW);
  Serial.println("SALUT ");
  //Game();
//  Motor mot1(3, 4, 2); //bloquant wtf
  //mot1.GotoAbsolutePos(1000);


  const int maxAccelerationSpeed = 2000;

  _motorq.setAcceleration(maxAccelerationSpeed);
  _motorq.setSpeed(1000);
  _motorW.setAcceleration(maxAccelerationSpeed);
  _motorW.setSpeed(1000);
}

void loop()
{

    if (_motorq.currentPosition() >= 500)
      _motorq.moveTo(0);
    else if (_motorq.currentPosition() <= 0)
      _motorq.moveTo(500);
    _motorq.run();
}
