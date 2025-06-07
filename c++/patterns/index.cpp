#include<bits/stdc++.h>
using namespace std;

// SQUARE PATTERN --->> 
/*
int solve(int n){
    for (int i=0; i<=n; i++){
        for (int j=0; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    solve(n);
}
*/




// Up to down increase pattern --->> 
/*
int solve(int n){
    for (int i=0; i<=n; i++){
        for (int j=0; j<=i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}
*/




// Print numbers from up to down --->>
int solve(int n){
    for (int i=0; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}