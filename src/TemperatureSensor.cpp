#include <iostream>
#include <string>
#include <cstdlib>
#include "TemperatureSensor.hpp"


TemperatureSensor::TemperatureSensor(int sensorID, std::string sensorLocation, double temperature) : Sensor(sensorID, sensorLocation), temperature(temperature){}

void TemperatureSensor::update() {
  temperature += (rand() % 20 - 10) / 10.0;
}
void TemperatureSensor::printCurrentCondition() {
  std::cout << id << " | " << location << " | Temperature: " << temperature << "C" << std::endl;
}
