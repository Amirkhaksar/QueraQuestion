import java.util.Scanner;

public class HardDiet {
	
	public static int countRed(String str) {
		int count = 0;
		
		for(int i = 0; i < str.length(); i++) {
			if(str.charAt(i) == 'R') count++;
		}
		
		return count;
	}
	
		public static int countGreen(String str) {
		int count = 0;
		
		for(int i = 0; i < str.length(); i++) {
			if(str.charAt(i) == 'G') count++;
		}
		
		return count;
	}
	
		public static int countYellow(String str) {
		int count = 0;
		
		for(int i = 0; i < str.length(); i++) {
			if(str.charAt(i) == 'Y') count++;
		}
		
		return count;
	}
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		String str = scan.next();
		
		int redCount = countRed(str);
		int yellowCount = countYellow(str);
		int greenCount = countGreen(str);
		
		if(
			(redCount >= 3) || 
			(redCount >= 2 && yellowCount >= 2) ||
			(greenCount == 0)
		) System.out.print("nakhor lite");
		else System.out.print("rahat baash");
	}
}
