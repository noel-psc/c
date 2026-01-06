#include <stdio.h>

int main()
{
	int ch, a=0, e=0, i=0, o=0, u=0, total=0; // 输入、五个元音字母
	
	// 循环查找用户输入的字符，if-else判断是否为元音字母
	printf("请输入一个英文句子：");
	while ((ch = getchar()) != '\n')
	{
		if (ch == 'A' || ch == 'a'){a++;}
		else if (ch == 'E' || ch == 'e'){e++;}
		else if (ch == 'I' || ch == 'i'){i++;}
		else if (ch == 'O' || ch == 'o'){o++;}
		else if (ch == 'U' || ch == 'u'){u++;}
	}

	// 计算元音字母总数
	total = a + e + i + o + u;

	// 输出结果
	printf("您输入的句子中，包含元音字母%d个！\n", total);
	printf("其中:a(%d), e(%d), i(%d), o(%d), u(%d)\n", a, e, i, o ,u);

	return 0;
}
