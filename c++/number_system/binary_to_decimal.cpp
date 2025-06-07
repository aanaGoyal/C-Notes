#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int rem = n%2;
        ans+=(rem*pow);
        n=n/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}