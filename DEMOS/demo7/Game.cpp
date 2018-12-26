/*
 Guigur(.com) 2018
 guigur13@gmail.com
*/

#include "headers/Game.hpp"

 Game::Game()
 {

  while (1)
  {
    if(millis() > _time_now + _period)
    {
      _time_now = millis();
      Serial.println("Hello");
      Serial.println(millis());
    }
  }
 }

 Game::~Game()
 {

 }
