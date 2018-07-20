/**
** this class get 2 interupt pins and change the value of a virtual pos according to min and max values
**
*/
#include "headers/Paddle.hpp"

Paddle::Paddle(padSide padSide)
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
