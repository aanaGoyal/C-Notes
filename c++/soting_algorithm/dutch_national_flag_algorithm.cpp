#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {2,0,2,1,1,0};
    int n= arr.size();
    int mid = 0;
    int low = 0;
    int high = n-1;
    for(int i=0; i<n; i++){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i=0;i<n; i++){
        cout << arr[i] << " ";
    }
}