   #include <iostream>
   bool isPalindrome(int x) {
        int xo = x, is_x_pal = 0;
        while(x > 0) {
             is_x_pal = (is_x_pal * 10) + (x % 10);
            x /= 10;
        }
        
        if (is_x_pal == xo) {
            return 1;
        }else {
            return 0;
            long
        }
    }
int main () {
    using namespace std;
    cout << "isPalindrome(121) = " << isPalindrome(121);
    return 0;
}