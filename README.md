# Attiny85-Bootloader-Tutorial
I recently got one of those cheap chinese attiny USB socket boards and discovered that in order to use the arduino IDE, you need to burn a bootloader onto it. I found a few tutorials online, but a lot of them felt incomplete or included redundant steps. 

Video:

[![View the making of here](https://img.youtube.com/vi/axagDO8AKSI/0.jpg)](https://www.youtube.com/watch?v=axagDO8AKSI)

Here's how to burn a bootloader to an Attiny85 using an Arduino UNO:

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

Also connect a 10uF capacitor between arduino RST and arduino GND. If using an electrolytic capacitor, put anode on RST and cathode on GND.

12. Connect your arduino again via USB and go into the Arduino IDE. Check what port it's connected to. In my case it's COM3.
13. Edit the burn_attiny85_bootloader.bat file from this repository (right click and edit). Edit the part that says -PCOM22 to match your port. In my case since I use COM3, I'll edit it to -PCOM3
14. Save and copy both the bat file and t85_default.hex to your arduino install directory.
15. Run the bat file, and it should now burn the bootloader to your attiny85.

# Uploading via arduino
After adding the bootloader, you can now upload via arduino. There's a testsketch in this repo if you just want to blink the debug LED.

1. Write your sketch as usual.
2. Connect your attiny to your USB socket board. But don't plug it to the computer yet.
3. In the arduino IDE, pick Digispark (Default - 16.5mhz). Port doesn't matter.
4. Hit upload sketch.
5. After compiling, the IDE will ask you to plug your attiny in. Do that, and the sketch will upload.


Credits & sources:
https://www.youtube.com/watch?v=FI3s4d2I1eQ
https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829
https://digistump.com/board/index.php?topic=1841.0
