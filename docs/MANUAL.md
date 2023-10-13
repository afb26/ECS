# Equal Control System Usage Manual

*https://github.com/afb26/ECS*

## Pin Sets / Connectors  
**3V3**
- 3.3V ouput
- 200mA max current output
- Intended use: reference voltage
- **Do NOT use for powering motors/servos**

**VBAT**
- Power Input
- 12V max voltage input
- 5V min voltage input
- JST-PH 2 POS connector()

**MX1/2/3**
- Digital logic pins for controlling motor drivers
- Can not source current, exclusively IO pins

**PWM**
- Digital logic pins for servos/other features
- 6x3 pin headers with PWM, VBAT and GND

**USB**
- USB B Mini
- Port only for programming (unless solder jumper is solder)
- Cannot source or sink power by default

## Wiring (Adafruit TB6612)
*https://www.adafruit.com/product/2448*
If a motor is spinning in the reverse direction to intended, simply reverse the connection for MX1 and MX2. Also note that other connections are required, including but not limited to: Vmotor (4.5V-13.5V), Motor A/B and ECS Power.

| ECS | TB6612 |
| --- | ------ |
| 3V3 | Vcc    |
| GND | GND    |
| MX1 | XIN1   |
| MX2 | XIN2   |
| MX3 | PWMX   |

## Instructions for Use

**N.B. The code flashed by default to the ECS is not intended for competition use. The code presents a minimum interface for testing with simple Forward, Backward, Left, Right and Stop buttons.**

The default code is intended for use with the TB6612 motor driver. If using a different motor driver please contact the competition team (details on last page) for updated code. In your email please include a link and/or other information about the motor driver being used.

1. Power the ECS unit.
2. On a mobile device, navigate the WiFi connections in Settings.A WiFi network named “Battle Bot AP” followed by the serial number of the unit will appear (may need to refresh WiFi).
3. Connect to this network with the password, “ecspassword”.
4. Open a browser on your device.
5. Enter the web address “10.10.10.10”. A webpage will appear with 5 simple control buttons to test the workings of the Battle Bot.