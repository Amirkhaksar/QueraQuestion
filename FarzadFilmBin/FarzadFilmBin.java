/*
	Language: java
	ID: 655
	QLink: https://quera.org/problemset/655/
	Author: cssu-ama
*/

import java.util.Scanner;

public class FarzadFilmBin {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = Integer.parseInt(scan.nextLine());
		
		String[] text = new String[n];
		
		for(int i = 0; i < n; i++) {
			String temp = scan.nextLine();
			
			if(temp.contains(" ")) {
				String[] temp2 = temp.split(" ");
				
				text[i] = "";
				
				for(int j = 0; j < temp2.length; j++) {
					text[i] += 
						temp2[j].substring(0, 1).toUpperCase() + 
						temp2[j].substring(1).toLowerCase() + ((j + 1 == temp2.length) ? "" : " ");
				}
			} else {
				text[i] = temp.substring(0, 1).toUpperCase() + temp.substring(1).toLowerCase();
			}
		}
		
		for(int i = 0; i < n; i++) {
			System.out.println(text[i]);
		}
	}
}
