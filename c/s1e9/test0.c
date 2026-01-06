#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k;

	i = 1 + 2;
	j = 1 + 2 * 3;
	k = i + j + k + -1 + pow(2, 3);

	printf("i = %d\n", i);
	printf("i = %d\n", j);
	printf("i = %d\n", k); // 3 + 7 + (-1) + 8
	
	return 0;
}
