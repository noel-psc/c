#include <stdio.h>

int main(void)
{
	char a = 'F';
	int b = 123;

	char *pa = &a;
	int *pb = &b;

	printf("a = %c\n", *pa);
	printf("b = %d\n", *pb);

	*pa = 'C';
	*pb += 1;

	printf("now, a = %c\n", *pa);
	printf("now, b = %d\n", *pb);

	printf("sizeof pa = %ld\n", sizeof(pa));
	printf("sizeof pb = %ld\n", sizeof(pb));
	printf("the addr of a is: %p\n", pa);
	printf("the addr of b is: %p\n", pb);

	return 0;
}
