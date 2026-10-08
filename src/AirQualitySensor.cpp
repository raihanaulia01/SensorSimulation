#include <iostream>
#include <string>
#include "Sensor.hpp"

class AirQualitySensor : public Sensor
{
private:
  int airQuality;

public:
  AirQualitySensor(int sensorID, std::string sensorLocation, int airQuality) : Sensor(sensorID, sensorLocation), airQuality(airQuality)
  {
  }

  void update() {}
  void printCurrentCondition() {}
};