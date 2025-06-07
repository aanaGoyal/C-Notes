#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>arr){
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int j = i+1;
            int k = arr.size()-1;

            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum == 0){
                    ans.push_back({arr[i],arr[j],arr[k]});
                    j++; k--;
                    while(j<k && arr[j]==arr[j-1]){
                        j++;
                    }
                }else if(sum > 0){
                    k--;
                }else{
                    j++;
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