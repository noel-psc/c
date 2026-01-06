#include <stdio.h>

int main(void)
{
	int a, b, c, t;
	int *pa, *pb, *pc;

	printf("请输入三个数：");
	scanf("%d%d%d", &a, &b, &c);

	pa = &a;
	pb = &b;
	pc = &c;

	if (a > b)
	{
		t = *pa;
		*pa = *pb;
		*pb = t;
	}

	if (a > c)
	{
		t = *pa;
		*pa = *pc;
		*pc = t;
	}

	if (b > c)
	{
		t = *pb;
		*pb = *pc;
		*pc = t;
	}

	printf("%d <= %d <= %d\n", *pa, *pb, *pc);
	printf("%d <= %d <= %d\n", a, b, c);

	return 0;
}
