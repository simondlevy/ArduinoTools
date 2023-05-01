/*
* Sends an analog signal over a 12-bit DAC
*
* Copyright (C) 2022 Simon D. Levy
*
* MIT License
*/

#include <stdint.h>

static uint8_t PIN = A0;

void setup() 
{
    analogWriteResolution(12);
}

void loop() 
{
    static int8_t dir;
    static uint16_t val;

    dir = dir == 0 ? +1 :
        val == 4096 ? -1 :
        val == 0  ? +1 :
        dir;

    val += dir;

    analogWrite(PIN, val);

    delay(10);
}
