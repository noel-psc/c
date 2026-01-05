using System;

namespace Class11
{
    class Program
    {
        static void Main(string[] args)
        {
            //Console.ReadLine();用来接收输入的值

            Console.Write("请输入你的名字：");
            string name = Console.ReadLine();
            Console.Write("请输入你的性别：");
            string gender = Console.ReadLine();
            Console.Write("请输入你的年龄：");
            string age = Console.ReadLine();
            Console.WriteLine("我叫{0}，我的性别是{1}，我的年龄是{2}", name, gender, age);

            //转义符
            //把含义进行了转换的符号
            //格式：\ + 字母或符号

            name = "老圆";
            gender = "小哥哥";
            age = "18";
            Console.WriteLine("我叫\b{0}，我的性别是{1}，我的年龄是{2}岁", name, gender, age);

            Console.ReadLine();
        }
    }
}
