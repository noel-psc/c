using System;

namespace Class08
{
    class Program
    {
        static void Main(string[] args)
        {
            //表达式：运算符和操作数组成的式子
            /*
            int a = 5;
            int b = 10;
            int c = a + b;
            */

            // +=
            int a = 10;
            a += 8; //a = a + 8;
            Console.WriteLine(a);

            // -=
            a = 10;
            a -= 5; //a = a;
            Console.WriteLine(a);

            // *=
            a = 10;
            a *= 5; //a = a * 5;
            Console.WriteLine(a);

            // /=
            a = 10;
            a /= 5; //a = a / 5;
            Console.WriteLine(a);

            Console.ReadKey();
        }
    }
}
