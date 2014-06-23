#include "DHT.h"
float h,t;
#include "DHT22.txt"

void setup() {
	// Initialize Serial port
  Serial.begin(115200);
  dht_setup();
}

void loop() {
  dht_loop();
}

