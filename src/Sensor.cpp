#include <iostream>
#include <string>
#include "Sensor.hpp"

Sensor::Sensor(int sensorID, std::string sensorLocation) : id(sensorID), location(sensorLocation) {}
void Sensor::update() {}
void Sensor::printCurrentCondition() {}