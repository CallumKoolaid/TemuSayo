# temu_sayo

A 4-key rhythm game keyboard with OLED display and RGB lighting support.

* Keyboard Maintainer: [CallumKoolaid](https://github.com/CallumKoolaid)
* Hardware Supported: Mini Raspberry Pi RP2040-Zero, 0.96 inch OLED I2C SSD1306 128x64, WS2812B RGB LEDs
* Hardware Availability: Custom build

Make example for this keyboard (after setting up your build environment):

    make temu_sayo:default

Flashing example for this keyboard:

    make temu_sayo:default:flash

Or with VIA support:

    make temu_sayo:via:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Features

* **4 Keys**: Direct pin configuration on GP0, GP1, GP2, GP3
* **OLED Display**: 128x64 SSD1306 OLED display via I2C on GP4 (SDA) and GP5 (SCL)
* **RGB Lighting**: WS2812B RGB LEDs (8 LEDs) on pin GP16
* **VIA Support**: Full VIA/VIAL configuration support

## Hardware Connections

* **Keys**: Direct pins GP0, GP1, GP2, GP3 (with pull-up resistors)
* **OLED**: I2C connection on GP4 (SDA) and GP5 (SCL)
* **RGB LEDs**: WS2812B data line on pin GP16

## Configuration Files

* **keyboard.json**: Main keyboard configuration with RP2040 pin mappings
* **config.h**: Overrides board default I2C pin definitions (GP4/GP5 instead of D0/D1)

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (the first key) and plug in the keyboard
* **Physical reset button**: Briefly press the reset button on the RP2040-Zero (or double-press if using bootsel mode)
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
