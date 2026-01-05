import java.util.Scanner;
import java.util.Random;

public class Guessing {
    static Scanner input = new java.util.Scanner(System.in);
    public static void main(String args[]) {
        // 生成随机数
        Random rand = new Random();
        int num = rand.nextInt(64), guessing;
        String result;
        boolean flag = true;
        // System.out.println(num);

        // 游戏循环体
        while (flag){
            // 用户输入猜测
            System.out.print("猜猜我心里想的数字是几：");
            guessing = input.nextInt();

            // 判断并输出
            if (num == guessing) {
                flag = false;
            } else {
                if (guessing > num) {
                    result = "大了大了！";
                } else if (guessing < num) {
                    result = "小了小了！";
                } else {
                    result = "出错了！";
                }
                System.out.println(result);
            }
        }
        
        //游戏结束
        System.out.println("答对了！游戏结束。");

        return;
    }
}