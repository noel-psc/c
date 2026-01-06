#include <stdio.h>

int main()
{
	int least=23, step=14, weight, cost; // 起步价、加价步长、重量、花费

	printf("公斤 -- 花费(元)：\n");

	for (weight = 1; weight <= 20; weight++)
	{
		// 花费 = 起步价 + 加价
		cost = least + step * (weight - 1);
		
		// 输出结果
		printf(" %2d  --  %3d\n", weight, cost);
	}

	return 0;
}
