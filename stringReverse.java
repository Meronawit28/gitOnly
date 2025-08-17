package bellaApplication;
import java.util.Scanner;

public class stringReverse {

		    public static void main(String[] args) {
		    	
		        String word ;
		    	Scanner input= new Scanner (System.in);
		        System.out.println(" Enter a word to be reversed ");

		    	word = input.next();

		        String reversedWord = new StringBuilder(word).reverse().toString();
		        System.out.println("Reversed string: " + reversedWord);

		    }
		}
	


