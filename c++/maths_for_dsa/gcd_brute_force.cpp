#include<iostream>
using namespace std;
int calculateGCD(int a, int b){
    int gcd = 1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int a = 20;
    int b = 28;
    cout << calculateGCD(a, b);
}