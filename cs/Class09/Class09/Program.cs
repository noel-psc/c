using System;

namespace Class_09
{
    class Program
    {
        static void Main(string[] args)
        {
            //比较运算符

            // > <
            bool b = 5 < 3;
            Console.WriteLine(b);

            // >= <= 只要满足大于(小于)或等于中的一个条件即为true
            b = 5 >= 5;
            Console.WriteLine(b);
            b = 5 <= 3;
            Console.WriteLine(b);
            b = 5 <= 5;
            Console.WriteLine(b);

            // == !=
            b = 5 == 5;
            Console.WriteLine(b);
            b = 5 == 10;
            Console.WriteLine(b);
            b = 5 != 5;
            Console.WriteLine(b);
            b = 5 != 10;
            Console.WriteLine(b);

            Console.ReadKey();
        }
    }
}
