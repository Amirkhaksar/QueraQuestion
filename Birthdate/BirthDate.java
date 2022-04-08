import java.util.Scanner;

public class BirthDate {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String birthDate = scan.next();
		
		System.out.println("saal:" + birthDate.substring(0, 2));
		System.out.println("maah:" + birthDate.substring(2));
	}
}