#include <stdio.h>

int main()
{
	// 声明变量
	char i; // 声明用户输入input的变量

	// 接受用户输入
	printf("请输入一个英文字母：");
	scanf("%c", &i);

	//如果是大写就转换为小写，如果是小写就转换为大写并输出
	if (i >= 'A' && i <= 'Z')
	{
		i += 32;
	}
	else if (i >= 'a' && i <= 'z')
	{
		i -= 32;
	}
	
	printf("%c\n", i);

	return 0;
}
