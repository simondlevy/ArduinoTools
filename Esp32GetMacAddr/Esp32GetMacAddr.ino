/*
Copyright (c) 2022 Simon D. Levy

MIT License

*/

#include "WiFi.h"
 
void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_MODE_STA);
}
 
void loop(){
  Serial.println(WiFi.macAddress());
  delay(500);

}
