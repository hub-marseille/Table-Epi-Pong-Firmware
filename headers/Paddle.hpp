#ifndef PADDLE_HPP_
#define PADDLE_HPP_

#include <String.h>
#include <Arduino.h>

enum padSide { MASTER, SLAVE };

class Paddle
{
  public:
    Paddle(padSide padSide);
    ~Paddle();
    int getPos();
    void setPos(int pos);
  private:
    int _pos;
};

#endif /* PADDLE_HPP_ */
