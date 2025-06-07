#include<bits/stdc++.h>
using namespace std;
/*
void solve(int n) {
    for (int i = n; i >= 0; i--) {  // Corrected the loop condition and decrement.
        for (int j = n; j >(n-i-1); j--) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
*/

/*
void solve(int n){
    for(int i=0; i<=4; i++){
        for(int j=0; j<=(n-i-1); j++){
            cout << " ";
        }
        for(int j=0; j<(2*i-1); j++){
            cout << "*";
        }
        for(int j=0; j<=(n-i-1); j++){
            cout << " ";
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

void solve(int n){
    for(int i=0; i<=4; i++){
        for(int j=0; j<=(i); j++){
            cout << " ";
        }
        for(int j=0; j<(2*n-(2*i-1)); j++){
            cout << "*";
        }
        for(int j=0; j<=(i); j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    solve(n);
}

