# ESP32-C6-MicroDev
A versatile minimal dev board based on the ESP32-C6-MINI-1-N4.
 
Using ESPHome this is can be used as a local only replacement for the Tuya module in Skyfan DC ceiling fans, removing the need for cloud connectivity. See [examples](https://github.com/Saw-Fish/ESP32-C6-MicroDev/tree/main/Examples) for basic config.

**Note: This device is in no way associated or approved by Ventair, using it in this manner may void your warranty.**

The full source for later versions will be posted once complete. V0.1 is not for production as there are minor bugs (see below).

## Purchasing

Boards are available on [Tindie](https://www.tindie.com/products/saw_fish/esp32-c6-microdev-v01/)

## Installation


Boards can be flashed with ESPHome or your IDE of choice.

Purchased boards will be flashed with a minimal program that provides basic information about the board via serial. Baud rate 115200. 

The USB-C port is for uploading a program via the C6 built in USB-JTAG interface.


## Usage


- The USB-A port is for runtime use. The pinout is the same as a standard USB-A with the exeption of the Vbus pin being directly connected to the 3.3V rail on the board. Do NOT plug this in to a standard USB-A port, doing so will damage the device.

- There is a JST SH connector on the board that is pinned in the Qwiic format. The 4.7k pullups for I2C that can be disabled by cutting the jumpers on the bottom of the board if required.

- Do NOT power this device via the USB-A and USB-C port at the same time.

See the appropriate version folder for your device to find the pinouts of all broken out pins.


## Known Issues

**V0.1:** The labels on the RESET & BOOT buttons are switched, this will be fixed in the next version. The BOOT button will reset the device and the RESET button will put it into download mode.

## Software

Designed in KiCad

## Feedback and Contributing
Contributions, issues and feature requests are welcome.

## Credit
Thanks to James Egglston for his original work, all tuya data points and functional code from here. https://github.com/jeggleston1981/skyfandc


## License

Licensed under the CERN-OHL-S-2.0 license
