#include<iostream>
using namespace std;
int result=1,base,exponent;
int power(int base,int exponent){
	for(int i=1;i<=exponent;i++){
		result*=base;
	}
	return result;

}
int main(){
	cout<<"Enter the base: ";
	cin>>base;
	cout<<"Enter the exponent: ";
    cin>>exponent;
	power(base,exponent);
	cout<<result;
	return 0;
}
