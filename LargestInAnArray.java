package bellaApplication;

import java.util.Scanner;

public class LargestInAnArray {
	public static void largest () {
		System.out.println("Enter the size of the array: ");
		Scanner input = new Scanner (System.in);
        int size = input.nextInt();

        int[] arr = new int[size];

        System.out.println("Enter " + size + " integers:");
		for (int i =0; i < size;i ++) {
			 arr[i] = input.nextInt();
					}
		 int max = arr[0];
		
		for (int i =1; i < arr.length;i ++) {

			if (arr[i]> max) {
				 max=arr[i];

		}
	}
		System.out.println(" maximum is " + max);
	}

	public static void main(String[] args) {
		largest ();
	}

}
