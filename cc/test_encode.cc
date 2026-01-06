#include <iostream>
using namespace std;

char encode(char raw)
{
	return raw + 6;
}

int main(void)
{
	char passwd[] = "123abc";
	cout << passwd << endl;
	for (int i = 0; i < (sizeof passwd) / (sizeof passwd[0]) - 1; i++)
		passwd[i] = encode(passwd[i]);
	cout << passwd << endl;
}
