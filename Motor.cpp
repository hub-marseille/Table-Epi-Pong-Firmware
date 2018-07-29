/**
** GUIGUR 2018
** This class move motors
*/

#include "headers/Motor.hpp"

Motor::Motor(int stepPin, int dirPin, int endStpPin)
{
  Serial.println("construct motor");
  this->_stepPin = stepPin;
  this->_dirPin = dirPin;
  this->_endStpPin = endStpPin;

  pinMode(this->_endStpPin, INPUT);

}

Motor::~Motor()
{
  Serial.print("destruct motor");
  Disable();
}

/**
** This function init a motor by drving it until it hit a limit switch
*/
void Motor::initMotor()
{
  this->_motor.setMaxSpeed(this->_acceleration);    //2500 stp/s^2
  this->_motor.moveTo(3000);

  while(this->_endStpState == HIGH)
  {
    this->_endStpState = digitalRead(this->_endStpPin);
    this->_motor.run();
  }
  this->_motor.stop();
  //this->_motor.setCurrentPosition(posPaddleMax);
}

float Motor::GetAbsolutePos()
{
  return this->_pos;
}

void Motor::GotoAbsolutePos(float pos)
{
/*  this->_pos = pos;
  this->_motor.setTargetRel(this->_pos);
  this->_controller.move(this->_motor);
  */
}

void Motor::GotoRelativePos(float pos)
{
  /*
  this->_pos = this->_pos + pos;
  this->_motor.setTargetRel(this->_pos);
  this->_controller.move(this->_motor);
*/
}

bool Motor::GetState()
{
  //return this->_enable;
}
