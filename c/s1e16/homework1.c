#include <stdio.h>

int main()
{
	double money = 4000000;
	int time = 0;

	while (money >= 0)
	{
		money -= 500000;
		money += money * 0.08;
		time++;
	}

	printf("%d年之后，小甲鱼败光了所有家产，再次回到一贫如洗......\n", time);

	return 0;
}
