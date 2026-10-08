#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H
#include "Sensor.hpp"

class HumiditySensor : public Sensor {
private:
  int humidity;
public:
  HumiditySensor(int sensorId, std::string sensorLocation);
  void update();
  void printCurrentCondition();
};


#endif