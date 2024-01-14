# 1 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino"
# 2 "/home/levys@ad.wlu.edu/Desktop/ArduinoTools/I2CScanner/I2CScanner.ino" 2

void setup()
{
    SerialUSB.begin(115200);

    Wire.begin();
    //Wire1.begin();

    delay(100);
}

static void scan(TwoWire & wire, const char * name)
{

    SerialUSB.print("Scanning ");
    SerialUSB.print(name);
    SerialUSB.println (" ...");

    int nDevices = 0;

    for(byte address = 1; address < 127; address++ )
    {

        wire.beginTransmission(address);

        byte error = wire.endTransmission();

        if (error == 0)
        {
            SerialUSB.print("I2C device found at address 0x");
            if (address<16)
                SerialUSB.print("0");
            SerialUSB.println(address,16);

            nDevices++;
        }
        else if (error==4)
        {
            SerialUSB.print("Unknown error at address 0x");
            if (address<16)
                SerialUSB.print("0");
            SerialUSB.println(address,16);
        }
    }
    if (nDevices == 0)
        SerialUSB.println("No I2C devices found\n");
    else
        SerialUSB.println("done\n");

    delay(1000);
}

void loop()
{
    scan(Wire, "Wire");
    //scan(Wire1, "Wire1");

}
