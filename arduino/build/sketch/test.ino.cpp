#line 1 "e:\\Work\\Coding\\Arduino\\test.ino"
#include <Arduino.h>

#line 3 "e:\\Work\\Coding\\Arduino\\test.ino"
void setup();
#line 12 "e:\\Work\\Coding\\Arduino\\test.ino"
void loop();
#line 3 "e:\\Work\\Coding\\Arduino\\test.ino"
void setup()
{
	// 设置通信频率为9600
	Serial.begin(9600);

	pinMode(A0, OUTPUT);

}

void loop()
{
	analogWrite(A0, 500);
	
}
