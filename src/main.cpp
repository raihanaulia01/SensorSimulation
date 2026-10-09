#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include "TemperatureSensor.hpp"
#include "HumiditySensor.hpp"
#include "AirQualitySensor.hpp"

int main()
{
  Sensor *homeSensors[4];
  homeSensors[0] = new TemperatureSensor(0, "Living Room", 26);
  homeSensors[1] = new TemperatureSensor(1, "Bedroom", 23);
  homeSensors[2] = new HumiditySensor(2, "Bedroom", 50);
  homeSensors[3] = new AirQualitySensor(3, "Kitchen", 25);

  for (int i = 0; i < 5; i++)
  {
    srand(time(0));
    std::cout << "SMART HOME UPDATE #" << i + 1 << std::endl;
    for (int j = 0; j < 4; j++)
    {
      homeSensors[j]->update();
      homeSensors[j]->printCurrentCondition();
    }

    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  }
  return 0;
}