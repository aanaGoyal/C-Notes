#include<bits/stdc++.h>
using namespace std;
void solve(int n){
            int start = 1;
    for(int i=0; i<=n; i++){
        if(i%2==0){
            start = 1;
        }else{
            start = 0;
        }
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void solve_2(int n){
    for(int i=0; i<=n; i++){
            char c = 'A';
        for(int j=0; j<=i; j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    // solve(n);
    solve_2(n);
}