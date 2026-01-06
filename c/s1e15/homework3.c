#include <stdio.h>

int main()
{
	int ch;

	printf("请输入明文：");

	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			ch += 3;

			if (ch > 'z')
			{
				ch = ch - 'z' - 1 + 'a';
			}
			else if (ch > 'Z' && ch < 'a')
			{
				ch = ch - 'Z' - 1  + 'A';
			}
		}
		putchar(ch);
	}

	printf("\n");

	return 0;
}
