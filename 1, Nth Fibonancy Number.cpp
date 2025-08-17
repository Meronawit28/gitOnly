#include <iostream>
using namespace std;

void fibonnancyCal(int num){
    int i = 1, n = 0, x;
    cout << n << " "; // 0 will out at onece the rest controled by the loop
    for (; i < num; ) {
        cout << i << " ";
        x = i, i +=n, n = x; // (n)th = (n)th - (n -1)th
    }
}

int main () {
    int num;
    cout << "enter the number: ";
    cin >> num;
    fibonnancyCal(num); // call the fibonancy function by giving the limit number
    return 0;
}




