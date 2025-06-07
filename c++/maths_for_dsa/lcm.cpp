#include<iostream>
using namespace std;
int euclidAlgorithm(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int lcm(int a, int b){
    int gcd = euclidAlgorithm(a,b);
    return (a*b)/gcd;
}
int main(){
    int a = 20;
    int b = 28;
    cout << lcm(a,b);
}