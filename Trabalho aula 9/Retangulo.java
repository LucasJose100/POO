
import java.util.InputMismatchException;
import java.util.Scanner;

public class Retangulo {
	
	private float base;
	private float altura;
	
	public Retangulo(float base, float altura)
	{
		setBase(base);
		setAltura(altura);
	}

	public float getBase() {
		return base;
	}

	public void setBase(float base) {
		this.base = base;
	}

	public float getAltura() {
		return altura;
	}

	public void setAltura(float altura) {
		this.altura = altura;
	}


	public float getArea() {
		
		return this.base * this.altura;
	}


	public float getPerimetro() {
		return this.base*2 + this.altura*2 ;
	}


	public void imprimir() {
		System.out.println( "Area=" + getArea()  );

		System.out.println( "Perimetro=" + getPerimetro()  );

		
	}
	public void teste(){
		float alt,area1,perime;
		try{
			System.out.println("Entre com a base: ");
			Scanner a = new Scanner(System.in);
			base = a.nextInt();
			System.out.println("Entre com a Altura: ");
			alt = a.nextInt();
			area1 = base * alt;
      perime = (base+base)+(alt+alt);

			System.out.println("Area: " +area1);
      System.out.println("Perimetro" + perime);

		}
		catch (InputMismatchException e)
		{
			System.out.println("~ Tipo errado de info ~");
      teste();
		}
		
	}
}
