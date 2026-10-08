#include <iostream>
#include <string>
#include "Sensor.hpp"

class HumiditySensor : public Sensor
{
private:
  int humidity;

public:
  HumiditySensor(int sensorID, std::string sensorLocation, int humidity) : Sensor(sensorID, sensorLocation), humidity(humidity)
  {
  }

  void update() {}
  void printCurrentCondition() {}
};