#include <iostream>
#include <string>
#include "Sensor.hpp"

class Sensor
{
protected:
  int id;
  std::string location;

public:
  Sensor(int sensorID, std::string sensorLocation) : id(sensorID), location(sensorLocation)
  {
  }

  void update() {}
  void printCurrentCondition() {}
};