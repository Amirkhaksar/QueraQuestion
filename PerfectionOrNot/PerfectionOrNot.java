import java.util.Scanner;

public class PerfectionOrNot {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int num = scan.nextInt();
		
		int sum = 0;
		
		for(int i = 1; i < num; i++) if(num % i == 0) sum += i;
		
		System.out.print((sum == num) ? "YES" : "NO");
	}
}
