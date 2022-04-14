/*
	Language: Java
	ID: 618
	Qlink: https://quera.org/problemset/618/
	Author: cssu-ama
*/

import java.util.Scanner;

public class DiamondPrinting {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		
		for(int i = 0; i < 2 * n + 1; i++) {
			String str = "";
			String space = "";
			
			if(i < n) {
				for(int j = 0; j < i; j++) {
					str += "*";
				}
				
				str += str;
				str += "*";
				
				for(int j = 0; j < n - i; j++) {
					space += " ";
				}
				
				System.out.println(space + str);
			} else if(i == n) {
				str = "";
				space = "";
				
				for(int j = 0; j < n; j++) {
					str += "*";
				}
				
				str += str;
				str += "*";
				
				System.out.println(space + str);
			} else {
				str = "";
				space = "";
				
				for(int j = 0; j < 2 * n - i; j++) {
					str += "*";
				}
				
				str += str;
				str += "*";
				
				for(int j = n; j < i; j++) {
					space += " ";
				}
				
				System.out.println(space + str);
			}
		}
	}
}