#include<iostream>
using namespace std;

int reverse(int n) {

    int r, rev = 0;

    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}

int main() {

    int n, rev;

    cout << "Enter a number:";
    cin>>n;

    rev = reverse(n);
    cout << "Reverse number is:" << rev;

    return 0;
}
