#include <stdio.h>
#include <math.h>

int main()
{
	int sign = 1;
	double pi = 0.0, deno = 1, term = 1.0;

	while (fabs(term) >= 1e-8)
	{
		pi += term;
		deno += 2;
		sign = -sign;
		term = sign / deno;
	}

	pi *= 4;

	printf("PI的值是：%10.7lf\n", pi);

	return 0;
}
