/*
* Sends a brief square wave over a digital pin
*
* Copyright (C) 2022 Simon D. Levy
*
* MIT License
*/

static const uint32_t PULSE_DUR_MSEC = 10;
static const uint32_t PIN_DUR_USEC = 2000000;

void setup()
{
    Serial.begin(115200);

    delay(2000);
}


void loop()
{  

    while (Serial.available() < 1) {
    }

    auto pin = Serial.parseInt();

    auto start_usec = micros(); 

    while (micros() - start_usec < PIN_DUR_USEC) {

        pinMode(pin, OUTPUT);

        digitalWrite(pin, HIGH);
        delay(PULSE_DUR_MSEC);

        digitalWrite(pin, LOW);
        delay(PULSE_DUR_MSEC);
    }
}
