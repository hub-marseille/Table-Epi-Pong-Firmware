#include "headers/Config.hpp"

void setup()
{
  Serial.begin(9600);
  while (!Serial)
  {
    ;
  }
}

void loop()
{
  Serial.print("lmkjd");
  Serial.print(Mot1Enable);
  
}
