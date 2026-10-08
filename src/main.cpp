#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include "TemperatureSensor.hpp"
#include "HumiditySensor.hpp"
#include "AirQualitySensor.hpp"

int main()
{
  TemperatureSensor temperatureSensor = TemperatureSensor(0, "Living Room", 25);
  HumiditySensor humiditySensor = HumiditySensor(1, "Bedroom", 50);
  AirQualitySensor AQISensor = AirQualitySensor(2, "Kitchen", 25);

  for (int i = 0; i < 5; i++)
  {
    srand(time(0));
    std::cout << "SMART HOME UPDATE #" << i + 1 << std::endl;
    temperatureSensor.update();
    temperatureSensor.printCurrentCondition();
    humiditySensor.update();
    humiditySensor.printCurrentCondition();
    AQISensor.update();
    AQISensor.printCurrentCondition();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  }
  return 0;
}