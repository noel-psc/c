#include <stdio.h>

int main(void)
{
	char *arr;
	if (scanf("%p", &arr) != 1)
	{
		printf("Error reading address!");
		return 1;
	}
	printf("%s\n", arr);
	printf("pass");
	
	return 0;
}
