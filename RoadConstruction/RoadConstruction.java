//Language = java
//ID = 2637
//QLink = https://quera.org/problemset/2637/
//Author = AmirKhaksar
import java.util.Scanner;

public class RoadConstruction {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);       
        int n = scanner.nextInt();
        int row = n / 2; 
        int col = (n % 2) + row; 
        System.out.print((row + 1) * (col + 1));
    }
}