#include <stdio.h>
using namespace std;

int main(void)
{
	int budget[] = {};
	int money = 0;
	int bank = 0;
	int result;
	for (int i = 0; i < 12; i++)
	{
		scanf("%d\n", &budget[i]);
	}

	for (int i = 0; i < 12; i++)
	{
		money += 300;
		if (money < budget[i])
		{
			result = -(i + 1);
			break;
		}
		money -= budget[i];
		if (money >= 100)
		{
			int save = money / 100 * 100;
			bank += save;
			money -= save;
		}
		result = money + bank * 1.2;

	}
	printf("%d\n", result);

	return 0;
}