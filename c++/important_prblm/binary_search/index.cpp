#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {-1,0,3,4,5,9,12};
    int target = 12;
    int start = arr[0];
    int end = sizeof(arr)/4;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == target){
            cout << mid;
            break;
        }else if(target>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

}