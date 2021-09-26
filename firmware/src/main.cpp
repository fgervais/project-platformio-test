/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

constexpr auto LED = 4;


void setup()
{
	// initialize LED digital pin as an output.
	pinMode(LED, OUTPUT);
}

void loop()
{
	// turn the LED on (HIGH is the voltage level)
	digitalWrite(LED, HIGH);

	// wait for a second
	delay(1000);

	// turn the LED off by making the voltage LOW
	digitalWrite(LED, LOW);

	// wait for a second
	delay(1000);
}
