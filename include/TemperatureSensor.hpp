#ifndef TEMPERATURESENSOR_H
#define TEMPERATURESENSOR_H
#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
private:
  double temperature;
public:
  TemperatureSensor(int sensorId, std::string sensorLocation, double temperature);
  void update();
  void printCurrentCondition();
};


#endif