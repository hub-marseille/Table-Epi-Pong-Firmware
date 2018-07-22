/**
** GUIGUR 2018
** This class move motors
*/

#include "headers/Motor.hpp"

Motor::Motor(int stepPin, int dirPin, int enablePin)
{
  Serial.println("construct motor");
  //Serial.print("init motor");
  //this->_stepPin = stepPin;
  //this->_dirPin = dirPin;
  //this->_enablePin = enablePin;
  //digitalWrite(this->_enablePin, LOW);
  //initMotor();
}

Motor::~Motor()
{
  Serial.print("destruct motor");
//  Disable();
}

void Motor::initMotor()
{
  this->_motor.setAcceleration(this->_acceleration);    //2500 stp/s^2
  this->_motor.setMaxSpeed(this->_maxSpeed);         //5000 stp/s
  this->_motor.setPullInSpeed(this->_pullInSpeed); //works fine @ 200
}

float Motor::GetAbsolutePos()
{
  return this->_pos;
}

void Motor::GotoAbsolutePos(float pos)
{
  this->_pos = pos;
  this->_motor.setTargetRel(this->_pos);
  this->_controller.move(this->_motor);
}

void Motor::GotoRelativePos(float pos)
{
  this->_pos = this->_pos + pos;
  this->_motor.setTargetRel(this->_pos);
  this->_controller.move(this->_motor);
}

bool Motor::GetState()
{
  return this->_enable;
}

void Motor::Enable()
{
  this->_enable = true;
  digitalWrite(this->_enablePin, LOW);
}

void Motor::Disable()
{
  this->_enable = false;
  digitalWrite(this->_enablePin, HIGH);
}
