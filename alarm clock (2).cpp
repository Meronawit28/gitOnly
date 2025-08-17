#include <iostream>
#include <windows.h>

using namespace std;

int main()
{ int h,m,s,input;
int h1,m1,s1;
 input=0;
while(input==0)
{
    cout<<"Enter hour"<<endl;
    cin>>h;
    cout<<"Enter minutes"<<endl;
    cin>>m;
    cout<<"enter seconds"<<endl;
    cin>>s;
    cout << " set alarm in HH:MM:SS\n\n";
    cin>>h1>>m1>>s1;

    if(h<24&&m<60&&s<60)
        input++;
    else
        system("cls");

}
while(input==1){
    system("cls");
    cout<<h<<":"<<m<<":"<<s<<endl;

    if(s>59){
        s=0;
        m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>24)
        {
          system("cls");
        }
        if (h < 12 ){
        cout << " PM ";

    }
else {
      cout << "AM";

    }
     Sleep(1000);

    s++;

    if(h==h1&&m==m1&&s==s1){
        cout<<"\a\a\a\a\a\a\a\a\a\a\a";

    cin.get();}

}








    return 0;
}
