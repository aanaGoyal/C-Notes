#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n] = {0,3,8,9,5,2};
    for(int i=0; i<n; i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout << i;
        }
    }
}