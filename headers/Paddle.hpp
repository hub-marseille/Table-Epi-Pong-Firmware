#ifndef PADDLE_HPP_
#define PADDLE_HPP_

#include <String.h>
#include <Arduino.h>

enum PaddleSide { P_MASTER, P_SLAVE };

class Paddle
{
  public:
    Paddle(PaddleSide padSide);
    ~Paddle();
    int getPos();
    void setPos(int pos);
  private:
    int _pos;
};

#endif /* PADDLE_HPP_ */
