#ifndef _ADAFRUIT_I2C_REGISTER_H_
#define _ADAFRUIT_I2C_REGISTER_H_

#include <Adafruit_BusIO_Register_Templated.h>
#include <Arduino.h>
template<class TWire>
using Adafruit_BusIO_Register_Templated = Adafruit_I2CRegister_Templated<TWire>;
template<class TWire>
using Adafruit_BusIO_RegisterBits_Templated = Adafruit_I2CRegisterBits_Templated<TWire>;

#endif
