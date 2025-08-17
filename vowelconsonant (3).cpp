//question number 9
#include <iostream>

int main() {
    char ch;

    // Input a single character
    std::cout << "Enter a single character: ";
    std::cin >> ch;

    // Check if the input character is a vowel or consonant
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            std::cout << ch << " is a vowel." << std::endl;
            break;
        default:
            std::cout << ch << " is a consonant." << std::endl;
            break;
    }

    return 0;
}
/*Enter a single character: A
A is a vowel.

Process returned 0 (0x0)   execution time : 7.524 s
Press any key to continue.*/
