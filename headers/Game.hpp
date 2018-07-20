#ifndef GAME_HPP_
#define GAME_HPP_

#include <String.h>
#include <Arduino.h>
#include "Paddle.hpp"

class Game
{
  public:
    Game();
    ~Game();
    void initGame();
    void GameLoop();
  private:
};

#endif /* GAME_HPP_ */
