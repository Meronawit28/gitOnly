#include <iostream>
using namespace std;
float cir(float );
int rec(int ,int );
int squ(int );
float tri(float ,float );
int main()
{
	float cirarea,recarea,squarea,triarea;
	int r,l,w,s,b,h;
	cout<<"enter radius of the circle: "<<endl;
	cin>>r;
	cout<<"enter length of rectangle: "<<endl;
	cin>>l;
	cout<<"enter width of rectangle: "<<endl;
	cin>>w;
	cout<<"enter side length of square: "<<endl;
	cin>>s;
	cout<<"enter base length of triangle: "<<endl;
	cin>>b;
	cout<<"enter height of triangle: "<<endl;
	cin>>h;
	cirarea=cir(r);
	cout<<"area of circle is "<<cirarea<<endl;
	cout<<"------------------------------------"<<endl;
	recarea=rec(l,w);
	cout<<"area of rectangle is "<<recarea<<endl;
    cout<<"------------------------------------"<<endl;
	squarea=squ(s);
	cout<<"area of square is "<<squarea<<endl;
	cout<<"------------------------------------"<<endl;
	triarea=tri(b,h);
	cout<<"area of triangle is "<<triarea<<endl;
	cout<<"------------------------------------"<<endl;
	return 0;
}
inline float cir(float r){
	return 3.14*r*r;
}
inline int rec(int l,int w){
	return l*w;
}
inline int squ(int s){
	return s*s;
}
inline float tri(float b,float h){
	return b*h/2;
}

