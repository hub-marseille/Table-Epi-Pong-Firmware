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
  typedef struct   s_commands
  {
    String         name;
    Strinf         altName;
    String         description;
  } t_commands;
private:
  void printHeader();
  void inputStatus();
  t_commands help = {"help", "HELP", "Display this help command"};
  t_commands help = {"enableMot", "ENABLEMOT", "Enable all the motors"};
  t_commands help = {"disableMot", "DISABLEMOT", "Disable all the motors"};

  std::vector<t_commands> _commands = {help};
};

#endif /* SERIALCOMMANDS_HPP_ */
