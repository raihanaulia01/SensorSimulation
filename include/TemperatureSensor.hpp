#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H
#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
private:
  int temperature;
public:
  TemperatureSensor(int sensorId, std::string sensorLocation, int temperature);
  void update();
  void printCurrentCondition();
};


#endif