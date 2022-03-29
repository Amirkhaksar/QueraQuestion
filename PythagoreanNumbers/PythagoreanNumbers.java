import java.util.Scanner;

public class PythagoreanNumbers {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		int c = scan.nextInt();
		
		System.out.println(
			(
				a * a == b * b + c * c ||
				b * b == a * a + c * c ||
				c * c == a * a + b * b
			) ? "YES" : "NO"
		);
	}
}
