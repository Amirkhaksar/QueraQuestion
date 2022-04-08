import java.util.Scanner;

public class Fibonacci {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int num = scan.nextInt();
		
		if(num == 1) {
			System.out.print("+");
			return;
		}
		
		int first = 1;
		int second = 2;
		
		boolean[] signs = new boolean[num];
		
		signs[first - 1] = true;
		signs[second - 1] = true;
		
		while(true) {
			int temp = first;
			first = second;
			second += temp;
			
			if(second > num) break;
			
			signs[second - 1] = true;
		}
		
		for(int i = 0; i < num; i++) {
			System.out.print(signs[i] ? "+" : "-");
		}
	}
}