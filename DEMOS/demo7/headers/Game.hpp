/*
 Guigur(.com) 2018
 guigur13@gmail.com
*/
#ifndef GAME_HPP_
# define GAME_HPP_

#include <String.h>
#include <Arduino.h>
#include <vector>
# include "config.hpp"

class Game
{
public:
/**
** INIT: the game is power on, initialisation of axis and stuff
** WAITINGPLAYERS: the game is waiting for someone to push the one or 2 players button
** INGAMESTARTING: the game is about to start, each AI can do a "warcry" or some shit
** INGAMESERVICE: the ball is stuck to one paddle and we wait for one player to push the action button
** INGAME: the ball is moving until one player miss it
** INGAMESCORE: someone miss the ball and the score is changing, the ball is not moving here
** INGAMEFINALSCORE: the game is finished and we announce the final scores
*/
enum GameState {INIT, WAITINGPLAYERS, INGAMESTARTING, INGAMESERVICE, INGAME, INGAMESCORE, INGAMEFINALSCORE};

typedef struct   s_score
{
  int            master;
  int            slave;
} t_score;

  Game();
  ~Game();
private:
  t_score _score;
  //unsigned long _time;

  int _period = 1000;
  unsigned long _time_now = 0;

};

#endif /* GAME_HPP_ */
