#include <HIH4030.h>

HIH4030 humidity(A0);

void setup() 
{
	Serial.begin(9600);
}

void loop() 
{
	Serial.println(humidity.read());
	delay(1000); 
}
