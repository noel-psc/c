using System;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Person ZhengHongyuan = new Person() { name = "郑鸿源", age = 14, tall = 167, weight = 50, gender = true};
            ZhengHongyuan.Info();
            ZhengHongyuan.Eat();
            ZhengHongyuan.Sleep();
        }
    }

    class Person
    {
        public string name;
        public int age, tall, weight;
        public bool gender;
        public void Info()
        {
            string temp = gender ? "男" : "女";
            Console.WriteLine("姓名：{0}\n性别：{1}\n年龄：{2}岁\n身高：{3}厘米\n体重：{4}千克", name, temp, age, tall, weight);
        }
        public void Eat()
        {
            Console.WriteLine("我在吃！不知道吃的什么。");
        }
        public void Sleep()
        {
            Console.WriteLine("我要睡啦，拜拜爱你晚安。");
        }
    }
}
