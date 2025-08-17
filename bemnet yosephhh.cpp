//question 9
#include <iostream>
using namespace std;


bool palindrome(strin str){
    int len = str.length();
    for(int i =0; i < len/2 ; i++){
        if( str[i] != str[len - 1 - i]){
            return false;
        }
    }
    return true;
}





int main(){

   string str;
   cout << "Enter string : ";
   cin >> str;


   if(palindrome(str)){
    cout << str << " is palindrome";
   }
   else {
    cout << str << " is not palindrome";
   }
   


}


//question 10
#include <iostream>
using namespace std;



 void SplitNumbers(int num){

    int temp = num;
    int k = 1;
 
    while(temp > 9){
        k++;
        temp /= 10;
    } // toget the size

    int arrNumb[k];


    for(int i = k-1; i >=0; i--){
        arrNumb[i] = num % 10;
          num /= 10;
    }

    for(int i =0; i < k; i++){
        cout << arrNumb[i] << "  ";
    }


}

int main(){


    SplitNumbers();

}




//question 12
#include <iostream>
using namespace std;


int multiply(int x, int y, int z=2){

return x*y*z;

}

int main(){

    int x=2;
    int y=4;
  
    cout<<multiply(x,y)
}





//question 13
#include <iostream>
using namespace std;


voidPrintN(char A= '&', int N=1){
    for(int i=0: i < N; i++){
        cout<<A<<endl;
    }cout<<endl;

}


int main(){

    int repetition;
    char letter;

    cout<<"enter the letter"
    cin>>letter

    cout<<"enter the repetion"
    cin>>repetition

    printN();
}