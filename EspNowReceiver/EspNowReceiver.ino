/*
* Writes incoming bytes from ESP-NOW to serial output
*
* Copyright (C) 2023 Simon D. Levy
*
* MIT License
*/

#include <esp_now.h>
#include <WiFi.h>

static void onDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len)
{
    (void)mac;

    for (auto k=0; k<len; ++k) {

        Serial.write(incomingData[k]);
    }
}

void setup(void)
{
    Serial.begin(115200);

    WiFi.mode(WIFI_STA);

    if (esp_now_init() != ESP_OK) {

        while (true) {
            Serial.println("Error initializing ESP-NOW");
            delay(500);
        }
    }

    esp_now_register_recv_cb(onDataRecv);
}


void loop(void)
{
}
