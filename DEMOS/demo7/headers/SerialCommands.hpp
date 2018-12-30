#ifndef SERIALCOMMANDS_HPP_
# define SERIALCOMMANDS_HPP_

#include <String.h>
#include <Arduino.h>
#include <TimeLib.h>
#include <vector>
# include "config.hpp"

class SerialCommands
{
public:
  SerialCommands();
  ~SerialCommands();
  void test();
  void updateSerialCommands();
  void printStringInHex(String str);
private:
  void printHeader();
  void inputStatus();
};

#endif /* SERIALCOMMANDS_HPP_ */
