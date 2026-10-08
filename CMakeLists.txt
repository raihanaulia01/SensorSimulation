cmake_minimum_required(VERSION 3.15)
project(sensor-simulation)
include_directories(include)

add_library(sensor_lib src/Sensor.cpp src/AirQualitySensor.cpp src/HumiditySensor.cpp src/TemperatureSensor.cpp)
add_executable(sensor-simulation src/main.cpp)
target_link_libraries(sensor-simulation sensor_lib)
