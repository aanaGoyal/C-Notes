// Factorial upto n integers --->>
#include<bits/stdc++.h>
using namespace std;
int f(int n){
    int factorial = 1;
    if(n==0){
        return 1;
    }
    return n*f(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << f(n);
}