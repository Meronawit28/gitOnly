#include <iostream>
using namespace std;

void perfect(int sum);

int num,sum=0;
int x;

int main(){
    cout<<"Enter a number: ";
    cin>>num;
    perfect(sum);
}
void perfect(int sum){
    for(x=1; x < num ; x++){
        if(num%x == 0)
            sum=sum + x; }
    if(sum==num){
        cout<<num<<" is a perfect number"<<endl;
    }else{
        cout<<num<<" isn't a perfect number"<<endl; }
}   

