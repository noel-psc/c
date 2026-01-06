#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
long long fact(int n);

int main(void)
{
	// 素数
	int x;
	cin >> x;
	cout << (isPrime(x) ? "是素数" : "非素数") << endl;

	// 阶乘
	int n, sum = 0;
	cin >> n;
	// cout << fact(n) << endl;
	for (sum = 0; n > 0; n--)
		sum += fact(n);
	cout << sum << endl;
}

bool isPrime(int x)
{
	if (x <= 1) return false;
	if (x == 2) return true;
	if (x % 2 == 0) return false;
	for (int i = 3; i <= sqrt(x); i += 2)
		if (x % i == 0) return false;
	return true;
}

long long fact(int n)
{
	long long res = n;
	if (n > 1)
		res = n * fact(n-1);
	return res;
}
