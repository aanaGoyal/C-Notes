#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>arr, int n, int m, int maxTime){
    int painter = 1;
    int time = 0;
    for(int i=0; i<n; i++){
        if(time+arr[i]<=maxTime){
            time+=arr[i];
        }else{
            painter++;
            time=arr[i];
        }
    }
    return (m>=painter)? true : false;
}
int paintersPrblm(vector<int>arr, int n, int m){
    int sum = 0;
    int max_value = INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        max_value=max(max_value,arr[i]);
    }
    int start = max_value;
    int end = sum;       
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    vector <int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;
    cout << paintersPrblm(arr,n,m) << endl;
}