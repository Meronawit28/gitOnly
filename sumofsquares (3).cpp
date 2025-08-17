//question number 2
#include <iostream>

int main() {
    int n;
    int sum = 0;

    // Input a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Check if the input is valid
    if (n < 1) {
        std::cout << "Error: Entered number should be greater than or equal to 1." << std::endl;
        return 0;
    }

    // Handle special case when n is 1
    if (n == 1) {
        std::cout << "The square of 1 is 1." << std::endl;
        return 0;
    }

    // Calculate the sum of squares from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    // Display the result
    std::cout << "The sum of squares from 1 to " << n << " is " << sum << "." << std::endl;

    return 0;
}
/*Enter a positive integer: 5
The sum of squares from 1 to 5 is 55.

Process returned 0 (0x0)   execution time : 3.813 s
Press any key to continue.*/

