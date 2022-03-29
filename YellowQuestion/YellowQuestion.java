import java.util.Scanner;

public class YellowQuestion {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		
		System.out.print("W");
		
		for(int i = 0; i < n; i++) {
			System.out.print("o");
		}
		
		System.out.print("w!");
	}
}
