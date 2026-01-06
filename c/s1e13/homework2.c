#include <stdio.h>
#include <math.h>

int main()
{
	int ch, is_overflow; // getchar()获取的字符存放于此
	long long num = 0, temp; // 转换成的整形存放于此、临时变量测试是否超范围
	

	int max = pow(2, sizeof(int) * 8) / 2 - 1;
	int min = pow(2, sizeof(int) * 8) / 2 * (-1);

	printf("请输入待转换的字符串：");

	do
	{
		// 将用户输入存放到ch
		ch = getchar();

		// 如果ch在0和9的ascii码之间，则转换为整数并赋值给num
		if (ch >= '0' && ch <= '9')
		{
			num = 10 * num + ch - '0'; // 此处10 * num，这次的数字存到进一位，下次的数字存到个位
			if (temp > max || temp < min)
			{
				is_overflow = 1; // 超范围则is_overflow为1
				break;
			}
			else
			{
				temp = num;
			}
			
		}
		// 遇到第二段数字时num中已存有数字
		else if (num)
		{
			break; // 第二次遇到数字就跳出
		}
	}
	while (ch != '\n');

	if (is_overflow)
	{
		printf("数值超出范围，结果未定义！\n");
	}
	else if (!num)
	{
		printf("并未找到任何数值！\n");
	}
	else
	{
		printf("结果是：%lld\n", num);
	}

	return 0;
}
