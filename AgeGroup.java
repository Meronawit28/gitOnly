package bellaApplication;
import java.util.Scanner;
public class AgeGroup {
public static void process() {
	System.out.println(" Enter age ");
	int a,m = 1;
	double s=1,total;
	Scanner input = new Scanner (System.in);

	a=input.nextInt();
	if (a > 0 && a<=2) {
		m=500;
		s=0.1;
	} else if (a > 2 && a<=16) {
		m=400;
		s=0.15;
	}else if (a > 17 && a<=30) {
		m=250;
		s=0.15;
	}else if (a > 31 && a<=45) {
		m=200;
		s=0.2;
	}else if (a > 45) {
		m=400;
		s=0.05;
	}else { 
		System.out.println(" INVALID " );
		
	}
	total = m * s;
	System.out.println(" TOTAL " +total );

}
public static void main(String [] args) {
	process();
}
}
