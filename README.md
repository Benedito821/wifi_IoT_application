# Instructions
This is an IoT application using WiFi and a ESP32-WROOM-32 board to implement different functionalities such as: OTA board flashing, SNT protocol, getting sensor payload data, WiFi device in AP and station modes. The interaction with the application is quite intuitive. The connection scheme is shown below, along with a demo of the application. 

Firstly, a client device connects to the esp board as if it is connecting to a common WiFi router. After this the webpage can be accessed using the desired web browser and the gateway address. The credentials can be found on the wifi_app.h file. Further, on the web page, we can get the esp to connect to a WiFi router with internet access. An internet connection would be important for future features like getting time from an SNTP server or using MQTT.

Note: for the Firmware upgrade there should be a .bin file.

After downloading the project, build,flash and monitor it. Used resources/tools: VS Code, ESP-IDF plugin, Google Chrome,ESP32-WROOM-32, TP_link router,Samsung mobile phone.

# Connection Scheme

![](https://github.com/Benedito821/wifi_IoT_application/blob/master/scheme.png)

# Demo

![](https://github.com/Benedito821/wifi_IoT_application/blob/master/demo.gif)
