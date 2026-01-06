#include <stdio.h>

int main()
{
	int ch;

	while ((ch = getchar()) != '\n')
	{
		if (ch == 'C')
		{
			continue;
		}

		putchar(ch);
	}

	printf("\n");

	return 0;
}
