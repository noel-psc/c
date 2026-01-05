public class Homework1 {
	public static void main(String[] args) {
		int jieGuo = Homework1.jieCheng(5);
		System.out.println(jieGuo);
	}

	public static int jieCheng(int n) {
		int jieGuo = 1;
		for(int i = n;i > 1;i++) {
			jieGuo *= i;
		}
		return jieGuo;
	}
}