/*
	Language: java
	ID: 647
	QLink: https://quera.org/problemset/647/
	Author: cssu-ama
*/

import java.util.Scanner;

public class SigmaCalculation {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		int m = scan.nextInt();
		
		int sigma = 0;
		
		for(int i = -10; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				sigma += ((i + j) * (i + j) * (i + j)) / (j * j);
			}
		}
		
		System.out.print(sigma);
	}
}
