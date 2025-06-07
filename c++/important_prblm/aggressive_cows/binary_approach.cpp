#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossibleMinDistance(vector<int>arr, int n, int c, int minDistance){
    sort(arr.begin(),arr.end());
    int cows = 1;
    int lastStallPosition = arr[0];
    for(int i=0; i<n; i++){
        if((arr[i]-lastStallPosition)>=minDistance){
            cows++;
            lastStallPosition=arr[i];
        }if(cows==c){
            return true;
        }
    }
    return false;
}
int aggressiveCows(vector<int>arr, int n, int c){
    int start = 1;
    int max_value = 0;
    int min_value = 0;
    for(int i=0; i<n; i++){
        max_value=max(max_value,arr[i]);
        min_value=min(min_value,arr[i]);
    }
    int end = max_value-min_value;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleMinDistance(arr,n,c,mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr= {1,2,8,4,9};
    int n = arr.size();
    int c = 3;
    cout << aggressiveCows(arr,n,c);
    return 0;
}