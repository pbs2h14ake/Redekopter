/*
 * Bluetooth Communication
 * 
 * This class is the interface between the Bluetooth Transceiver and the Arduino-Board
 * 
 * Since the communication with the modul is using the Serial Bus, this class can also 
 * be used for communication with the serial monitor
 */

#ifndef _bluetooth_h_
#define _bluetooth_h_

#include <SPI.h>

class Bluetooth
{
  private:
    bool connection;

  public:
    Bluetooth();
    char getData();
};

#endif
