#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>arr){
        set<vector<int>> uniqueTriplets;

        for(int i=0; i<arr.size(); i++){
            int target = -arr[i]; // a
            set<int>s;

            for(int j=i+1; j<arr.size(); j++){
                int c = target-arr[j];

                if(s.find(c)!=s.end()){
                    vector<int>triplet = {arr[i],arr[j],c};
                    sort(triplet.begin(),triplet.end());
                    uniqueTriplets.insert(triplet);
                }
                s.insert(arr[j]);
            }
        }
        vector<vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
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