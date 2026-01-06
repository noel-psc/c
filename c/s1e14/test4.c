#include <stdio.h>

int main()
{
	for (int wai=1, nei; wai <= 9; wai++)
	{
		for (nei = 1; nei <= wai; nei++)
		{
			printf("%d*%d=%-2d  ", nei, wai, nei * wai);
		}

		printf("\n");
	}

	return 0;
}
