#include <iostream>
#include <string>
#include "Sensor.hpp"

class TemperatureSensor : public Sensor
{
private:
  int temperature;

public:
  TemperatureSensor(int sensorID, std::string sensorLocation, int temperature) : Sensor(sensorID, sensorLocation), temperature(temperature)
  {
  }

  void update() {}
  void printCurrentCondition() {}
};