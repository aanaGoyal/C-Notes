#include<iostream>
#include<array>
using namespace std;
int main(){
    int n=9;
    int arr[9] = {1,1,2,3,3,4,4,8,8};
    int start = 0;
    int end = n-1;
    for(int i=0; i<n; i++){
        int mid = start + (end-start)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            cout << arr[mid] << endl;
            return 0;
        }else if(mid%2==0){
            if(arr[mid]==arr[mid-1]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }else{
            if(arr[mid]==arr[mid-1]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
}