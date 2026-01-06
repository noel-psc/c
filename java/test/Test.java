import java.util.Scanner;

public class Test {
	public static void main(String args[]) {
		// 定义month整型变量，储存用户输入的月份
		int month;
		// 定义字符串变量，储存季节信息
		String season;
		// 定义布尔值默认为true，储存方法状态，若状态为false则跳出循环
		boolean status = true;
		
		// 当status为false时跳出循环
		while (true) {
			// try catch语句，用于捕获异常(防止某个憨批在该输数字的时候输字符串)
			try {
				// new一个Scanner类型的对象，接受用户输入，起名input
				Scanner input = new Scanner(System.in);
				System.out.print("请输入一个月份: ");
				// nextInt表示接收一个字符串，如果接收到的不是字符串就报错崩溃，捕获异常防止崩溃
				month = input.nextInt();
				// 关闭input
				input.close();
			// 将异常信息储存在名为e的Exception类型对象里
			} catch (Exception e) {
				// 将status设为false，下次跳出循环
				// 输出一些废话
				System.out.println("----发生异常，请检查输入格式----");
				System.out.println("是否查看错误信息？(y/n)");
				// 因为try里的是成员变量，此处需重新定义
				Scanner input = new Scanner(System.in);
				// 接收用户输入y/n储存为showDetails
				String showDetails = input.next();
				// 关闭input
				input.close();
				// 如果用户输入为y则显示，否则继续
				if (showDetails.equals("y")) {
					// 输出错误信息
					e.printStackTrace();
				}
			}
			// 结合实际，月份只有1~12
			if (month >= 1 && month <= 12) {
				// switch语句，用的jdk17的语法
				// switch括号里对应case后面的，对应就执行后面的代码
				switch (month) {
					case 1, 2, 3 : season = "春季";
					case 4, 5 ,6 : season = "夏季";
					case 7, 8, 9 : season = "秋季";
					case 10, 11, 12 : season = "冬季";
					default : season = "？？";
				}
				System.out.printf("%d 月份是 %s", month, season);
			}
		}

		return;
	}
}
