import java.util.Scanner;
public class LogIn {
	public static void main(String[] args) {
		//建立一个键盘扫描器jianPan
		Scanner jianPan = new Scanner(System.in);

		//注册阶段

		//设置正确用户名为注册的用户名
		System.out.print("请输入注册用户名：");
		String zhenYongHuMing = jianPan.next();
		//设置正确密码为注册的密码
		System.out.print("请输入注册密码：");
		String zhenMiMa = jianPan.next();
		System.out.println("注册成功！\n");

		//登录阶段

		System.out.print("请输入用户名：");
		//设置用户输入用户名为yongHuMing
		String yongHuMing = jianPan.next();
		//如果用户名正确或错误触发不同分支
		if(zhenYongHuMing.equals(yongHuMing)) {
			System.out.println("用户名正确");
		} else {
			System.out.println("用户名错误");
			jianPan.close();
			return;
		}
		System.out.print("请输入密码：");
		//设置用户输入密码为miMa
		String miMa = jianPan.next();
		//如果用户输入密码正确或错误触发不同分支
		if(zhenMiMa.equals(miMa)) {
			System.out.println("密码正确");
			System.out.println("\n欢迎" + yongHuMing + "回来~~~");
		} else {
			System.out.println("密码错误");
		}
		jianPan.close();
	}
}