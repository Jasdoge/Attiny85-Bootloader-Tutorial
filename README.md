# Attiny85-Bootloader-Tutorial
How to burn a bootloader to an Attiny85 using an Arduino UNO

1. Install the Arduino IDE https://www.arduino.cc/en/Main/Software
2. Install the digistump drivers https://github.com/digistump/DigistumpArduino/releases
3. Open the arduino IDE and go to file > preferences.
4. Add http://digistump.com/package_digistump_index.json to the additional boards manager URLs.
5. Go to tools > board > boards manager.
6. Search for digistump, and install Digistump AVR boards.
7. Connect your arduino uno via USB.
8. Go to file > examples > 11. ArduinoISP > ArduinoISP to open the ArduinoISP sketch.
9. Hit the arrow button to upload it to your arduino.
10. Unplug your arduino and get your Attiny85, breadboard, some wires, and a 10uF capacitor.
11. Wire the following:

| Attiny physical pin | Arduino GPIO/Pin |
| --- | --- |
| 1 | 10 |
| 4 | GND |
| 5 | 11 |
| 6 | 12 |
| 7 | 13 |
| 8 | 5V |

