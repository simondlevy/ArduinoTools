#include <Arduino.h>
#line 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/SerialTest/SerialTest.ino"
#line 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/SerialTest/SerialTest.ino"
void setup();
#line 7 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/SerialTest/SerialTest.ino"
void loop();
#line 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/SerialTest/SerialTest.ino"
void setup()
{
    Serial.begin(115200);

}

void loop()
{  
    Serial.println(millis());

    delay(100);
}

