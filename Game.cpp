#include "headers/Game.hpp"

Game::Game()
{
  Serial.println("salut contructeur des GAME ");

}

Game::~Game()
{
  Serial.println("au revoir destructeur des GAME ");

}

/**
** INIT les paddles & les motors etc
*/
void Game::initGame()
{
  Paddle pad1 = Paddle(MASTER);
  Paddle pad2 = Paddle(SLAVE);
}
