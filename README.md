# Smart_I2C_Scanner

This Arduino sketch allows you to scan for I<sup>2</sup>C devices on a variety of Arduino-compatible microcontroller boards.  On boards that support more than one I<sup>2</sup>C port (Arduino Due; Teensy 3.2, 3.6; Tlera Corp STM32L4 boards), it checks SCD0/SDL0.  (Teensy users needing a more sophisticated scanner should use this 
<a href="https://github.com/nox771/i2c_t3/tree/master/examples/advanced_scanner">sketch</a>.)

I have tested this sketch on the following boards:
* Arduino Uno
* Arduino Mega
* Arduino Leonard
* Arduino Due
* Teensy 3.2
* Teensy 3.6
* Tlera Corp STM32L4 Ladybug
* Tlera Corp STM32L4 Butterfly
* Tlera Corp STM32L4 Dragonfly

