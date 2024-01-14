# 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/SerialTest/SerialTest.ino"
void setup()
{
    SerialUSB.begin(115200);

}

void loop()
{
    SerialUSB.println(millis());

    delay(100);
}
