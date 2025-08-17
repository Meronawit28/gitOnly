#include <iostream>
using namespace std;
int sumofx(int y);
int main(){
	int y,z;
	cout<<"Enter the limit for sum: "<<endl;
	cin>>y;
	z=sumofx(y);
	cout<<"The sum is:"<<z<<endl;
return 0;
}int sumofx(int y){
	 int sum;
	for(int i=0;i<=y;i++){
		sum = sum+i;
	}
	return sum;
}
