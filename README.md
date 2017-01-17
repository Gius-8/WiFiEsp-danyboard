# WiFiEsp

This library is a modified version of the library [WiFiEsp](https://github.com/bportaluri/WiFiEsp) by Bruno Portaluri.
With an ESP8266 board, WiFiEsp library allows an Arduino board to connect to the internet.
It can serve as either a server accepting incoming connections or a client making outgoing ones.
The WiFiEsp library is very similar to the Arduino [WiFi](http://www.arduino.cc/en/Reference/WiFi) and [Ethernet](http://www.arduino.cc/en/Reference/Ethernet) libraries, and many of the function calls are the same. 

Supports ESP SDK version 1.1.1 and above (AT version 0.25 and above).


##Features

- APIs compatible with standard Arduino WiFi library.
- Use AT commands of standard ESP firmware (no need to flash a custom firmware).
- Support hardware and software serial ports.
- Configurable tracing level.

##Wiring

The WiFiEsp library has been modified to work with [Danyboard M0](http://www.danyboard.com/).
Danyboard M0 uses an ESP-WROOM-02 module to provide networking capabilities to board.


##Examples

- [ConnectWPA](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/ConnectWPA/ConnectWPA.ino) - Demonstrates how to connect to a network that is encrypted with WPA2 Personal
- [WebClient](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/WebClient/WebClient.ino) - Connect to a remote webserver 
- [WebClientRepeating](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/WebClientRepeating/WebClientRepeating.ino) - Make repeated HTTP calls to a webserver 
- [WebServer](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/WebServer/WebServer.ino) - Serve a webpage from the WiFi shield 
- [WebServerAP](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/WebServerAP/WebServerAP.ino) - Serve a webpage from the WiFi shield starting a local Access Point
- [WebServerLed](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/WebServerLed/WebServerLed.ino) - Turn on and off a led from a webpage
- [UdpNTPClient](https://github.com/Gius-8/WiFiEsp-danyboard/master/examples/UdpNTPClient/UdpNTPClient.ino) - Query a Network Time Protocol (NTP) server using UDP


##Supported APIs

Most of the standard Arduino WiFi library methods are available. Refer to the [WiFi library page](http://www.arduino.cc/en/Reference/WiFi) for more details.

###WiFiEsp class

- begin() - Not all authentication types
- disconnect() - YES
- config()
- setDNS() - NO (no AT command available)
- SSID() - YES
- BSSID() - YES
- RSSI() - YES
- encryptionType() - NO (no AT command available)
- scanNetworks() - YES
- getSocket()
- macAddress() - YES


###WiFiEspServer class

The WiFiEspServer class creates servers which can send data to and receive data from connected clients (programs running on other computers or devices).

- WiFiEspServer() - YES
- begin() - YES
- available() - YES
- write() - YES
- print() - YES
- println() - YES
- on() - Enable wifi module
- off() - Disable wifi module


###Client class

The WiFiEspClient class creates clients that can connect to servers and send and receive data.

- WiFiEspClient() - YES
- connected() - YES
- connect() - YES
- write() - YES
- print() - YES
- println() - YES
- available() - YES
- read() - YES
- flush() - YES
- stop() - YES


###WiFiEspUDP class

The UDP class enables UDP message to be sent and received.

- WiFiUDP - YES
- begin() - YES
- available() - YES
- beginPacket() - YES
- endPacket() - YES
- write() - YES
- parsePacket() - YES
- peek()
- read() - YES
- flush()
- stop()
- remoteIP() - YES
- remotePort() - YES


##Contributing

If you discover a bug or would like to propose a new feature, please open a new [WiFiEsp-danyboard/issue](https://github.com/Gius-8/WiFiEsp-danyboard/issues) or [WiFiEsp/issue](https://github.com/bportaluri/WiFiEsp/issues).
