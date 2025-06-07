#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>arr, int n, int m, int mid){
    int students = 1;
    int pages = 0;
    for(int i=0; i<n; i++){
        if (arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }else{
            students+=1;
        }
    }
    return students>m ? false:true;
}
int allocateBooks(vector<int>arr,int n, int m){
    // int (m>n){
    //     return -1;
    // }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int start = 0;
    int end= sum;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isValid(arr,n,m,mid)){
            ans= mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int> arr = {2,1,3,4};
    int n = 4;
    int m =2;
    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}