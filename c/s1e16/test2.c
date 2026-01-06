#include <stdio.h>

int main(void)
{
	// A
	if (size > 12)
	{
		cost = cost * 1.05;
                flag = 2;
	}
	bill = cost * flag;
	
	// B
	if (ibex > 14)
	{
		sheds = 3;
	}
	else
	{
		sheds = 2;
	}
	help = 2 * sheds;

	// C
	scanf("%d", &score);
	while (score >= 0)
	{
		count++;
		scanf("%d", &score);
	}
	printf("count = %d\n", count);

	return 0;
}
