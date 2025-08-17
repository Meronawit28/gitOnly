package bellaApplication;
import java.util.Scanner;
public class SumOfNaturalNumbers {
	public static void sum() {
	Scanner input = new Scanner (System.in);
int a;
int b = 0;
System.out.println(" Enter an integer ");
a=input.nextInt();
for (int i=0;i<=a;i++) {
	b+=i;
}
System.out.println(" sum of natural numbers " + a + " is " + b);
input.close();
}
	public static void main(String [] args) {
		sum();
		
	}
}
