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

AD8495 sensor(A0); //AD8495 initialization, it is connected on pin A0

void setup()
{
  // Start serial communication via UART with baud rate of 115200 bauds per second
  // If serial monitor or plotter is being used, it is necessary to set same baud rate
  // in serial monitor/plotter
  Serial.begin(115200);

  // If sensor doesn't measure temperature accuratelly, this function can
  // be used to set current temperature which sensor needs to measure.
  // Here can be inputted current temperature in celsius degrees to calibrate sensor
  sensor.calibrateC(25);

  // If sensor doesn't measure temperature accuratelly, this function can
  // be used to set current temperature which sensor needs to measure.
  // Similar to previous function, this function calibrates sensor, but
  // here current temperature needs to be inputted in fahrenheit degrees
  //sensor.calibrateF(77);
}

void loop()
{
  Serial.print("Temperature: "); //Print information message
  Serial.print(sensor.getTemperatureC()); //Get and print temperature in Celsius
  Serial.print("°C or "); //Print information message
  Serial.print(sensor.getTemperatureF()); //Get and print temperature in Fahrenheit
  Serial.println(" °F"); //Print information message
  delay(1000);
}
