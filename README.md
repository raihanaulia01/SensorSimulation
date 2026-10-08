# Smart Hub Sensor Simulation
This is a simple C++ project made to practice OOP Concepts in a smart home simulation.

## Overview
This project 'simulates' a smart home system with a base 'Sensor' class and three inherited types:
- Temperature
- Humidity
- Air Quality

Each of these inherited sensors stores their own data, updates the value over time, and prints the current value. The simulation runs on a loop and prints all sensor data per iteration.
> Note: The code doesn't actually simulate an environment. It seeds a random number generator every iteration and uses the generated value to update the sensor readings.

## What's this project for?
This project is made purely for me to learn C++ OOP fundamentals and build using CMake.

## OOP Concepts


## Project Structure
```txt
SensorSimulation
├── build
├── CMakeLists.txt
├── include
│   ├── AirQualitySensor.hpp
│   ├── HumiditySensor.hpp
│   ├── Sensor.hpp
│   └── TemperatureSensor.hpp
├── README.md
└── src
    ├── AirQualitySensor.cpp
    ├── HumiditySensor.cpp
    ├── main.cpp
    ├── Sensor.cpp
    └── TemperatureSensor.cpp
```