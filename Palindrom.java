package bellaApplication;
import java.util.Scanner;
public class Palindrom {

	public static void main(String[] args) {
Scanner input = new Scanner (System.in);
String word,reversedWordS;
System.out.print((" Enter the word to be checked :"));
word = input.next();
String reversedWord = new StringBuilder(word).reverse().toString();
if (word.equals(reversedWord)) {
	System.out.print(word + " is a palindrom");
}else {
	System.out.print(word + " is not a palindrom");
}
	}
		
	}


