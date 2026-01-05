#include <stdio.h>

int main(void)
{
	static char arr[] = "Hello world!";
	printf("%p\n", (void *)arr);
	char t_[] = "";
	scanf("%s", t_);

	return 0;
}
