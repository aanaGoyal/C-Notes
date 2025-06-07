#include<iostream>
using namespace std;
int main(){
    int n;
    int exponential;
    cin >> n >> exponential;
    long binary_number = exponential;
    if(n<0){
        n=1/n;
        binary_number=-binary_number;
    }
    double ans = 1;
    while(binary_number>0){
        if(binary_number%2==1){
            ans*=n;
        }
        n*=n;
        binary_number/=2;
    }
    cout << ans;

}