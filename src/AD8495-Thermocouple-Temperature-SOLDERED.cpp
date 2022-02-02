/**
 **************************************************
 *
 * @file        AD8495-Thermocouple-Temperature-SOLDERED.cpp
 * @brief       Example functions to overload in base class.
 *
 *
 * @copyright   GNU General Public License v3.0
 * @authors     Goran Juric @ soldered.com
 ***************************************************/


#include "AD8495-Thermocouple-Temperature-SOLDERED.h"

/**
 * @brief                   Sensor specific native constructor.
 *
 * @param int _pin          Example parameter.
 */
AD8495::AD8495(int _pin)
{
    pin = _pin;
}

/**
 * @brief                   Function which returns raw value of sensor.
 *
 * @return                  Raw value of sensor.
 */
int AD8495::getValue()
{
    return analogRead(pin);
}

/**
 * @brief                   Function which returns temperature in Celsius.
 *
 * @return                  Temperature in Celsius.
 */
float AD8495::getTemperatureC()
{
    return (getValue() - 511) * 0.976;
}

/**
 * @brief                   Function which returns temperature in Fahrenheit.
 *
 * @return                  Temperature in Fahrenheit.
 */
float AD8495::getTemperatureF()
{
    return (getValue() - 511) * 1.7568 + 32;
}