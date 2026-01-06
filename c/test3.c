#include <stdio.h>
#define MAX 256

int main(void)
{
	int a = 123;
	int b[MAX] = {1, 2, 3, 44};
	char str[] = {'t', 'e', 's', 't', '\0'};
	char str1[] = {"test"};
	char str2[] = "test";
	float f1 = 1.1;
	float f2 = 0.1;
	bool b1 = false;
	printf("%f\n", f1 + f2);
	printf("%s\n", str);
	int c1 = 65;
	printf("%c\n", c1);
	char c2 = 'A';
	printf("%d\n", c2);
	printf("%d\n", MAX);

	return 0;
}
