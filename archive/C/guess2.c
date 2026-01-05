#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

	int a, b, sum;
	sum = 5;

	srand((unsigned)time(NULL));
	a = rand() % 100;

	for(;;)
	{

		sum--;

		scanf_s("%d", &b);
		if (b > a)
			printf("大了 傻卵 你他妈只有%d次机会啦 珍惜吧小子\n", sum);
		if (b < a)
			printf("小了 傻卵 你他妈只有%d次机会啦 珍惜吧小子\n", sum);
		if (b == a)
		{

			printf("抄你吗运气这么好 \n");
			break;
		}
		if (sum == 0)
		{

			printf("哈哈傻卵 再见啦 滚去开机吧");

			break;
		}
	}
	return 0;
}