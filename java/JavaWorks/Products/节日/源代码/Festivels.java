import java.util.Scanner;

public class Festivels {
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        System.out.println("请输入月(公历，阿拉伯数字)");
        int M = s.nextInt();
        System.out.println("请输入日(公历，阿拉伯数字)");
        int D = s.nextInt();
        s.close();
        
        //节日
        if(M > 12 || M < 1 || D > 31 || D < 1){
            System.out.println("\n你的日期输对了吗，快去检查下~！");
        }else if(M == 1 && D == 1){
            System.out.println("\n元旦");
        }else if(M == 1 && D == 2){
            System.out.println("\n腊八节");
        }else if(M == 1 && D == 24){
            System.out.println("\n除夕");
        }else if(M == 1 && D == 25){
            System.out.println("\n春节");
        }else if(M == 2 && D == 8){
            System.out.println("\n元宵节");
        }else if(M == 2 && D == 14){
            System.out.println("\n情人节");
        }else if(M == 3 && D == 8){
            System.out.println("\n妇女节");
        }else if(M == 3 && D == 12){
            System.out.println("\n植树节");
        }else if(M == 4 && D == 1){
            System.out.println("\n愚人节");
        }else if(M == 4 && D == 4){
            System.out.println("\n清明节");
        }else if(M == 4 && D == 22){
            System.out.println("\n地球日");
        }else if(M == 5 && D == 1){
            System.out.println("\n劳动节");
        }else if(M == 5 && D == 4){
            System.out.println("\n青年节");
        }else if(M == 6 && D == 1){
            System.out.println("\n儿童节");
        }else if(M == 6 && D == 5){
            System.out.println("\n环境日");
        }else if(M == 6 && D == 5){
            System.out.println("\n端午节");
        }else if(M == 7 && D == 1){
            System.out.println("\n建党节");
        }else if(M == 8 && D == 1){
            System.out.println("\n建军节");
        }else if(M == 7 && D == 7){
            System.out.println("\n七夕节");
        }else if(M == 9 && D == 2){
            System.out.println("\n中元节");
        }else if(M == 9 && D == 3){
            System.out.println("\n胜利日");
        }else if(M == 9 && D == 10){
            System.out.println("\n教师节");
        }else if(M == 9 && D == 22){
            System.out.println("\n丰收节");
        }else if(M == 10 && D == 1){
            System.out.println("\n国庆节");
        }else if(M == 10 && D == 25){
            System.out.println("\n重阳节");
        }else if(M == 10 && D == 31){
            System.out.println("\n万圣夜");
        }else if(M == 11 && D == 1){
            System.out.println("\n万圣节");
        }else if(M == 11 && D == 26){
            System.out.println("\n感恩节");
        }else if(M == 12 && D == 13){
            System.out.println("\n公祭日");
        }else if(M == 12 && D == 24){
            System.out.println("\n平安夜");
        }else if(M == 12 && D == 25){
            System.out.println("\n圣诞节");
        }else if(M == 1 && D == 1){
            System.out.println("\n元旦");
        //节气
        }else if(M == 1 && D == 6){
            System.out.println("\n小寒");
        }else if(M == 1 && D == 20){
            System.out.println("\n大寒");
        }else if(M == 2 && D == 4){
            System.out.println("\n立春");
        }else if(M == 2 && D == 19){
            System.out.println("\n雨水");
        }else if(M == 3 && D == 5){
            System.out.println("\n惊蛰");
        }else if(M == 3 && D == 20){
            System.out.println("\n春分");
        }else if(M == 4 && D == 19){
            System.out.println("\n谷雨");
        }else if(M == 5 && D == 5){
            System.out.println("\n立夏");
        }else if(M == 5 && D == 20){
            System.out.println("\n小满");
        }else if(M == 7 && D == 6){
            System.out.println("\n小暑");
        }else if(M == 7 && D == 22){
            System.out.println("\n大暑");
        }else if(M == 8 && D == 7){
            System.out.println("\n立秋");
        }else if(M == 8 && D == 22){
            System.out.println("\n处暑");
        }else if(M == 9 && D == 7){
            System.out.println("\n白露");
        }else if(M == 10 && D == 8){
            System.out.println("\n寒露");
        }else if(M == 10 && D == 23){
            System.out.println("\n霜降");
        }else if(M == 11 && D == 7){
            System.out.println("\n立冬");
        }else if(M == 11 && D == 22){
            System.out.println("\n小雪");
        }else if(M == 12 && D == 7){
            System.out.println("\n大雪");
        }else if(M == 12 && D == 14){
            System.out.println("\n三十");
        }else if(M == 12 && D == 21){
            System.out.println("\n冬至");
        }else {
            System.out.println("未收录");
        }
    }
}