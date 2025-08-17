
package bellaApplication;
import java.util.Scanner;

public class Calculator {

public static void addition () {
	Scanner input = new Scanner (System.in);
	int a,b,sum;
	System.out.println( " Enter 1st number to be added. ");
	a = input.nextInt();
	System.out.println( " Enter 2nd number to be added. ");

	b = input.nextInt();
sum  = a + b;
System.out.printf( " Sum is %d" , sum);

	}

public static void main(String[] args) {
	System.out.println( " duh ");
	addition ();
}
}
