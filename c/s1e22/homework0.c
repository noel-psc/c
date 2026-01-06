#include <stdio.h>

#define MAX 1024

int main(void)
{
	/*
	char str[MAX];
	int i;

	printf("请输入一个字符串：");
	fgets(str, MAX, stdin);
	for (i = 0; str[i] != '\n'; i++)
		;
	printf("您总共输入了 %d 个字符！\n", i);
	*/

	char str[MAX];
	char *target = str;
	int length = 0;

	printf("请输入一个字符串：");
	fgets(str, MAX, stdin);

	while (*target++ != '\0')
	{
		length++;
	}

	printf("您总共输入了 %d 个字符！\n", length - 1);

	return 0;
}
