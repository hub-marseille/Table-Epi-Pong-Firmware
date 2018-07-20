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

void Game::GameLoop()
{
  Serial.println("GAME LOOP");
  this->GameLoop();
}

/**
** INIT les paddles & les motors etc
*/
void Game::initGame()
{
  Paddle pad1 = Paddle(MASTER);
  Paddle pad2 = Paddle(SLAVE);
}
