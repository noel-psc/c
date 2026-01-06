#include <stdio.h>

int main()
{
	//声明后面用到的变量
	char name[256];
	float height, weight;

	//接收用户输入
	printf("请输入您的姓名：");
	scanf("%s", name);

	printf("请输入您的身高(cm)：");
	scanf("%f", &height);

	printf("请输入您的体重(kg)：");
	scanf("%f", &weight);

	//进行转换
	height /= 2.54;
	weight /= 0.453;

	//输出结果
	printf("========== 正在为您转换 ==========\n");
	printf("%s的身高是%.2f(in)，体重是%.2f(lb)。\n", name, height, weight);
	

	return 0;
}
