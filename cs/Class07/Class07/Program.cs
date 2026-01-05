using System;
using System.Threading;

namespace Class07
{
    class Program
    {
        static void Main(string[] args)
        {
            //++
            int num1 = 10;
            num1++;
            num1++;
            Console.WriteLine(num1);
            ++num1;
            ++num1;
            Console.WriteLine(num1);

            //--
            int num2 = 10;
            num2--;
            num2--;
            Console.WriteLine(num2);
            --num2;
            --num2;
            Console.WriteLine(num2);

            //区别
            int a = 10;
            int b = a++;
            a = 10;
            int c = ++a;
            Console.WriteLine(b);
            Console.WriteLine(c);

            int d = 10;
            int e = d--;
            d = 10;
            int f = --d;
            Console.WriteLine(e);
            Console.WriteLine(f);

            Console.Read();
        }
    }
}
