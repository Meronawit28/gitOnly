#include <iostream>
using namespace std;
void swapadr(int *t,int *u);
void swapref(int &v,int &w);
void swapcbv(int x,int y);
int main()
{   int choose;
	cout<<"enter 1 to swap by value 2 by reference 3 by address"<<endl;
	cin>>choose;
	int s,a,b;
	if (choose==1){
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	swapcbv(a,b);
	cout<<"Origanls : "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
else if (choose==2){
	int c,d;
	cout<<"enter two numbers"<<endl;
	cin>>c>>d;
	swapref(c,d);
	cout<<"Originals : "<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
}
else if (choose==3){
	int e,f;
	cout<<"enter two numbers"<<endl;
	cin>>e>>f;
	swapadr(&e,&f);
	cout<<"Originals : "<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
}
return 0;
}
void swapcbv(int x,int y)
{
	int temp;
    temp = x;	
    x=y;
    y=temp;
    cout<<"Call By Value : "<<endl;
    cout<<x<<endl;
	cout<<y<<endl;
}
void swapref(int &v,int &w)
{
	int temp;
    temp = v;	
    v=w;
    w=temp;
    cout<<"Call By Reference : "<<endl;
    cout<<v<<endl;
	cout<<w<<endl;
}
void swapadr(int *t,int *u)
{
	int temp;
    temp = *t;	
    *t=*u;
    *u=temp;
    cout<<"Call By Adress : "<<endl;
    cout<<*t<<endl;
	cout<<*u<<endl;
}
