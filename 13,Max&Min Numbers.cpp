#include <iostream>
using namespace std;

int Mini(int Ar[], int x){
	int m = Ar[0];
	for (int i = 1; i < x; i++)
	m = min(m, Ar[i]);
return m;
}

int Max(int Ar[], int x){
	int n= Ar[0];
	for (int i = 1; i < x; i++)
	n = max(n, Ar[i]);
return n;
}

int main(){
	int Ar[10];
	cout<<"enter elements of array"<<endl;
	for (int i = 0; i < 10; i++){
	    	cin>>Ar[i]; }
	 
	int x = sizeof(Ar) / sizeof(Ar[0]);
	cout << "Maximum of array: " << Max(Ar, x) <<endl;
	cout << "Minimum of array: " << Mini(Ar, x);
return 0;
}
