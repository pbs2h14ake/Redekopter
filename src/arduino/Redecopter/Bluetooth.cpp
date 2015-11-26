#include "Bluetooth.hpp"

Bluetooth::Bluetooth()
{
  // start serial communication
  Serial.begin(9600);
}

char Bluetooth::getData()
{
  // if data is available return it, else return null
  if (Serial.available())
    return Serial.read();
  else
    return ' ';
}

