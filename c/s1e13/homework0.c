#include <stdio.h>

int main()
{
	int num = 0; // 声明：大写字母个数
	char ch; // 声明：getchar()获取的字符值
	// 判断getchar()为大写并将num自加1
	printf("请输入一行英文句子：");
	while ((ch = getchar()) != '\n')
	{
		ch >= 'A' && ch <= 'Z' && num++;
	}

	printf("你总共输入了%d个大写字母！\n", num);

	return 0;
}
