#include <iostream>
using namespace std;
void grade(int mark);
int main(){
	float mark;
	cout<<"enter your mark: "<<endl;
	cin>>mark;
	cout<<"mark ------------- grade"<<endl;
	cout<<mark<<"-----------------"; grade(mark);
	return 0;
}
void grade(int mark){
if (mark >= 91 && mark <= 100){
	cout<<"AA"<<endl;
}
else if (mark >= 81 && mark <= 90){
	cout<<"AB"<<endl;
}
else if (mark >= 71 && mark <= 80){
	cout<<"BB"<<endl;
}
else if (mark >= 61 && mark<= 70){
	cout<<"BC"<<endl;
}
else if (mark >= 51 && mark <= 60){
	cout<<"CD"<<endl;
}
else if (mark >= 41 && mark <= 50){
	cout<<"DD"<<endl;
}
else if (mark <= 40){
	cout<<"Fail"<<endl;
}
}
