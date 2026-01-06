#include <stdio.h>

int main()
{
	char ch; // 声明：getchar()获取的值

	// 循环获取句子的每一个字符赋值给ch，并利用短路&&的特性将大小写字母转换
	printf("请输入一行英文句子：");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch -= 32;
		}

		putchar(ch);
	}

	printf("\n");

	return 0;
}
