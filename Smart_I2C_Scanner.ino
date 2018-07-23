/*
* Smart_I2C_Scanner.ino : scans for connected I2C devices on a variety of Arduino-compatible microcontrollers

* Copyright (C) 2018 Simon D. Levy
*
* MIT License
*/

#if defined(TEENSYDUINO) 
#include <i2c_t3.h>
#else
#include "Wire.h"   
#endif

void setup()
{
    Serial.begin(115200);
    delay(1000);

#if defined(TEENSYDUINO)
    Wire.begin(I2C_MASTER, 0x00, I2C_PINS_18_19, I2C_PULLUP_INT, 400000);
#elif defined(STM32L4)
    Wire.begin(TWI_PINS_20_21); 
#else
    Wire.begin();
#endif

    delay(1000);
}

void loop()
{  
    Serial.println("Scanning...");

    int nDevices = 0;
    for(byte address = 1; address < 127; address++ ) 
    {

#if defined(STM32L4)
        byte error = Wire.transfer(address, NULL, 0, NULL, 0);
#else
        Wire.beginTransmission(address);
        byte error = Wire.endTransmission();
#endif
        if (error == 0)
        {
            Serial.print("I2C device found at address 0x");
            if (address<16) 
                Serial.print("0");
            Serial.println(address,HEX);

            nDevices++;
        }
        else if (error==4) 
        {
            Serial.print("Unknown error at address 0x");
            if (address<16) 
                Serial.print("0");
            Serial.println(address,HEX);
        }    
    }
    if (nDevices == 0)
        Serial.println("No I2C devices found\n");
    else
        Serial.println("done\n"); 

    delay(1000);
}
