/********************************************************************************
* HIH4030 Library - HIH4030.cpp                                                 *
*                                                                               *
* Copyright (C) 2013 Anil Motilal Mahtani Mirchandani(anil.mmm@gmail.com)       *
*                                                                               *
* License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html> *
* This is free software: you are free to change and redistribute it.            *
* There is NO WARRANTY, to the extent permitted by law.                         *
*                                                                               *
*********************************************************************************/

#ifndef _HIH4030_H
#define _HIH4030_H

#include <Arduino.h>

class HIH4030
{
	private:
		int sensorPin;
		
	public:
		
		HIH4030(const uint8_t pin);
	
		float read(float temperature = 25.0);
};

#endif // _HIH4030_H
