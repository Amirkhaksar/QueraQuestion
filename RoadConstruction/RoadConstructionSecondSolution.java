
/*
	Language: java
	ID: 2637
	QLink: https://quera.org/problemset/2637/
	Author: cssu-ama
*/

import java.util.Scanner;

public class RoadConstructionSecondSolution {
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		
		int sum = 0;
		int difference = 2;
		int checker = -1;
		
		for(int i = 1; i <= n; i++) {
			sum += difference;
			checker++;
			
			if(checker == 2) {
				difference++;
				checker = 0;
			}
			
		}
		
		System.out.print(sum);
	}
}
