#include <iostream>
using namespace std;
int sum(int Ar[], int a)
{
	int sum;
	for (int i = 0; i < a; i++)
	sum += Ar[i];
	return sum;
}
int main()
{
	int Ar[50];
	cout<<"enter the elements of the array"<<endl;
		for (int i = 0; i < 10; i++)
		{
			cin>>Ar[i];
		}
	int a = sizeof(Ar) / sizeof(Ar[0]);
	cout << "Sum of given array is: " << sum(Ar, a);
	return 0;
}
