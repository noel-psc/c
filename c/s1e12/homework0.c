#include <stdio.h>

int main()
{
        double in1, in2, out; // 声明：用户输入1、用户输入2、输出
        char mode; // 声明：模式

        // 欢迎语
        printf("========== 圆圆计算器 ==========\n");
        printf("使用方法：<参数1> <模式> <参数2>\n");
        printf("(注：模式用+-*/符号表示)\n");
        printf("(例：1 + 1)\n");
        printf("========== 圆圆计算器 ==========\n");

        // 接收用户输入参数
        printf("请输入式子：");
        scanf("%lf %c %lf", &in1, &mode, &in2);

        // 以mode值为case分支不同计算方式
        switch (mode)
        {
                case '-': in2 = -in2; // no break;
		case '+': out = in1 + in2; break;
                case '*': out = in1 * in2; break;
                case '/':
                        {
                                if (in2 != 0) {out = in1 / in2; break;}
                                else {printf("除数不能为零！\n"); return 0;}
                        }
                default: printf("错误：未知模式，请检查模式参数！\n");
        }

        // 输出结果
        printf("结果是：%.2f\n", out);

        return 0;
}
