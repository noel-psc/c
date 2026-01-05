using System;

namespace Class02
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 1;
            float b = 1.23f;
            double c = 1.23456789;
            char d = 'a';
            string e = "abc";
            bool f = true;

            Console.WriteLine(a.ToString() + ' ' + b.ToString() + ' ' + c.ToString() + ' ' + d + ' ' + e + ' ' + f.ToString() + ' ');
            Console.Write("请输入随便什么东西:");
            string input = Console.ReadLine();
            Console.WriteLine(input);

            int x = 1;
            int y = 2;
            x = x ^ y;
            y = y ^ x;
            x = y ^ x;
            Console.WriteLine(x);
            Console.WriteLine(y);
        }
    }
}
