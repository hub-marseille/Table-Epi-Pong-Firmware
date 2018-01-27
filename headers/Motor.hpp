// Motor.hpp
#ifndef MOTOR_HPP_
#define MOTOR_HPP_

#include <StepControl.h>

class Motor
{
  public:
    Motor(int stepPin, int dirPin, int enablePin);
    ~Motor();
    float GetAbsolutePos();
    void GotoAbsolutePos(float pos);
    void GotoRelativePos(float pos);
    bool GetState();
    void Enable();
    void Disable();
  private:
    int _stepPin;
    int _dirPin;
    int _enablePin;
    Stepper _motor = Stepper(_stepPin, _dirPin);
    StepControl<> _controller;
    int _acceleration = 2500;
    int _maxSpeed = 5000;
    int _pullInSpeed = 200;
    bool _enable;
    float _pos;
    void initMotor();
};

#endif /* MOTOR_HPP_ */
