/**
 **************************************************
 *
 * @file        AD8495-Thermocouple-Temperature-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright   GNU General Public License v3.0
 * @authors     Goran Juric @ soldered.com
 ***************************************************/

#ifndef __AD8495__
#define __AD8495__

#include "Arduino.h"

#define VREF  2.5

class AD8495
{
  public:
    AD8495(int _pin);
    int getValue(void);
    float getTemperatureC(void);
    float getTemperatureF(void);

  private:
    int pin;
};

#endif
