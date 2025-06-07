#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {4,1,5,2,3};
    // vector<int>ans;
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}