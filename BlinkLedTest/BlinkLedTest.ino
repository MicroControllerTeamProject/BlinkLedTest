/*
 Name:		BlinkLedTest.ino
 Created:	10/15/2026 1:32:02 AM
 Author:	luigi
*/
#include <OneWire.h>
#include <ArduinoJson.h>
#include <ChipTemp.h>
#include <DallasTemperature.h>
OneWire oneWire(2);
DallasTemperature sensoreTemperatura(&oneWire);
ChipTemp temperatura;
// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	Serial.println("Hello, world2!");
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
