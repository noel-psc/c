#include <stdio.h>
#include <string.h>

#define MAX 128

int main(void)
{
	int ch, i, j = 0, most = 0;
	int ascii[MAX] = {0};
	int num = 0;
	char different[MAX] = "";

	printf("请输入英文文本：");

	while ((ch = getchar()) != '\n')
	{
		ascii[ch]++; // 下标表示字符的askii码，索引值表示出现的次数
		num++; // 共输入的字符数
	}

	for (i = 0; i < MAX; i++)
	{
		if (ascii[i])
		{
			different[j++] = i;
			if (ascii[i] > ascii[most])
			{
				most = i;
			}
		}
	}

	printf("你总共输入了%d个字符， 其中不同的字符个数有%ld个。\n", num, strlen(different));
	printf("它们是：%s\n", different);
	printf("出现次数最多的字符是\'%c\'， 它总共出现了%d次。\n", most, ascii[most]);

	return 0;
}
