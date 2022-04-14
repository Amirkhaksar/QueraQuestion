/*
	Language: Java
	ID: 33045
	Qlink: https://quera.org/problemset/33045/submissions/
	Author: cssu-ama
*/


import java.util.Scanner;

public class TroubleMakerDividers {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		
		int sum = 0;
		int quantity = 0;
		
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= i; j++) {
				if(i % j == 0) {
					quantity++;
					sum += j;
				}
			}
		}
		
		System.out.print(quantity + " " + sum);
	}
}