#include <iostream>
using namespace std;

void fact(int num); 
int main()
{
   int num;
    cout<<"Enter the number to find factorial\n";
    cin>>num;
    fact(num);
    return 0;
}
void fact(int num)
{
    int i,f=1;
    for(i=1; i<=num; i++)
    {
		   f=f*i;
     }
	cout<<"Factorial of "<<num<<"is:"<<f;
    
}