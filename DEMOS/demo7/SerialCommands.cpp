/*
 Guigur(.com) dec 2018
 guigur13@gmail.com
*/

#include "headers/SerialCommands.hpp"

SerialCommands::SerialCommands()
{
  Serial.begin(115200);
  while (!Serial) {;}
  printHeader();
}

SerialCommands::~SerialCommands()
{
  Serial.printf("objet SerialCommands detruit\n");
}

void SerialCommands::updateSerialCommands()
{

}

void SerialCommands::test()
{
        String dataRead = Serial.readStringUntil('\0');
        dataRead.trim();
        if (dataRead == "help" || dataRead == "HELP")
        {
          Serial.println("Welcome to the help command");
        }
        else
        {
          Serial.print("unknown command \"");
          Serial.print(dataRead);
          Serial.println("\". Type \"help\" to see available commands");
        }
        printStringInHex(dataRead);

}

void SerialCommands::printStringInHex(String str)
{
  Serial.printf("Hex Ascii : [ ");

  for (size_t i = 0; i < str.length(); i++) {
    Serial.print(str[i], HEX);
    if ( i < str.length() - 1)
      Serial.printf(" | ");
  }
  Serial.printf(" ]\n");
}

/* ========== PRIVATE STUFF ========== */
void SerialCommands::printHeader()
{
  String l_line = TIMESTAMP;
  time_t t = l_line.toInt();
  Serial.printf("Table Epi-Pong Version %s (%d/%d/%d @ %d:%d:%d) built by %s.\n", VERSION, day(t), month(t), year(t), hour(t), minute(t), second(t), BUILDBY);
  Serial.printf("Enter 'help' for a list of built in commands.\n");
  Serial.printf(F("   _______  ____        ___\n"
                  "  / __/ _ \\/  _/ ____  / _ \\ ___   ___   ___ _\n"
                  " / _// ___// /  /___/ / ___// _ \\ / _ \\ / _ `/\n"
                  "/___/_/  /___/       /_/    \\___//_//_/ \\_, /\n"
                  "                              Terminal /___/\n"));
  Serial.printf(F("---------------------------------------------------------------------\n"));
}
