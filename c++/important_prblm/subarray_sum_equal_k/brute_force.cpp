#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int> arr = {9,4,20,3,10,5};
    int n = arr.size();
    int count = 0;
    int k = 33;
    vector<int> prefixSum(n,0);
    prefixSum[0]=arr[0];
    for(int i=1; i<n; i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
    unordered_map<int,int>m;
    for(int j=0; j<n; j++){
        if(prefixSum[j]==k){
            count++;
        }
        int value = prefixSum[j]-k;
        if(m.find(value)!=m.end()){
            count+=m[value];
        }  
        if(m.find(prefixSum[j])==m.end()){
            m[prefixSum[j]]=0;
        }
        m[prefixSum[j]]++;
    }
    cout << count;
}