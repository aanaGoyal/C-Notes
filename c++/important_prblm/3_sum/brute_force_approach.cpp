#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>arr){
        int n= arr.size();
        vector<int>pairs;
        vector<vector<int>> ans;
        set<vector<int>>s;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    if(arr[i]+arr[j]+arr[k]==0){
                        pairs = {arr[i],arr[j],arr[k]};
                        sort(pairs.begin(),pairs.end());
                        if(s.find(pairs)==s.end()){
                        s.insert(pairs);
                        ans.push_back(pairs);
                    }
                    }
                }
            }
        }
        return ans;
    }
};
int main(){
    vector<int>arr = {-1,0,1,2,-1,4};
    Solution s1;
    vector<vector<int>> ans = s1.threeSum(arr);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}