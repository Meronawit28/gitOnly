8)	#include <iostream>

int main() {
    int height;

    std::cout << "Enter the height of the Christmas tree: ";
    std::cin >> height;

    for (int i = 0; i < height; i++) {
        // Print spaces
        for (int j = 0; j < height - i - 1; j++) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < 2 * i + 1; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    // Print trunk
    for (int i = 0; i < height - 1; i++) {
        std::cout << " ";
    }
    std::cout << "*" << std::endl;

    return 0;
}



