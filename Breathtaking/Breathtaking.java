/*
	Language: Java
	ID: 26651
	Qlink: https://quera.org/problemset/26651/
	Author: cssu-ama
*/


import java.util.Scanner;

public class Breathtaking {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		
		int[] A = new int[n];
		for(int i = 0; i < n; i++) {
		    A[i] = scan.nextInt(); 
		}
		
		int[] B = new int[n];
		for(int i = 0; i < n; i++) {
		    B[i] = scan.nextInt(); 
		}
		
		int sum = 0;
		for(int i = 0; i < n; i++) {
		    sum += A[i] * B[i];
		}
		
		System.out.print(sum);
	}
}
