#include <iostream>
using namespace std;
string** accept() {
    string** str = new string*[5];
    for (int i = 0; i < 5; i++) {
        str[i] = new string[3];
        for (int j = 0; j < 3; j++) {
            cout << "Enter your string: ";
            cin >> str[i][j];
        }
    }
    return str;
}

int main() {
    // Call the accept function
    string** myArray = accept();

    // Access and print the array elements
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    // Free the memory allocated for the array
    for (int i = 0; i < 5; i++) {
        delete[] myArray[i];
    }
    delete[] myArray;

    return 0;
}