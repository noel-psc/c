# 1 "e:\\Work\\Coding\\Arduino\\test.ino"
# 2 "e:\\Work\\Coding\\Arduino\\test.ino" 2

void setup()
{
 // 设置通信频率为9600
 Serial.begin(9600);

 pinMode(A0, 0x1);

}

void loop()
{
 analogWrite(A0, 500);

}
