#include <iostream>
using namespace std;

int main(void)
{
	// sum > limit
	int n = 0, limit;
	double sum = 0;
	cin >> limit;
	while (sum <= limit)
	{
		sum += 1.0 / ++n;
		// cout << sum << endl;
	}
	cout << "n为" << n << "时对应的sum为" << sum << endl;
	
	// N M
	int M = 0;
	for (int N = 1; N <= 15; N++)
	{
		// 将N向前移动位数位再加N
		int m = 10, tmp = N;
		while ((tmp /= 10) > 0) m *= 10;
		M += N * m + N;
		// cout << M << endl;
	}
	cout << M << endl;

	// 马驮货
	int count = 0;
	for (int big = 0; big <= 33; big++)
	{
		for (int medium = 0; medium <= 50; medium++)
		{
			int small = 100 - big - medium;
			if (small > 0 && big * 3.0 + medium * 2.0 + small * 0.5 == 100)
			{
				count++;
				// printf("%d %d %d\n", big, medium, small);
			}
		}
	}
	cout << "共有" << count << "种情况" << endl;

	// 阶乘
	int res = 0;
	for (int i = 1; i <= 10; i++)
	{
		int tmp = 1;
		for (int j = 1; j <= i; j++)
		{
			tmp *= j;	
		}
		res += tmp;
	}
	cout << res << endl;
}
