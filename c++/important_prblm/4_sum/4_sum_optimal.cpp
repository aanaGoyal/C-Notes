#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int> arr, int target){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1; j<arr.size();j++){
            if(j>i+1 && arr[j]==arr[j-1]){
                continue;
            }
            int p = j+1, q=arr.size()-1;
            while(p<q){
                long long sum = (long long)arr[i] + (long long)arr[j] + (long long)arr[p] + (long long)arr[q];
                if(sum < target){
                    p++;
                }else if(sum > target){
                    q--;
                }else{
                    ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                    p++;
                    q--;
                    while(p<q && arr[p]==arr[p-1]){
                        p++;
                    }
                }
            }
            
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {-2,-1,-1,1,1,2,2};
    int target = 0;
    vector<vector<int>> ans = fourSum(arr,target); 
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}