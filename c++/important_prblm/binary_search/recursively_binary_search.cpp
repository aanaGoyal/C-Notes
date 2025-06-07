#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr, int target,int start,int end){
    if(start<=end){
        int mid = start+(end-start)/2;
        if(target>arr[mid]){
            return binarySearch(arr,target,mid+1,end);
        }else if(target<arr[mid]){
            return binarySearch(arr,target,start,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,2,9};
    int target = 9;
    int start = 0;
    int end = arr.size()-1;
    cout << binarySearch(arr,target,start,end);
    return 0;
}