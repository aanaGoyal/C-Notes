#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>arr,int target){
    vector<int>ans;
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        int pairSum = arr[i]+arr[j];
        if(pairSum==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if(pairSum>target){
            j--;
        }else{
            i++;
        }
    }
    return ans;
}
int main(){
    vector <int> arr = {2,7,11,15};
    int target = 13;
    vector<int>answer = pairSum(arr,target);
    cout << answer[0] << " " << answer[1] << endl;
    return 0;
}