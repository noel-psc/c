using System;

namespace Class6
{
    class Program
    {
        static void Main(string[] args)
        {
            //判断闰年，考虑整除不整除的情况，用取余%
            /*
            int num1 = 13;
            int num2 = 5;
            int num3 = num1 % num2;
            Console.WriteLine(num3);
            */

            while (true)
            {
                //接受用户输入
                Console.Write("请输入被除数:");
                double num1 = Convert.ToInt32(Console.ReadLine());
                Console.Write("请输入除数:");
                double num2 = Convert.ToInt32(Console.ReadLine());

                //进行取余运算并赋值给num3
                double num3 = num1 % num2;

                //判断是否能整除并作出反应
                if (num3 == 0)
                {
                    Console.WriteLine("可以整除\n");
                }
                else
                {
                    //若无法整除，使用字符串格式化输出结果
                    Console.WriteLine(string.Format("不能整除，{0:G} % {1:G} = {2:G}\n", num1, num2, num3));
                }
            }
        }
    }
}
