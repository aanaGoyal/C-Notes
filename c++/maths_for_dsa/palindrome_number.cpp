#include<iostream>
using namespace std;
bool isPalindrome(int num){
    int originalNumber = num;
    int reversed = 0;
    while(num != 0){
        int digit = num % 10;
        if(reversed > INT_MAX/10 || reversed < INT_MIN/10){
            return 0;
        }
        reversed = (reversed*10)+digit;
        num = num / 10;
    }
    return originalNumber == reversed;
}
int main(){
    int n ;
    cin >> n;
    if(isPalindrome(n)){
        cout << "Palindrome";
    }else{
        cout << "Not a palindrome";
    }
}