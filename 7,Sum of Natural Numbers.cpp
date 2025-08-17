#include<iostream>
using namespace std;

int SumofN(int , int);

int main(){
int first,last,Sum;

cout<<"Enter the 1st range number: "<<endl;
cin >> first;
cout<<"Enter the last range number: "<<endl;
cin >> last;
Sum = SumofN(first , last);
cout<<"Sum of natural numbers from "<<first <<" to "<<last << " is : " <<Sum;

    return 0;
}
int SumofN(int first,int last){
    int Sum;
    if(first == last){
        return first; }
    else{
        Sum = first + SumofN(first + 1, last);
        return Sum; }
}
