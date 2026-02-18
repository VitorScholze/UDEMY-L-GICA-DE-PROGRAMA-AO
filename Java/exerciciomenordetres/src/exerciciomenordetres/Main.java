package exerciciomenordetres;
import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in); 
		
		int x, y , z,menor;
		
		
		System.out.print("Primeiro Valor: ");
		x= sc.nextInt();
		System.out.print("Segundo Valor: ");
		y = sc.nextInt();
		System.out.print("Terceiro Valor: ");
		z = sc.nextInt();
		
		
		
		menor = 0;
		

		if (x < y && x < z ) {
			menor = x;
		
			
			
	}
		else if (y < x && y < z ){
			
			menor = y;
			
		}else {
			
			menor = z;
			
		}
		
		
			System.out.print("MENOR:" + menor);
		

}
}