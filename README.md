# Smart_I2C_Scanner

This Arduino sketch allows you to scan for I<sup>2</sup>C devices on a variety of Arduino-compatible microcontroller boards.  On boards that support more than one I<sup>2</sup>C port (Arduino Due; Teensy 3.2, 3.6; Tlera Corp STM32L4 boards), it checks SDA0/SDL0.  (Teensy users needing a more sophisticated scanner should use this 
<a href="https://github.com/nox771/i2c_t3/tree/master/examples/advanced_scanner">sketch</a>.)

I have tested this sketch on the following boards:
* Arduino Uno, Mega, Leonardo, Due
* Teensy 3.2, 3.6
* Tlera Corp STM32L4 Ladybug, Butterfly, Dragonfly
* Pesky Products SuperFly Hackable ESP8266 Flight Controller
* Adafruit HUZZAH32 ESP32 Feather
