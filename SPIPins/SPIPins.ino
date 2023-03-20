/*
* Reports default pins on the SPI bus
*
* Adapted from https://microcontrollerslab.com/esp32-spi-communication-tutorial-arduino/
*
* Copyright (C) 2018 Simon D. Levy
*
* MIT License
*/

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  Serial.print("MOSI Pin=");
  Serial.print(MOSI);
  Serial.print("  MISO Pin=");
  Serial.print(MISO);
  Serial.print("  SCK Pin=");
  Serial.print(SCK);
  Serial.print("  SS Pin=");
  Serial.println(SS);

  delay(500);
}


