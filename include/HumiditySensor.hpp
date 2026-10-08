#ifndef HUMIDITYSENSOR_H
#define HUMIDITYSENSOR_H
#include "Sensor.hpp"

class HumiditySensor : public Sensor {
private:
  double humidity;
public:
  HumiditySensor(int sensorId, std::string sensorLocation, double humidity);
  void update();
  void printCurrentCondition();
};


#endif