#include <stdio.h>

int main()
{
	char ch[6] = "FishC";
	int i;

	printf("请输入你想访问的字符序号(0~5)：");
	scanf("%d", &i);

	if (0 <= i && i <= 5)
	{
		printf("%c\n", ch[i]);
	}
	else
	{
		printf("请输入0~5之间的整数！\n");
	}

	return 0;
}
