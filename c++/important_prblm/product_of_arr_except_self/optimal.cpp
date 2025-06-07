#include<iostream>
#include<vector>
using namespace std;
vector<int> productArray(vector<int>arr,int n){
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    int suffix = 1;
    for(int i=n-2;i>=0;i--){
        suffix *= arr[i+1];
        ans[i] *= suffix;
    }
    return ans;

}
int main(){
    int n=4;
    vector <int> arr = {1,2,3,4};
    vector <int> ans=productArray(arr,n);
    for(int i=0;i < ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}