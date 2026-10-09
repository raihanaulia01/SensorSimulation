#ifndef SENSOR_H
#define SENSOR_H
#include <string>

class Sensor
{
protected:
  int id;
  std::string location;

public:
  Sensor(int sensorID, std::string sensorLocation);

  virtual void update();
  virtual void printCurrentCondition();
};

#endif