#include <Arduino.h>
#line 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
#include <Wire.h>   

#line 3 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
void setup();
#line 13 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
static void scan(TwoWire & wire, const char * name);
#line 54 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
void loop();
#line 3 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
void setup()
{
    Serial.begin(115200);

    Wire.begin();
    //Wire1.begin();

    delay(100);
}

static void scan(TwoWire & wire, const char * name)
{

    Serial.print("Scanning ");
    Serial.print(name);
    Serial.println (" ...");

    int nDevices = 0;

    for(byte address = 1; address < 127; address++ ) 
    {

        wire.beginTransmission(address);

        byte error = wire.endTransmission();

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

void loop()
{  
    scan(Wire, "Wire");
    //scan(Wire1, "Wire1");

}

