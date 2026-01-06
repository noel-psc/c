#include <stdio.h>

int main()
{
	double f, c;

	printf("请输入华氏度：");
	scanf("%lf", &f);

	c = (f - 32) * 5 / 9;

	printf("转换为摄氏度是：%.2f\n", c);


	return 0;
}
