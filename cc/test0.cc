#include <iostream>
using namespace std;

int main()
{
	int i{1};
	bool f{0};
	while (1)
	{
		if (i == 5) f = 1;
		if (i == 1) f = 0;
		f ? i-- : i++;
		cout << i << endl;
	}
}
