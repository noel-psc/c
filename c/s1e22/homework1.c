#include <stdio.h>

#define MAX 1024

int main(void)
{
	char str1[MAX], str2[MAX];
	char *target1 = str1, *target2 = str2;

	printf("请输入一个字符串到 str1 中：");
	fgets(str1, MAX, stdin);

	printf("开始拷贝 str1 的内容到 str2 中...\n");
	while ((*target2++ = *target1++) != '\0')
		;

	printf("拷贝完毕！\n");
	printf("现在，str2 中的内容是：%s", str2);

	return 0;
}
