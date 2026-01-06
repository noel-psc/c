#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "FishC.com!";
	char str2[] = "Fishc.com!";

	if (!strcmp(str1, str2))
	{
		printf("两个字符串完全一致！\n");
	}
	else
	{
		printf("两个字符串存在差异！\n");
	}

	return 0;
}
