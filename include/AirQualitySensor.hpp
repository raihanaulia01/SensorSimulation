#ifndef AIRQUALITYSENSOR_H
#define AIRQUALITYSENSOR_H
#include "Sensor.hpp"

class AirQualitySensor : public Sensor {
private:
  int airQuality;
public:
  AirQualitySensor(int sensorId, std::string sensorLocation, int airQuality);
  void update();
  void printCurrentCondition();
};


#endif