#include "headers/Game.hpp"

Game::Game()
{
  Serial.println("salut contructeur des GAME");
  this->_gameState = INIT;
  this->gameHub();
}

Game::~Game()
{
  Serial.println("au revoir destructeur des GAME ");
}

void Game::gameHub()
{
  Serial.println("gameHub");
  switch (this->_gameState) {
    case INIT:
      this->initGame();
      break;
    case WAITINGPLAYERS:
      this->waitingForPlayers();
      break;
    case INGAMESTARTING:
      this->GameLoop();
      break;
  }
}

void Game::waitingForPlayers()
{
  Serial.println("WAITING PLAYERS");
  while (this->_gameState == WAITINGPLAYERS)
  {
    _masterControls.update();
    _slaveControls.update();
    if (_masterControls.getActionButtonState() == true || _slaveControls.getActionButtonState() == true)
      this->_gameState = INGAMESTARTING;
  }
}

/** main loop of the game **/
void Game::GameLoop()
{
  Serial.println("GAME LOOP");
  Serial.println(this->_gameState);
  if(this->_gameState == INIT || this->_gameState == WAITINGPLAYERS)
    this->gameHub();
  this->GameLoop();
}

/**
** INIT les paddles & les motors etc
*/
void Game::initGame()
{
  Serial.println("initGame");
 //TODO: 0 les paddles
 //TODO: 0 la balle
 //  Paddle pad1 = Paddle(MASTER);
//  Paddle pad2 = Paddle(SLAVE);

  this->_gameState = WAITINGPLAYERS;
  this->gameHub();
}
