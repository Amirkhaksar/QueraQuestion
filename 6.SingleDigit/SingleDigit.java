import java.util.Scanner;

public class SingleDigit {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String[] n = scan.next().split("");
		
		int sum = 0;
		int i = 0;
		while(i < n.length) {
			sum += Integer.parseInt(n[i]);
			
			//System.out.println("i: " + i + " n[i]: " + n[i]);
			
			if(i == n.length - 1 && sum >= 10) {
				String[] temp = String.valueOf(sum).split("");
				n = temp;
				i = 0;
				
				sum = 0;
				
				continue;
			}
			
			i++;
		}
		
		System.out.println(sum);
	}
}
