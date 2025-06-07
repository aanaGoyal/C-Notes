#include<iostream>
using namespace std;
int main(){
    int n=8;
    int arr [8] = {3,4,5,6,7,0,1,2};
    int start = 0;
    int end = n-1;
    int target = 0;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(target==arr[mid]){
            cout << mid;
            return 0;
        }else if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target<arr[end]){
                end= mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(arr[mid]<target && target<=arr[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return 0;
}