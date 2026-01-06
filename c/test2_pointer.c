#include <stdio.h>

int main(void)
{
	int a[] = {6, 5, 4, 3, 2, 1, 0};
	int *p = a;
	printf("%d %d %d\n", *p, &p, p);
	printf("%d %d\n", *(p+1), *p+1);
	printf("%d\n", *(a+1));

	return 0;
}
