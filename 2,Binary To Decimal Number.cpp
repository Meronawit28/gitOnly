#include <iostream>
#include <cmath>
using namespace std;

int BinarytoDecimal (int Binary){
    int rem, Decimal=0, i = 1;

    /*with cmaths
    while (Binary > 0) {
        rem = Binary % 10;
        Binary /= 10; 
        Decimal += rem * pow(2, i);
        ++i;
    }
    return Decimal;*/
    
   /*without cmaths*/
   while (Binary > 0)
   {
       rem = Binary % 10;
       Binary /= 10;
       Decimal += rem * i; // storing the rem on the (n)th digit it belongs
       i = i * 2; //instead of using the pow() funtion we can update the i
   }
   return Decimal;
  
}

int main () {
    int Decimal, Binary;

    cout << "enter the binary number please: ";
    cin >> Binary;
    Decimal = BinarytoDecimal(Binary); // caling to the binary to decimal converter function by giving the binary argument 
    cout << "Base(2): [" << Binary << "]" << " => "<< "Base(10): [" << Decimal << "]"<< endl;

    return 0;
}