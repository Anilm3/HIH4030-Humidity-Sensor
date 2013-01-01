/********************************************************************************
* HIH4030 Library - HIH4030.h                                                   *
*                                                                               *
* Copyright (C) 2013 Anil Motilal Mahtani Mirchandani(anil.mmm@gmail.com)       *
*                                                                               *
* License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html> *
* This is free software: you are free to change and redistribute it.            *
* There is NO WARRANTY, to the extent permitted by law.                         *
*                                                                               *
*********************************************************************************/

#include <HIH4030.h>

		
HIH4030::HIH4030(const uint8_t pin)
{
	sensorPin = pin;
}

float HIH4030::read(float temperature)
{
	int value = analogRead(sensorPin);
	float humidity = ((value / 1024.0) - 0.16) / 0.0062;
	
	if (temperature != 25.0)
	{
		humidity /= (1.0546 - 0.00216 * temperature);
	}
	
	return humidity;
}
