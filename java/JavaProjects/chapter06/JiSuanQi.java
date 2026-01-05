import java.util.Scanner;
public class JiSuanQi {
	public static void main(String[] args) {
		//创建一个键盘扫描器对象，变量jianPan
		Scanner jianPan = new Scanner(System.in);
		System.out.println("----------------------------------");
		System.out.println("欢迎使用圆牌简易计算器");
		System.out.println("提示：数不要太大，会超范围");
		System.out.println("----------------------------------");
		System.out.print("请选择模式：");
		System.out.println("1.加法 2.减法 3.乘法 4.除法");
		//设置mode变量为用户选择的模式序号
		int mode = jianPan.nextInt();
		//如果序号超出范围，则触发不同分支
		if(mode > 4 || mode < 1) {
			//错误分支
			System.out.println("诶？ Σ(っ °Д °;)っ你输入的不对诶，是不是输错了，快去检查一下n(*≧▽≦*)n");
		//正确分支
		}else {
			System.out.println("好哒~");
			System.out.print("请输入第一个数字：");
			//定义三个数的变量
			double one,two,three;
			//定义one、two、three的数值
			one = jianPan.nextDouble();
			System.out.print("请输入第二个数字：");
			two = jianPan.nextDouble();
			System.out.print("请输入第三个数字（没有的话加减请输入0，乘除请输入1）：");
			three = jianPan.nextDouble();
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
				System.out.println(two == 0 || three == 0 ? "小学数学学过哒，除数不能为零，快去改！！(￣ε(#￣)☆╰╮o(￣皿￣///)" : "\n算出来辣，是" + (one / two / three));
			}
		}
	}
 }