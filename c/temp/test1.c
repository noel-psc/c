#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	enum week{1, 2, 3, 4, 5, 6, 7}a;

	printf("%d, %d\n", a, ++a);

	return 0;
}
