// OTA.h

#ifndef _OTA_h
#define _OTA_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

class OTAClass
{
private:
	bool CheckOnRPi();
 protected:


 public:
	void init();
	void loop();
	bool check();
	bool enabled;
};

extern OTAClass OTA;

#endif

