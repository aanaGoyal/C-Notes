#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>twoSum(vector<int> arr,int target){
    sort(arr.begin(),arr.end());
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum == target){
            return {arr[start],arr[end]};
        }else if(sum < target){
            start++;
        }else{
            end--;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> arr = {5,2,11,7,15};
    int target = 9;
    vector<int>ans = twoSum(arr,target); 
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
}