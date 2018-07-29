// Motor.hpp
#ifndef MOTOR_HPP_
#define MOTOR_HPP_

#include <String.h>
#include <Arduino.h>
#include <AccelStepper.h>
#ifndef CFG
  #include "Config.hpp"
#endif

class Motor
{
  public:
    Motor(int stepPin, int dirPin, int endStpPin);
    ~Motor();
    float GetAbsolutePos();
    void GotoAbsolutePos(float pos);
    void GotoRelativePos(float pos);
    bool GetState();
    void Enable();
    void Disable();
    void initMotor();

  private:
    int _stepPin;
    int _dirPin;
    int _endStpPin;


    int _endStpState;
    AccelStepper _motor = AccelStepper(1, _stepPin, _dirPin);

    /*
    Stepper _motor = Stepper(_stepPin, _dirPin);
    StepControl<> _controller;*/
    int _acceleration = 2500;
    int _maxSpeed = 5000;
    int _pullInSpeed = 200;
    bool _enable;
    float _pos;
};

#endif /* MOTOR_HPP_ */
