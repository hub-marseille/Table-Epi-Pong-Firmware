/**
** GUIGUR 2018
** This class move motors
*/

#include "headers/Motor.hpp"

Motor::Motor(int stepPin, int dirPin, int endStpPin)
{
  //AccelStepper _motorq = AccelStepper(1, 3, 4);
  AccelStepper _motorq(AccelStepper::DRIVER, 3, 4);

  Serial.println("construct motor");
  _stepPin = stepPin;
  _dirPin = dirPin;
  _endStpPin = endStpPin;

  _endStpState = HIGH;


  pinMode(_endStpPin, INPUT);

  const int maxAccelerationSpeed = 2000;

  _motorq.setAcceleration(maxAccelerationSpeed);
  _motorq.setSpeed(1000);
  _motorq.moveTo(500);
  _motorq.run();

  //this->initMotor();

}

Motor::~Motor()
{
  Serial.print("destruct motor");
}

/**
** This function init a motor by drving it until it hit a limit switch
*/
void Motor::initMotor()
{
  Serial.println("init motor");
  _motor.setMaxSpeed(150);    //2500 stp/s^2
  _motor.moveTo(3000);

  while(_endStpState == HIGH)
  {
    Serial.println("loop motor");
    _endStpState = digitalRead(_endStpPin);
    _motor.run();
  }
  _motor.stop();
  //this->_motor.setCurrentPosition(posPaddleMax);
  _motor.setAcceleration(_acceleration);
  _motor.setSpeed(1000);
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
