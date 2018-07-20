#ifndef CONTROLS_HPP_
#define CONTROLS_HPP_

#include <String.h>
#include <Arduino.h>

enum controlSide { MASTER, SLAVE };
/* each side has a button for action, buttons to chose 1 or 2 player and a rotaru encoder */

class Controls
{
  public:
    Controls(controlSide side);
    ~Controls();
    void updateControls();
    int getEncoderPos();
    void setEncoderPos(int rotaryPos);
  private:
    int _rotaryPos;
    int _actionButtonState; //idk if it will be usefull
    controlSide _side;
};

#endif /* CONTROLS_HPP_ */
