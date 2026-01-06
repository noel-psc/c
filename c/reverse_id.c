#include <stdio.h>
#define MAX 256

int main(void)
{
	char s[MAX], s1[MAX];
	fgets(s, MAX, stdin);
	int len = 0;

	while(s[len] != '\0')
		len++;
	printf("学号有%d位\n", --len);

	for(int i = 0, j = len-1; i < len; i++, j--)
		s1[i] = s[j];
	printf("%s\n", s1);
}
