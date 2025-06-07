#include<iostream>
using namespace std;
int reverseNumber(int num){
    int reversed = 0;
    while(num != 0){
        int digit = num % 10;
        if(reversed > INT_MAX/10 || reversed < INT_MIN/10){
            return 0;
        }
        reversed = (reversed*10)+digit;
        num = num / 10;
    }
    return reversed;
}
int main(){
    int num = 4537;
    cout << reverseNumber(num) << endl;
}