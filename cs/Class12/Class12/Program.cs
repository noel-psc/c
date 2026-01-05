using System;

namespace Class12
{
    class Program
    {
        static void Main(string[] args)
        {
            //类型转换

            //1.隐式转换：不需要声明就可以进行的转换，在隐式转换过程中，编译器不需要检查就能自动进行转换

            /*
            //定义变量+赋值
            int a = 10;
            //定义变量，不赋值
            float b;
            //把b的值赋给a
            b = a;
            Console.WriteLine("b的值为{0}", b);
            */

            //2.显式转换(强制转换)，需要在代码中明确声明要转换成的类型
            //可能存在数据丢失问题

            /*
            float a = 3.1415f;
            int b;
            b = (int)a;
            Console.WriteLine(b);
            */

            //3.Convert转换
            //如果有一天，不是数字类型之间的转换
            //针对于不是同一个大类的数据类型之间的转换
            //并非所有string类型都能转换为int类型，至少字符串是数字，要能勉强看得过去

            string a = "10";
            int b = Convert.ToInt32(a);
            Console.WriteLine("b的值为{0}", b);

            Console.ReadKey();
        }
    }
}
