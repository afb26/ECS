# Instructions for flashing and use
*This code is kept simple to hopefully allow as many people as possible to understand and use it. The following instructions relate to Arduino IDE V1.*


1. Open ECS.ino in Arduino IDE. [Download.](https://www.arduino.cc/en/software#future-version-of-the-arduino-ide)
2. Download [ESPAsyncWebServer](https://github.com/me-no-dev/ESPAsyncWebServer) and [AsyncTCP](https://github.com/me-no-dev/AsyncTCP/tree/master) libraries and move them into Arduino/libraries folder. Full guide, refer to "Manual Installation" section: [Link](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)
3. Install Arduino core for the ESP32. [Instructions](https://docs.espressif.com/projects/arduino-esp32/en/latest/installing.html)
3. In UserDefines.h, the first code segment allows you to select which motor driver chip/board you are using. In order to select one, uncomment the line (remove the double back-slash at the beginning of the line), and ensure all the ones you are not using are commented. If the motor driver you wish to use is not included, please raise an issue on GitHub with a link to the motor driver. Refer to ISSUES.md for instructions.
4. In ECS.ino, navigate to line 32, and follow the instructions there.
5. Select "ESP32S3 Dev Module" as board and in the board menu ensure the following settings:
    - CPU Frequency: "240MHz (Wifi)"
    - Flash Size: "4MB (32Mb)"
6. Plug in the ECS unit (USB will not provide power, requires external power) and select the com port in the board menu.
7. In the board menu, "select ESP32 Sketch Data Upload", allow that to finish before continuing.
8. Verify and Upload the main program.
9. On a mobile device, navigate the WiFi connections in Settings. A WiFi network named “Battle Bot AP” followed by the serial number of the unit will appear (may need to refresh WiFi).
10. Connect to this network with the password, “ecspassword”.
11. Open a browser on your device.
12. Enter the web address “10.10.10.10”. A webpage will appear with 5 simple control buttons to test the workings of the Battle Bot.

**If you encounter issues, please log an issue on Github or reach out at alexanderblackman7@icloud.com**