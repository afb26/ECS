# Detailed PCB features

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
