#include <iostream>
//#include <cmath>
using namespace std;

int decimalToBinary (int Dec){
    int rem, binary, i = 1;
    
    /*
    using the cmath liberary to compute the power one
    while (Dec > 0) {
        rem = Dec % 2;
        Dec /= 2; 
        binary += rem * pow(10, i);
        i++;
    }
    return binary;
    */

   while (Dec > 0)
   {
       rem = Dec % 2;
       Dec /= 2;
       binary += rem * i; // storing the rem on the (n)th digit it belongs
       i = i * 10; //instead of using the pow() funtion we can update the i
   }
   return binary;
   
}

int main () {
    int Decimal, binary;

    cout << "enter the decimal number please: ";
    cin >> Decimal;
    binary = decimalToBinary(Decimal); // caling to the decimal to binarry converter function by giving the decimal argument 
    cout << "base(10): [" << Decimal << "]" << " => "<< "Base(2): [" << binary << "]"<< endl;

    return 0;
}