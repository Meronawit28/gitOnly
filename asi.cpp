//
// Done by ayman ayub akber 
// lab group 3
// section DRBSE2302B
// 
// 
//
// #include <iostream>
//using namespace std;
//// Define the function with default values for A and N
//void printCharacter(char A = '&', int N = 1) {
//    for (int i = 0; i < N; ++i) {
//        cout << A;
//    }
//      cout <<endl;
//}
//
//int main() {
//    // Example usage:
//    printCharacter();        // Default values ('&' and 1) are used
//    printCharacter('#');     // Default value for N (1) is used
//    printCharacter('@', 3);  // Both A and N are provided
//
//    // Indicate successful execution by returning 0
//    return 0;
//}

#include <iostream>

using namespace std;

// Define the function with default value for Z
int calculateProduct(int X, int Y, int Z = 2) {
    return X * Y * Z;
}

int main() {
    // Example usage:
    int x, y;
   
    cout << "enter 2 numbers:" << endl;
    cin >> x >> y;

    

    int result1 = calculateProduct(x, y);      // Z defaults to 2
    int result2 = calculateProduct(x, y,5);   // Z is provided as 5

    // Display the results
     cout << "Result 1: " << result1 << std::endl;
     cout << "Result 2: " << result2 << std::endl;

    // Indicate successful execution by returning 0
    return 0;
}

//#include <iostream>
//#include <vector>
//using namespace std;
////vector for effective random access 
//// since it stores the intiegers it helps make it easier
//
// vector<int> splitDigits(int num) {
//    // Initialize a vector to store the individual digits
//     vector<int> digits;
//
//    // Process each digit in the number
//    while (num > 0) {
//        // Extract the last digit and add it to the vector
//        digits.push_back(num % 10);
//
//        // Remove the last digit from the number
//        num /= 10;
//    }
//
//    // Reverse the vector to get the digits in the correct order
//     reverse(digits.begin(), digits.end());
//
//    // Return the vector containing the individual digits
//    return digits;
//}
//
//int main() {
//    // Declare a variable to store user input
//    int input;
//
//    // Prompt the user to enter an integer
//     cout << "Enter an integer: ";
//
//    // Read user input and store it in the 'input' variable
//     cin >> input;
//
//    // Call the splitDigits function with the user-provided integer
//     vector<int> result = splitDigits(input);
//
//    // Display the splitted array
//     cout << "Splitted array: ";
//    for (int digit : result) {
//         cout << digit << " ";
//    }
//     cout << std::endl;
//
//    // Indicate successful execution by returning 0
//    return 0;
//}

// Include necessary header files for input/output and string manipulation
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//// algorithm for reverse 
//
//// Define the function checkPalindrome that takes a const reference to a string parameter
//bool checkPalindrome(const  string& str) {
//    // use bool to check if it's true or fales
//    // Create a copy of the input string to store the reversed version
//     string reversed = str;
//
//    // Reverse the characters in the 'reversed' string
//     reverse(reversed.begin(), reversed.end());
//
//    // Check if the original string is equal to its reversed version
//    return str == reversed;
//}
//
//// Define the main function
//int main() {
//    // Declare a variable to store user input
//     string input;
//
//    // Prompt the user to enter a string
//     cout << "Enter a string: ";
//
//    // Read user input and store it in the 'input' variable
//     cin >> input;
//
//    // Call the checkPalindrome function with the user-provided string
//    if (checkPalindrome(input)) {
//        // Output a message indicating that the input is a palindrome
//         cout << input << " is a palindrome." <<endl;
//    }
//    else {
//        // Output a message indicating that the input is not a palindrome
//         cout << input << " is not a palindrome." <<endl;
//    }
//
//    // Indicate successful execution by returning 0
//    return 0;
//}

