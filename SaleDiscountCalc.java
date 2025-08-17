package bellaApplication;
import java.util.Scanner;

public class SaleDiscountCalc {
	public static void sale() {
	Scanner input = new Scanner (System.in);
	double s,p,d;
	System.out.println (" Enter number of items sold");
	s=input.nextDouble();
	System.out.println (" Enter price of items sold");
	p=input.nextDouble();
	System.out.println (" Enter discount of items sold");
	d=input.nextDouble();
	
	d *=p;
				
		double total;
	
		
		total=s*d;
		System.out.println (" total = " + total);

		
	}
	public static void main (String [] args) {
		sale();
		
}
}
