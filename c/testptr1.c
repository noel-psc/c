#include <stdio.h>

char* createArr()
{
	static char arr[] = "Hello world!";
	char *p = arr;

	return p;
}

int main(void)
{
	printf("%s\n", createArr());

	return 0;
}
