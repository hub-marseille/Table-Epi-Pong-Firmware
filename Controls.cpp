#include "headers/Controls.hpp"
#include "headers/Config.hpp"

Controls::Controls(controlSide side)
{
  this->_side = side;
  if (side == MASTER)
  {
    this->_action = ACTIONMASTER;
    this->_onePlayer = ONEPLAYERMASTER;
    this->_twoPlayers = TWOPLAYERSMASTER;
    this->_encSig1 = ENCSIG1MASTER;
    this->_encSig2 = ENCSIG2MASTER;
  }
  else if (side == SLAVE)
  {
    this->_action = ACTIONSLAVE;
    this->_onePlayer = ONEPLAYERSLAVE;
    this->_twoPlayers = TWOPLAYERSSLAVE;
    this->_encSig1 = ENCSIG1SLAVE;
    this->_encSig2 = ENCSIG2SLAVE;
  }
}

Controls::~Controls()
{

}

void Controls::update()
{
    this->_action = updateButton(this->_action);
    this->_onePlayer = updateButton(this->_onePlayer);
    this->_twoPlayers = updateButton(this->_twoPlayers);
    //TODO: update encoders
}

int Controls::updateButton(int button)
{
  int state = -1;
  if (digitalRead(button) == HIGH)
    state = 1;
  else if (digitalRead(button) == LOW)
    state = 0;
  return (state);
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

int Controls::getActionButtonState()
{
  return (this->_actionButtonState);
}

void Controls::setActionButtonState(int actionButtonState)
{
  this->_actionButtonState = actionButtonState;
}
