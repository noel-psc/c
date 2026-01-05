using System;

namespace Class10
{
    class Program
    {
        static void Main(string[] args)
        {
            //问题：如果这个变量有很多个，我该怎么做？
            //我不想写加号
            
            //占位符
            //先把需要填写变量的地方用一定的符号占住，然后依次填写变量
            //从0开始
            //{0} {1} {2}
            //一个萝卜一个坑
            //原则：有多少个占位符就填多少个变量。少填报错，多填没效果。

            string name = "老圆";
            string gender = "小哥哥";
            int age = 18;
            //字符串拼接
            //Console.WriteLine("我叫" + name + "，我的性别是" + gender + "，我的年龄是" + age + "岁");
            //占位符
            Console.WriteLine("我叫{0}，我的性别是{1}，我的年龄是{2}岁", name, gender, age);

            Console.ReadKey();
        }
    }
}
