public class VarTest01 {
    public static void main(String[] args) {
        System.out.println(3.14);//浮点型
        System.out.println(100);//整数型
        System.out.println(true);//布尔型
        System.out.println(false);//布尔型
        System.out.println('a');//字符型
        System.out.println("abc");//字符串型
        System.out.println('中');//字符型
        System.out.println("国");//字符串型

        //三块不同空间
        System.out.println(10);
        System.out.println(10);
        System.out.println(10);

        //定义/声明一个变量，起名i
        int i = 1000;
        //同一块空间
        System.out.println(i);
        System.out.println(i);
        System.out.println(i);
        System.out.println(i);
        System.out.println(i);

        //一下两个i和以上的i变量没关系
        System.out.println('i');
        System.out.println("i");
        
    }
}