#include<iostream>
#include<vector>
using namespace std;
vector<int> product(vector<int>nums,int n){
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int product = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                product*=nums[j];
            }
        }
        ans[i]=product;
    }
    return ans;

}
int main(){
    int n = 4;
    vector<int>nums = {1,2,3,4};
    vector<int>ans=product(nums,n);
    for(int val:ans){
        cout << val << " ";
    }   
    return 0; 
}