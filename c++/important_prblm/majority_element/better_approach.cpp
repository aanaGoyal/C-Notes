#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Using sorting --->> 
int majorityElement(vector <int> arr, int n){
    sort(arr.begin(), arr.end());
    int ans = arr[0];
    int freq = 1;
    for(int i=1; i<n;i++){
        if(arr[i]==arr[i-1]){
            freq++;
        }else{
            freq = 1;
        }
        if(freq>(n/2)){
            return ans;
        }
    }
    return -1;
}
int main(){
    vector <int> arr = {1,2,2,1,1};
    int n = arr.size();
    cout << majorityElement(arr,n);
    return 0;
}