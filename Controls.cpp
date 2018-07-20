#include "headers/Controls.hpp"

Controls::Controls(controlSide side)
{
  this->_side = side;
}

Controls::~Controls()
{
}

void Controls::updateControls()
{
  if (digitalRead(10) == HIGH)
    this->_actionButtonState = 1;
  else if (digitalRead(10) == LOW)
    this->_actionButtonState = 0;
}

/* GETTERS AND SETTERS */
int Controls::getEncoderPos()
{
  return (this->_rotaryPos);
}

void Controls::setEncoderPos(int rotaryPos)
{
  this->_rotaryPos = rotaryPos;
}
