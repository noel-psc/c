#include <stdio.h>

int beat(int n)
{
	for (int i = 0; i < n; i++)
	{
		getchar();
		printf("%d ", i + 1);
	}
	printf("\n");
}

int main(void)
{
	int beats[] = {1, 1, 2, 3, 5, 8, 13, 21};
	int len = (sizeof beats) / sizeof beats[0];
	while (1)
	{
		for (int i = 0; i < len; i++)
			beat(beats[i]);
	}

	return 0;
}
