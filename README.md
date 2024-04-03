# Instructions
This is an IoT application using WiFi and a ESP32-WROOM-32 board to implement different functionalities such as: OTA board flashing, SNT protocol, getting sensor payload data, WiFi device in AP and station modes. The interaction with the application is quite intuitive. The connection scheme is shown below, along with a demo of the application. 

Firstly, a client device connects to the esp board as if it was connecting to a common WiFi router. After this the webpage can be accessed using the desired web browser and the gateway address. The credentials can be found on the wifi_app.h file. Further, on the web page, we can get the esp to connect to a WiFi router with internet access. This will allow us to use the SNT protocol. 

Note: depending on the region and access restrition to some servers, SNT may not work. Thus, the SNT server address may need some update on the file sntp_time_sync.c , on the function sntp_time_sync_init_sntp to the desirable one. A list of available servers can be easily found on the web.

Note: the timezone should be set according to your region on the file sntp_time_sync.c. The file TimeZones conatins the timezone codes for each region.

Note: for the Firmware upgrade there should be a .bin file.

# Demo

![](https://github.com/Benedito821/wifi_IoT_application/blob/master/demo.gif)
