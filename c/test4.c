#include <stdio.h>
#define MAX 256

int comp(int num, int guess)
{
	printf("0默认，1小了，2大了\n");
	int res = 0;
	if (guess > num)
		res = 2;
	else if (guess < num)
		res = 1;

	return res;
}

int main(void)
{
	int num = 8;
	int guess = 0;
	int res = 0;
	printf("猜猜我心里想的是几（0-64）：");
	scanf("%d", &guess);
	while (guess != num)
	{
		res = comp(num, guess);
		printf("%d\n", res);
		scanf("%d", &guess);	
	}
	printf("恭喜你，答对啦！");

	return 0;
}
