#include <stdio.h>
#include <string.h>

char* t1()
{
	static char str[] = "Fontainlors miao~";

	return str;
}

int main(void)
{
	char *ptr = t1();
	printf("%c %c %p %p %p\n", *ptr, ptr[0], (void *)ptr, (void *)&ptr[0], (void *)&ptr);
	printf("%s\n", ptr);

	for (int i = 0; i < strlen(ptr); i++)
	{
		printf("%c", *(ptr+i), i);
	}
	printf("\n");

	return 0;
}

