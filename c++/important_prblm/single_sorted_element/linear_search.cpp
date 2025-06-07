#include<iostream>
#include<array>
using namespace std;
int main(){
    int n=9;
    int arr[9] = {1,1,2,3,3,4,4,8,8};
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            cout << arr[i] << endl;
        }
    }
}