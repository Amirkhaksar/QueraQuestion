/*
	@author: Amir Aghazadeh
*/

import java.util.Scanner;

public class KhayamPaskal {
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j <= i; j++) {
				System.out.print(
					(fact(i) / (fact(j) * fact(i - j))) + ((j != i) ? " " : "")
				);
			}
			
			if(i != n - 1) {System.out.println();}
		}
	}
	
	public static int fact(int num) {
		if(num == 0 || num == 1) return 1;
		
		int fact = 1;
		
		for(int i = 1; i <= num; i++) {
			fact *= i;
		}
		
		return fact;
	}
}