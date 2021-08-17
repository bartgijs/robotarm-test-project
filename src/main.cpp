#include <Arduino.h>
#include "integration.hpp"

void setup() {
	Serial.begin(9600);
}

void loop() {
	printTestMessage();
}