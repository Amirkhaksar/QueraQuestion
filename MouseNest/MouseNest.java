/*
	Language: java
	ID: 91712
	QLink: https://quera.org/problemset/91712/
	Author: cssu-ama
*/

import java.util.Scanner;

public class MouseNest {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int x1 = scan.nextInt();
		int x2 = scan.nextInt();
		
		if(x1 < x2) {
			System.out.print((x2 - x1 > 1) ? "RR" : "R");
		} else if(x1 == x2) {
			System.out.print("Saal Noo Mobarak!");
		} else {
			System.out.print((x1 - x2 > 1) ? "LL" : "L");
		}
	}
}