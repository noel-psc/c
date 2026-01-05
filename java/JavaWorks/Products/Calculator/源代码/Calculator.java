import java.util.Scanner;
public class Calculator {
	static Scanner jianPan = new Scanner(System.in);
	public static void main(String[] args) {
		Calculator.begin();
		//创建一个键盘扫描器对象，变量jianPan
		int mode = jianPan.nextInt();
		double one,two,three;
		//调用方法进行判断
		Calculator.panDuan1(mode);
		one = Calculator.panDuan3();
		two = Calculator.panDuan4();
		three = Calculator.panDuan5();
		jianPan.close();
		//调用方法进行运算并输出
		Calculator.Out(mode,one,two,three);
	}

	public static void begin() {
		System.out.println("----------------------------------");
		System.out.println("欢迎使用Calculator!");
		System.out.println("提示：数不要太大，会超范围");
		System.out.println("----------------------------------");
		System.out.print("请选择模式：");
		System.out.println("1.加法 2.减法 3.乘法 4.除法");
	}

	public static void panDuan1(int mode) {
		//如果序号超出范围，则触发不同分支
		if(mode > 4 || mode < 1) {
			//错误分支
			System.out.println("诶？ Σ(っ °Д °;)っ你输入的不对诶，是不是输错了，快去检查一下n(*≧▽≦*)n");
			System.exit(0);
		}
	}

	public static double panDuan3() {
		//创建一个键盘扫描器对象，变量jianPan
		System.out.println("好哒~");
		System.out.print("请输入第一个数字：");
		//定义三个数的变量
		double one;
		//定义one、two、three的数值
		one = jianPan.nextDouble();
		return(one);
	}

	public static double panDuan4() {
		//创建一个键盘扫描器对象，变量jianPan
		//定义one、two、three的数值
		System.out.print("请输入第二个数字：");
		double two;
		two = jianPan.nextDouble();
		return(two);
	}

	public static double panDuan5() {
		//创建一个键盘扫描器对象，变量jianPan
		System.out.print("请输入第三个数字（没有的话加减请输入0，乘除请输入1）：");
		double three;
		three = jianPan.nextDouble();
		return(three);
}

	public static void Out(int mode,double one,double two,double three) {
		//分模式不同使用不同运算符号进行运算
		switch(mode) {
			case 1:
				System.out.println("\n算出来辣，是" + (one + two + three));
				break;
			case 2:
				System.out.println("\n算出来辣，是" + (one - two - three));
				break;
			case 3:
				System.out.println("\n算出来辣，是" + (one * two * three));
				break;
			//如果除数为0则报错+卖萌
			default:
				System.out.println(two == 0 || three == 0 ? "你被丽娜教傻了吗，除数不能为零，快去改！！(￣ε(#￣)☆╰╮o(￣皿￣///)" : "\n算出来辣，是" + (one / two / three));
			}
	}
}