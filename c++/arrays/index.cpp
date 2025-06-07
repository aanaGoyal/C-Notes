#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    cout << arr[2] << "\n";

    // Updating also is available.
    arr[2]+=10;
    cout << arr[2];

    arr[2] = 1;
    cout << arr[2];
    return 0;

    cout << sizeof(arr)/sizeof(arr[0]);
    
}

/* ARRAYS ARE STORED IN CONSEQUENT IP ADDRESSES. */


