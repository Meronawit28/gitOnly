/* this algo is to print the prime numbers between the two given nmbers */

#include <iostream>

int check_prime (int);


int main () {
    using namespace std;
    int num1, num2;

    cout << "Enter the two numbers resepectivly >> ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        num1= num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    for (int i = num1 + 1; i < num2; i++){

        if (check_prime(i)) {
            cout << i << " ";
        }
    }



return 0;
}

int check_prime (int n) {

    bool is_prime = true;
    if (n == 1 || n ==0) {
        is_prime = false;
    }else {
        for (int i = 2; i < n / 2; i++) {
            if(n % i == 0) {
                is_prime = false;
                break;
            } 
        }
    }
    
    return is_prime;
}