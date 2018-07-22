/**
** GUIGUR 2018
*/

#include "headers/Paddle.hpp"

Paddle::Paddle(PaddleSide padSide)
{

  Serial.println("salut contructeur des paddles ");
  Serial.println(padSide);
}

Paddle::~Paddle()
{
  Serial.println("au revoir destructeur des paddles ");
}

int Paddle::getPos()
{
  return (this->_pos);
}

void Paddle::setPos(int pos)
{
  this->_pos = pos;
}
