#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,6,5,4};
    int n = arr.size();
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot == -1){
        for(int i=n-1; i>=0; i--){
            cout << arr[i] << " ";
        }
        return 0;
    }
    for(int i=n-1; i>pivot; i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;

        }
    }
    int i = pivot + 1;
    int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}