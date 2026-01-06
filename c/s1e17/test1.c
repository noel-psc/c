#include <stdio.h>

int main(void)
{
	int a[10] = {[3] = 3, [5] = 5, [8] = 8};
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}

	printf("%ld\n", sizeof(a));

	return 0;
}
