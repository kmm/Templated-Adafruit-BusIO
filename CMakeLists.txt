# Adafruit Bus IO Library
# https://github.com/adafruit/Adafruit_BusIO
# MIT License

cmake_minimum_required(VERSION 3.5)

idf_component_register(SRCS "Adafruit_I2CDevice_Templated.cpp" "Adafruit_BusIO_Register_Templated.cpp" "Adafruit_SPIDevice.cpp" 
                       INCLUDE_DIRS "."
                       REQUIRES arduino)

project(Adafruit_BusIO)
