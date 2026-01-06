#include <stdio.h>

int main()
{
	float in, res, status;

	do
	{
		printf("请输入合法的数字：");
		do
		{
			res += in;
			status = scanf("%f", &in);
		}
		while (getchar() != '\n' && status == 1);
	}
	while (status == 1);

	printf("结果是：%.2f\n", res);

	return 0;
}
