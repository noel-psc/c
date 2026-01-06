#include <stdio.h>

int main()
{
	float in = 0.0, res = 0.0;
	int status;

	do
	{
		printf("请输入合法的数字：");
		res += in;
		status = scanf("%f", &in);
	}
	while (status == 1);

	printf("结果是：%.2f\n", res);

	return 0;
}
