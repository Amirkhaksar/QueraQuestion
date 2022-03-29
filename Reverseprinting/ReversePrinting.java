import java.util.ArrayList;
import java.util.Scanner;

public class ReversePrinting {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		while(true) {
			int newNumber = scan.nextInt();
			
			if(newNumber == 0) break;
			
			list.add(newNumber);
		}
		
		for(int i = list.size() - 1; i >= 0; i--) {
			System.out.print(list.get(i));
			
			if(i != 0) {System.out.println();}
		}
	}
}
