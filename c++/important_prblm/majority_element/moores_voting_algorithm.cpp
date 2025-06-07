#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector <int> arr, int n){
    int freq = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(freq==0){
            ans=arr[i];
        }
        if(ans==arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector <int> arr = {1,2,2,1,1};
    int n = arr.size();
    cout << majorityElement(arr,n);
    return 0;
}