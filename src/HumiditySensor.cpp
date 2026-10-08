#include <iostream>
#include <string>
#include <cstdlib>
#include "HumiditySensor.hpp"

HumiditySensor::HumiditySensor(int sensorID, std::string sensorLocation, double humidity) : Sensor(sensorID, sensorLocation), humidity(humidity) {}

void HumiditySensor::update()
{
  humidity += (rand() % 101 - 50) / 10.0;
  if (humidity < 10)
    humidity = 10;
  else if (humidity > 100)
    humidity = 100;
}
void HumiditySensor::printCurrentCondition()
{
  std::cout << id << " | " << location << " | Humidity: " << humidity << "%" << std::endl;
}
