/**
 **************************************************
 *
 * @file        Read_temperature.ino
 * @brief       Example for reading temperature
 *
 *  product : www.soldered.com/333099
 *
 * @authors     Goran Juric @ soldered.com
 ***************************************************/

#include "AD8495-Thermocouple-Temperature-SOLDERED.h"

//Connecting diagram
//Breakout      Arduino
//|-------------|
//OUT-----------A0
//GND-----------GND
//VCC-----------5V

AD8495 sensor(A0); //AD8495 initialization, it is connected on pin A0

void setup()
{
  //Begin UART communication with PC, using 115200 baud rate
  //It is needed to set same baud rate in Serial monitor if used
  Serial.begin(115200);
}

void loop()
{
  Serial.print("Temperature: ");  //Print message
  Serial.print(sensor.getTemperatureC()); //Print temperature in Celsius
  Serial.print("°C or ");
  Serial.print(sensor.getTemperatureF()); //Print message in Fahrenheit
  Serial.println(" °F");
  delay(1000);
}
