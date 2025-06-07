#include<iostream>
#include<vector>
using namespace std;
vector<int>twoSum(vector<int> arr,int target){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int first = arr[i];
        for(int j=i+1; j<n; j++){
            int second = arr[j];
            int sum = first+second;
            if(sum == target){
                return {i,j};
            }
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