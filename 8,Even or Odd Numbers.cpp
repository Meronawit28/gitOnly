#include<iostream>
using namespace std;

int first,last,a,b,choice;
int Even(int , int);
int Odd(int , int);


int main(){

cout<<"Enter the 1st range number: "<<endl;
cin >> first;
cout<<"Enter the last range number: "<<endl;
cin >> last;

cout<<"Put 1 for even and 2 for odd: "<<endl;
cin >> choice;
if(choice == 1){
Even(first,last);
}else if(choice == 2){
Odd(first,last);
}else 
cout<<"Error!!!! Enter again";

    return 0;
}
int Even(int a,int b){

// if(first % 2 == 0){
    cout << "The even numbers are"<< endl;
    for(int i = first; i < last;i++){
        if(i % 2== 0){
        cout<< i<< endl;
    }
}
}
int Odd(int , int){

cout << "The odd numbers are"<< endl;
    for(int i = first; i < last;i++){
        if(i % 2 != 0){
        cout<< i<< endl;

}

}
}