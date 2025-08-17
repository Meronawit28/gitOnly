#include <iostream>
using namespace std;
int power(int x,int u);
int main(){
	int x,y,z;
	cout<<"enter a number: "<<endl;
	cin>>x;
	cout<<"enter the power to raise: "<<endl;
	cin>>y;
	z = power(x,y);
	cout<<"The result is: " <<z<<endl;
}
int power(int x,int y){
	int p;
	for(int i=0;i<=y;i++){
		p=x;
		p = p*x;
	}
	return p;
}
