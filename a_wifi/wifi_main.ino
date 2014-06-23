#include <SPI.h>
#include <SFE_CC3000.h>
#include <SFE_CC3000_Client.h>

char device_id[]="DOC101";
char sensor[]="lpg";
char value[]="0.0";

#include "wifi_tcp_get.txt"

void setup() {
    
  // Initialize Serial port
  Serial.begin(115200);

  wifi_setup();

  // Make a TCP connection to remote host
  tcp_setup();

  get_http();
}

void loop() {
   wifi_loop();
}