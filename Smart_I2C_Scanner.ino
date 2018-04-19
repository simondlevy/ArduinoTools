#include "Wire.h"   

void setup()
{
    Serial.begin(115200);
    delay(1000);

#ifdef STM32L4
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

#ifdef STM32L4
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
