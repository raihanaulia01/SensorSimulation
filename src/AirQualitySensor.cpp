#include <iostream>
#include <string>
#include <cstdlib>
#include "AirQualitySensor.hpp"


AirQualitySensor::AirQualitySensor(int sensorID, std::string sensorLocation, int airQuality) : Sensor(sensorID, sensorLocation), airQuality(airQuality) {}

void AirQualitySensor::update()
{
  airQuality += (rand() % 101 - 50) / 10.0;
  if (airQuality < 5)
    airQuality = 5;
}
void AirQualitySensor::printCurrentCondition() {
  std::cout << id << " | " << location << " | AQI: " << airQuality << std::endl;
}
