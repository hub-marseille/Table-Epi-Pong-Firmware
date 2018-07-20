#ifndef GAME_HPP_
#define GAME_HPP_

#include <String.h>
#include <Arduino.h>
#include "Controls.hpp"

enum GameState {INIT, WAITINGPLAYERS, INGAMESTARTING, INGAMESERVICE, INGAME, INGAMESCORE, INGAMEFINALSCORE};

/**
** INIT: the game is power on, initialisation of axis and stuff
** WAITINGPLAYERS: the game is waiting for someone to push the one or 2 players button
** INGAMESTARTING: the game is about to start, each AI can do a "warcry" or some shit
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
    void gameHub();
    void waitingForPlayers();
    GameState _gameState;
    Controls _masterControls = Controls(MASTER);
    Controls _slaveControls = Controls(SLAVE);
};

#endif /* GAME_HPP_ */
