#include <stdio.h>
#include <string.h>

#define MAX 64
#define NUM 5

int main(void)
{
	char slogan[NUM][MAX] = {};
	int i, j, ch, min, max, temp;

	for (i = 0; i < NUM; i++)
	{
		printf("请输入第%d句话：", i + 1);
		for (j = 0; (ch = getchar()) != '\n'; j++)
		{
			slogan[i][j] = ch;
		}
		slogan[i][j] = '\0';
	}

	// 打印每句口号，并比较长度
	printf("你输入了下边%d句话：\n", NUM);
	for (i = 0; i < NUM; i++)
	{
		printf("%s\n", slogan[i]);
		temp = strlen(slogan[i]);
		min = strlen(slogan[min]) > temp ? i : min;
		max = strlen(slogan[max]) < temp ? i : max;

	}

	printf("其中最长的是：%s\n", slogan[max]);
	printf("其中最短的是：%s\n", slogan[min]);

	return 0;
}
