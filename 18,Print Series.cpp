#include<iostream>
using namespace std;

double sum(int ,int );
double result;

int main()
{
    int a,b;

    cout<<"\nEnter value of a: ";
    cin>>a;
    cout<<"\nEnter value of b: ";
    cin>>b;

    result=sum(a,b);

    cout<<"Print series [ x + x^3/3! + x^5/5! +.....+ x^n/n!] is: "<<result<<"\n";

    return 0;
}

double sum(int a,int b)
{
    long power(int,int);
    int x,y;
    double n=0,fac=1;
    long m;

    for(x=1;x<=b;x+=2)
    {
    m=power(a,y);
    for(y=1;y<=x;++y)
    {
    fac*=y;
    }
    n+=m/fac;
    fac=1;
    }
    return(n);
}

long power(int x,int i)
{
    long result=1,y;
    for(y=1;y<=i;++y)
    {
    result*=x;
    }
    return(result);
}