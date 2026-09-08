static const uint8_t kLedPin = LED_BUILTIN;
static const uint32_t kDelayMsec = 250;

void setup()
{
    pinMode(kLedPin, OUTPUT);
}

void loop()
{  
    digitalWrite(kLedPin, HIGH);
    delay(kDelayMsec);
    digitalWrite(kLedPin, LOW);
    delay(kDelayMsec);
}
