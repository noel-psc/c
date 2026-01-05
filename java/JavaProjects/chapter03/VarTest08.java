/**
 * 变量的作用域？
 *	 1、什么是作用域？
 * 	     变量的有效范围。
 * 	2、关于变量的作用域，大家可以记住一句话：
 * 	     出了大括号就不认识了。
 * 	3、java中有一个很重要的原则：
 * 	     就近原则。（不仅java中这样，其他编程语言都有这个原则。）
 * 	     哪个离我近，就访问哪个。
 */

public class VarTest08 {

	//成员变量
	int i = 1000;
	public static void main(final String[] args) {
		// 局部变量
		int i = 100; //这个i 的有小范围是main方法。
		System.out.println(i); //这个i是多少？

		//同一个域当中
		//int i = 90; //这是不允许的。
	}

	//这个方法怎么定义先不用管，后面会学习。
	public static void x () {
		//在这个位置上能访问i吗？
		//错误：找不到符号
		//System.out.println(i); //i是无法访问的。

		//可以定义一个变量起名i吗？
		//这个i的有小范围是x方法。
		int i = 200; //所以这个i和main方法中的i不在同一个域当中。不冲突。
		System.out.println(i) ;
	}
}