// public"表示公开的"
// class表示定义一个类
// HelloWorld表示一个类名
public class HelloWorld{ // 表示一个公开的类，起名HelloWorld
	// 类体中不允许直接编写Java语句【除声明变量外】
    // System.out.println("Hello World!");
    // 类体【记住】
	/*
		public表示公开的
		static表示静态的
		void表示空
		main表示方法名main
		（String[] args）是一个main方法的形式参数列表
		需要记住的是：
		以下方法是一个程序的主方法，是程序的执行入口
		是SUN公司规定的
	*/
	
	public static void main(String [] args){ //定义一个公开的、静态的主方法
	  
		// 方法体
		// 方法体
	
		//Java语句【Java语句异“;”终止，分号必需是半角分号】
		//先记住：以下这样代码的作用是向控制台输出一段消息
		//以下双引号必需是半角的双引号【是Java语法的一部分】
		//Java中所有的“字符串”都使用双引号括起来。
		System.out.println("Hello World!");

		//再向控制台输出消息
		System.out.println("Hello jackson!");

		//再输出中文
		

		//输出中文【提醒：以下程序员的双引号是“全角的”，这里的全角的双引号只是一个普通的字符串】
		System.out.println("我是一个“程序员”");

	}

}
