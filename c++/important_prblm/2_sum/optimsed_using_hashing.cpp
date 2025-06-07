#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int>twoSum(vector<int> arr,int target){
    int n = arr.size();
    unordered_map<int,int>m;
    for(int i=0; i<n; i++){
        int first = arr[i];
        int compliment = target-first;
        if(m.find(compliment)!=m.end()){
            return {i,m[compliment]};
        }
        m[first]=i;
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