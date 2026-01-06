#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double o;
	
	printf("请输入一个整数：");
	scanf("%d", &i);

	o = pow(i, 5);

	printf("%d的五次方是：%.2f\n", i, o);

	return 0;
}
