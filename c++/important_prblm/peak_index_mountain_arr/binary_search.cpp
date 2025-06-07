#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {0,3,8,9,5,2};
    int start = 1;
    int end = n-2;
    while(start<=end){
        int mid= start+(end-start)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            cout << mid;
            return 0;
        }else if(arr[mid]>arr[mid-1]){
            start=mid+1;
        }else {
            end= mid-1;
        }
    }
    return 0;
}