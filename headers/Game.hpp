#ifndef GAME_HPP_
#define GAME_HPP_

#include <String.h>
#include <Arduino.h>
#include "Paddle.hpp"

enum GameState {INIT, WAITINGPLAYERS, INGAMESERVICE, INGAME, INGAMESCORE, INGAMEFINALSCORE};
/**
** INIT: the game is power on, initialisation of axis and stuff
** WAITINGPLAYERS: the game is waiting for someone to push the one or 2 players button
** INGAMESERVICE: the ball is stuck to one paddle and we wait for one player to push the action button
** INGAME: the ball is moving until one player miss it
** INGAMESCORE: someone miss the ball and the score is changing, the ball is not moving here
** INGAMEFINALSCORE: the game is finished and we announce the final scores
*/

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
