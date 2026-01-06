#include <stdio.h>
#include <math.h>

int main()
{
	int count = 4, i, j, num;
	_Bool flag = 1;

	for (i = 9; i < 10000; i++)
	{

		num = (int)sqrt((double)i);

		for (j = 2; j <= num; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			count++;	
		}
		else
		{
			flag = 1;
		}
	}

	printf("10000以内共有%d个素数！\n", count);

	return 0;
}
