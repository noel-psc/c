#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 20; i>=-20; i--)
	{
		for (int j = 0; j < abs(i); j++)
		{
			printf("呜");
		}
		printf("\n");
	}

	return 0;
}
