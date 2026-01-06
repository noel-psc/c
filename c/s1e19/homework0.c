#include <stdio.h>

#define MAX 1024

int main(void)
{
	char str1[MAX], str2[MAX];
	int i = 0;
	unsigned int n;

	printf("请输入第一个字符串：");
	while ((str1[i++] = getchar()) != '\n')
		;

	printf("请输入第二个字符串：");
	i = 0;
	while ((str2[i++] = getchar()) != '\n')
		;

	printf("请输入比较的字符数：");
	scanf("%u", &n);

	for (i = 0; i < n; i++)
	{
		if (str1[i] - str2[i])
			break;
	}

	printf("比较的结果是：%d\n", str1[i] - str2[i]);

	return 0;
}
