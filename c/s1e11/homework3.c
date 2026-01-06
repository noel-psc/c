#include <stdio.h>
#include "seebtr1.h"

int main()
{
	int age, max_hr, hr, bpm = 150; // 声明年龄、最高心率、当前心率、bpm

	//接收用户输入年龄
	printf("请输入您的年龄：");
	scanf("%d", &age);

	//计算用户最高心率
	max_hr = 220 - age;

	//播放默认150bpm的音乐
	playSound(bpm);

	//获取用户当前心率
	hr = getHeartRate();

	//判断当前心率与最高心率的关系并决定播放哪种阴乐
	if (hr > max_hr)
	{
		printf("请马上停止跑步，否则会有绳命危险......");
	}
	else if (hr > max_hr * 0.85)
	{
		printf("请放慢脚步");
		bpm -= 20;
		playSound(bpm);
	}
	else if (hr < max_hr * 0.75)
	{
		printf("Come on，请加快节奏！");
		bpm += 20;
		playSound(bpm);
	}
	else
	{
		playSound(bpm);
	}

	return 0;
}
