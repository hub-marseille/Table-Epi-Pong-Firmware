#include "headers/Game.hpp"

Game::Game()
{
  Serial.println("salut contructeur des GAME ");
  this->initGame();
  this->GameLoop();
}

Game::~Game()
{
  Serial.println("au revoir destructeur des GAME ");
}

/** main loop of the game **/
void Game::GameLoop()
{
  Serial.println("GAME LOOP");
  if(GameState != INIT);
    this->GameLoop();
}

/**
** INIT les paddles & les motors etc
*/
void Game::initGame()
{
  Controls masterControls = Controls(MASTER);
  Controls slaveControls = Controls(SLAVE);


  //  Paddle pad1 = Paddle(MASTER);
//  Paddle pad2 = Paddle(SLAVE);
}
