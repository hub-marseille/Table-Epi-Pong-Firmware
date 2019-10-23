/*
 Guigur(.com) oct 2019
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
  test();
}

void SerialCommands::inputStatus()
{
  Serial.printf("MASTER:\n");
  Serial.printf("(A) => off  (I) => off  (II) => off\n");
  Serial.printf("ENC => %d\n", 1234);
  Serial.printf("SALVE:\n");
  Serial.printf("(A) => off  (I) => off  (II) => off\n");
  Serial.printf("ENC => %d\n", 1234);

}

void SerialCommands::test()
{
        String dataRead = Serial.readStringUntil('\0');
        dataRead.trim();

          if (dataRead == "help")
          {
            Serial.println(_commands.back().name);

          }
          else if (dataRead == "disableMot" || dataRead == "DISABLEMOT")
          {
            digitalWrite(ENABLEMOTORS, HIGH);
            Serial.println("Stopped all motors");
          }
          else if (dataRead == "enableMot" || dataRead == "ENABLEMOT")
          {
            digitalWrite(ENABLEMOTORS, LOW);
            Serial.println("Stopped all motors");
          }
          else if (dataRead == "home" || dataRead == "HOME")
          {
            Serial.println("Homing...");
            digitalWrite(ENABLEMOTORS, LOW); //Enable the motors
          }
          else if (dataRead == "reset" || dataRead == "RESET")
          {
            Serial.println("Soft reset");
            _reboot_Teensyduino_();
          }

          else
          {
            Serial.print("unknown command \"");
            Serial.print(dataRead);
            Serial.println("\". Type \"help\" to see available commands");
          }
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
