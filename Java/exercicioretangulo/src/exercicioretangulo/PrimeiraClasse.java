package exercicioretangulo;
import java.util.Scanner;
import java.util.Locale;

public class PrimeiraClasse {

	public static void main(String[] args) {
		
	
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		double base,altura,perimetro,diagonal,area;
		
		System.out.print("Qual a area do retangulo:");
		base = sc.nextDouble();
		System.out.print("Qual a altura do retangulo:");
		altura = sc.nextDouble();
		
		System.out.print("FAla teu nome")
		nome = next.String()
		
		area= base * altura ;
		perimetro = 2 * base + 2 * altura;
		diagonal= Math.sqrt((base * base) + (altura * altura));

		
		
		System.out.println("Seu nome é " + (nome))
		System.out.println("AREA:" + String.format("%.4f", area));
		System.out.println("PERIMETRO:" + String.format("%.4f", perimetro));
		System.out.println("DIAGONAL:" + String.format("%.4f", diagonal));
		
		
sc.close();
} 
}