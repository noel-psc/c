#include <stdio.h>
#include <math.h>

int main()
{
	double xiaoJiaYv, heiYe;
	int time = 0;

	do
	{
		time++;

		xiaoJiaYv = 10000 * (1 + 0.1 * time);
		heiYe = 10000 * pow((1 + 0.05), time);

		// time++;
	}
	while (heiYe < xiaoJiaYv);

	printf("%d年后，黑夜的投资额超过小甲鱼！\n", time);
	printf("小甲鱼的投资额是：%.2lf\n黑夜的投资额是：%.2lf\n", xiaoJiaYv, heiYe);

	return 0;
}
