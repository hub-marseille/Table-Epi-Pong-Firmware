#ifndef CONTROLS_HPP_
#define CONTROLS_HPP_

#include <String.h>
#include <Arduino.h>
#ifndef CFG
  #include "Config.hpp"
#endif
/* each side has a button for action, buttons to chose 1 or 2 player and a rotaru encoder */

enum ControlsSide { C_MASTER, C_SLAVE };

class Controls
{
  public:
    Controls(ControlsSide side);
    ~Controls();
    void update();
    int getEncoderPos();
    void setEncoderPos(int rotaryPos);
    int getActionButtonState();
    void setActionButtonState(int actionButtonState);

  private:
    int updateButton(int button);
    int _rotaryPos;
    bool _actionButtonState; //idk if it will be usefull
    ControlsSide _side;
    int _action;
    int _onePlayer;
    int _twoPlayers;
    int _encSig1;
    int _encSig2;
};

#endif /* CONTROLS_HPP_ */
