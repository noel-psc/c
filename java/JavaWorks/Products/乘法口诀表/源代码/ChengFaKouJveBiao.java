public class ChengFaKouJveBiao {
	public static void main(String[] args) {
		//每一行输出完都会使列+1，并且换行
		for(int lie = 1;lie <= 9;lie++) { //循环每一列+1
			//输出一行后结束
			for(int hang = 1;hang <= lie;hang++) { //循环每一行+1
				System.out.print(hang + "*" + lie + "=" + lie * hang + " ");
			}
			System.out.println();
		}
	}
 }
 