/*
  WiFiEsp example: Serial_Passthrough

  This example sketch is a handy "serial passthrough". Anything
  sent to the microcontroller serial port will be routed to the ESP8266
  software serial port, and vice-versa.
  
  If you use the Serial Monitor, make sure you SET THE LINE
  ENDING PULLDOWN to "Both NL & CR".

  For example, to set the mode to STA, connect to a network,
  and check your IP address, type:
  AT+CWMODE=1
  AT+CWJAP="networkName","networkPassword"
  AT+CIFSR
*/
#include <WiFiEsp.h>

void setup() {
  Serial.begin(115200);     // initialize serial for debugging
  WiFi.on();        // activates the Wifi module
  WiFi.init(&wifi);      // initialize Wifi module
}

void loop() {
  while (Serial.available())
    wifi.write(Serial.read());

  while (wifi.available())
    Serial.write(wifi.read());
}
