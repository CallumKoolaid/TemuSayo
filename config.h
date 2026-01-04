#pragma once

// I2C Configuration for RP2040
// Override default D0/D1 pins with GPIO pins
// First undefine the board's default definitions
#ifdef I2C1_SDA_PIN
#undef I2C1_SDA_PIN
#endif
#ifdef I2C1_SCL_PIN
#undef I2C1_SCL_PIN
#endif

// For RP2040, define I2C pins using just the GPIO pin numbers
// RP2040 GPIO pins are 0-29, and we use GP4 and GP5
// The vendor I2C driver will handle these, but we need to define
// these to prevent ChibiOS I2C driver from trying to use D0/D1
#define I2C1_SDA_PIN 4
#define I2C1_SCL_PIN 5

