package bellaApplication;
import java.util.Scanner;

public class CircleAreaFloat {
	

	public static void main(String[] args) {
		Scanner input = new Scanner (System.in);
double r , area ;
System.out.println (" Enter radius");
r = input.nextDouble();
area = r * r * Math.PI;

System.out.printf (" Area is %f%n" , area);

	}

}
